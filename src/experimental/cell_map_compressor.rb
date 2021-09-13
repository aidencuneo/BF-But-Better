class String
    def is_i?
        /\A[-+]?\d+\z/ === self
    end

    def rstrip s
        n = self
        while s.chars.include? n[-1]
            n = n[...-1]
        end

        n
    end
end


def gen_insts code
    # Anything that doesn't produce output should be stripped from the end
    code = code.rstrip '+-><[]'

    insts = []
    adds = 0
    subs = 0
    rslides = 0
    lslides = 0

    code.chars.each do |a|
        if a != ?+ and adds > 0
            insts.push ['+', adds]
            adds = 0
        elsif a != ?- and subs > 0
            insts.push ['-', subs]
            subs = 0
        elsif a != ?> and rslides > 0
            insts.push ['>', rslides]
            rslides = 0
        elsif a != ?< and lslides > 0
            insts.push ['<', lslides]
            lslides = 0
        end

        if a == ?[
            insts.push ['[', 1]
        elsif a == ?]
            insts.push [']', 1]
        elsif a == ?,
            insts.push [',', 1]
        elsif a == ?.
            insts.push ['.', 1]
        end

        adds += 1 if a == ?+
        subs += 1 if a == ?-
        rslides += 1 if a == ?>
        lslides += 1 if a == ?<
    end

    insts
end


def gen_code insts
    code = ''

    insts.each do |inst|
        code += inst[0] * inst[1]
    end

    code
end


def to_exact insts
    new_insts = []

    pos = 0
    insts.each do |inst|
        type = inst[0]
        count = inst[1]

        if pos < 0 and $RAISE_ERRORS
            abort (
                'Error: memory pointer can not be negative (your code ' +
                'might have too many "<" characters)'
            )
        end

        if type == '>'
            pos += count
            # Modify this instruction to be exact
            new_insts.push ['=', pos]
        elsif type == '<'
            pos -= count
            # Modify this instruction to be exact
            new_insts.push ['=', pos]
        else
            new_insts.push inst
        end
    end

    new_insts
end


def to_relative insts
    new_insts = []

    pos = 0
    insts.each do |inst|
        type = inst[0]
        count = inst[1]

        if type == '='
            if count.nil?
                puts 'what'
                puts inst.to_s
                puts insts.to_s
                1 + nil
            end

            diff = pos - count
            pos = count

            # Modify this instruction to be relative
            if diff > 0
                new_insts.push ['<', diff]
            elsif diff < 0
                new_insts.push ['>', -diff]
            # If there is no change, don't push an instruction
            end
        else
            new_insts.push inst
        end
    end

    new_insts
end


def keep insts, what_to_keep
    what_to_keep = what_to_keep.chars if String what_to_keep
    new_insts = []

    insts.each do |inst|
        new_insts.push inst if what_to_keep.include? inst[0]
    end

    new_insts
end


def apply_cell_map insts, cell_map
    # insts is assumed to contain exact instructions
    new_insts = []

    insts.each do |inst|
        type = inst[0]
        count = inst[1]

        if type == '='
            new_insts.push [inst[0], cell_map[count]]
        else
            new_insts.push [type, count]
        end
    end

    new_insts
end


def find_best_cell_map insts
    cell_map = best_cell_map = []
    cell_map_size = 0

    stripped = keep insts, '='
    best_size = (gen_code to_relative stripped).size

    puts 'Best cell map size: ' + best_size.to_s

    # First, find the current cell map being used, along with its size
    i = 0
    while i < insts.size
        type = insts[i][0]
        count = insts[i][1]

        cell_map_size = count if type == '=' and count > cell_map_size

        i += 1
    end

    # Generate initial cell map
    cell_map = best_cell_map = []

    (cell_map_size + 1).times do |i|
        cell_map.push i
    end

    # Start finding a better cell map (use random shuffling)
    $ITERATIONS.times do
        # Generate random cell map
        start = rand cell_map_size
        stop = start + rand(cell_map_size - start)

        if start == stop or rand(5) == 0
            new_cell_map = best_cell_map[start...] + best_cell_map[0, start]
        else
            new_cell_map = best_cell_map.clone
            new_cell_map[start, stop] = new_cell_map[start, stop].shuffle
        end

        # Test this new cell map against the best one
        new_code = gen_code to_relative(apply_cell_map stripped, new_cell_map)

        if new_code.size < best_size
            best_cell_map = new_cell_map
            best_size = new_code.size
            puts 'Found a new best cell map with a size of: ' + best_size.to_s
        end
    end

    best_cell_map
end


# Settings
$ITERATIONS = (ARGV.size > 1) ? ARGV[1].to_i : 1000
$MAX_LINE_LENGTH = (ARGV.size > 2) ? ARGV[2].to_i : -1
$RAISE_ERRORS = false # Should I raise errors or trust the user instead?

# Pre-processing
$fname = ARGV.first
$out_file = (ARGV.size > 3) ? ARGV[3] : '_out_compressed.bf'
$raw = File.read($fname).chars
$code = ''

$raw.each do |ch|
    $code += ch if '+-><,.[]'.chars.include? ch
end

# Generate instructions
insts = gen_insts $code

# Convert all slides into exact slides (basically goto statements for cells)
exact = to_exact insts

# There must be a goto instruction at the start of the program which points to
# cell 0, otherwise the program will start in the wrong spot
exact.insert 0, ['=', 0]

# Find best cell map
cell_map = find_best_cell_map exact
puts cell_map.to_s

# You can also define your own cell map if you want to, just make sure it's
# the right size
# cell_map = [4, 3, 2, 1, 0]

# Write compressed code to output file
code = gen_code to_relative(apply_cell_map exact, cell_map)

# Reshape the code (if desired)
if $MAX_LINE_LENGTH > -1
    reshaped_code = ''
    line_len = 0

    code.chars.each do |char|
        reshaped_code += char

        if (line_len += 1) >= $MAX_LINE_LENGTH
            reshaped_code += $/
            line_len = 0
        end
    end

    code = reshaped_code + $/
end

File.write($out_file, code)
