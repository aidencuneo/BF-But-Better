# I'm going to start working on an experimental compiler that allows BF
# programs to have way bigger integers instead of 1 byte ones

# It will hopefully use multiple cells for each integer and compile this into
# the resulting BF program

# I'm thinking of using 4 cells per integer? This would allow 2^32 possible
# states (4,294,967,296), which is more than enough

# If this ends up being wayyyyy too slow, I'll try 2 cells
# If it continues to be wayyyyy too slow after trying 2 cells, I may have to
# consider another option

o = ''

# Pre-processing
$fname = ARGV.first
$out_file = (ARGV.size > 1) ? ARGV[1] : '_out.bf'
$raw = File.read($fname).chars
$code = ''

$raw.each do |ch|
    $code += ch if '+-><,.[]'.chars.include? ch
end

# Code shortening (for **performance**)
$code = $code.gsub '[-]', '0'
$code = $code.gsub '[+]', '0'

# Compilation
$code.chars.each do |a|
    if a == '+'
        o += '+>+<[->>+>>>+<<<<<]>>>>>[<<<<->>>>[-]]<<<[-<<+>>]<<'
    elsif a == '-'
        o += '>-<[->>+>>>+<<<<<]>>>>>[<<<<+>>>>[-]]<<<[-<<+>>]<<-'
    elsif a == '>'
        o += '>>>>'
    elsif a == '<'
        o += '<<<<'
    elsif a == ','
        o += ',>[-]<'
    elsif a == '.'
        o += '.'
    elsif a == '['
        o += '[]>[]<'
    elsif a == ']'
        o += ''
    elsif a == '0'
        o += '[-]>[-]<'
    end
end

File.write($out_file, o + "\n")
