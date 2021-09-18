class String
    def is_i?
        /\A[-+]?\d+\z/ === self
    end

    def rstrip s
        n = self
        while s.chars.include? n[-1]
            n = n[0...-1]
        end

        n
    end
end

# Pre-processing
$fname = ARGV.first
$out_file = (ARGV.size > 1) ? ARGV[1] : '_out.c'
$raw = File.read($fname).chars
$code = ''

$raw.each do |ch|
    $code += ch if '+-><,.[]'.chars.include? ch
end

# Code shortening (for **performance**)
$code = $code.rstrip '+-><' # This is explained somewhere (it has a purpose)
# $code = $code.gsub '[-]+', '1'
# $code = $code.gsub '[+]+', '1'
$code = $code.gsub '[-]', '0'
$code = $code.gsub '[+]', '0'

# Single cell copying
scanned = $code.scan /(\[\-<+\+>+\])|(\[<+\+>+\-\])|(\[\->+\+<+\])|(\[>+\+<+\-\])/
scanned.each do |scan|
    if !scan[0].nil?
        scan = scan[0]
        sign = '-'
    elsif !scan[1].nil?
        scan = scan[1]
        sign = '-'
    elsif !scan[2].nil?
        scan = scan[2]
        sign = ''
    elsif !scan[3].nil?
        scan = scan[3]
        sign = ''
    end

    left = scan.count '<'
    right = scan.count '>'

    if left != right
        next
    end

    rep = "`p[#{sign}#{left}] += *p`0"
    # Note the 0 at the end to clear the current cell

    $code = $code.gsub scan, rep
end

# Procedures


# Double cell copying (doesn't work because of cases such as: [->+>>>>+<<<<<])
# scanned = $code.scan /(\[\->+\+>+\+<+\])|(\[>+\+>+\+<+\-\])|(\[\-<+\+<+\+>+\])|(\[<+\+<+\+>+\-\])/
# scanned.each do |scan|
#     if !scan[0].nil?
#         scan = scan[0]
#         sign = ''
#     elsif !scan[1].nil?
#         scan = scan[1]
#         sign = ''
#     elsif !scan[2].nil?
#         scan = scan[2]
#         sign = '-'
#     elsif !scan[3].nil?
#         scan = scan[3]
#         sign = '-'
#     end

#     left = scan.count '<'
#     right = scan.count '>'

#     if left != right
#         next
#     end

#     rep = "`p[#{sign}#{left / 2}] += *p`"
#     rep += "`p[#{sign}#{left}] += *p`"
#     rep += '0'
#     # Note that the 0 clears the current cell

#     # puts scan.to_s
#     # puts sign
#     # puts left
#     # puts rep
#     # abort

#     puts scan + ' -> ' + rep

#     $code = $code.gsub scan, rep
# end

# Use this to change the size of each cell
# (by default this is char, but that can make things a little awkward)
$m_type = (ARGV.size > 2) ? ARGV[2].downcase : 'char'
$m_type = $m_type.to_i if $m_type.is_i?

if $m_type == 2 ** 8 or $m_type == 'byte'
    $m_type = 'char'
elsif $m_type == 2 ** 16
    $m_type = 'short'
elsif $m_type == 2 ** 32 or $m_type == 'integer'
    $m_type = 'int'
elsif $m_type == 2 ** 64
    $m_type = 'long'
elsif $m_type == 2 ** 128 or $m_type == 'stupid' or $m_type == 'inf' or $m_type == 'infinity' or $m_type == 'infinite'
    $m_type = 'long long'
elsif Integer === $m_type
    $m_type = 'char'
# Otherwise, try to use the datatype that the person specified, and if it
# doesn't work, they probably typed it wrong
end

# Output code
o = "
#include <stdio.h>

int main() {
    unsigned char e = EOF;
    unsigned #$m_type m[30000] = {0};
    unsigned #$m_type * p = m;

".lstrip

# Compilation
adds = 0
subs = 0
rslides = 0
lslides = 0
calling = false
inline = false
scope = 1

$code.chars.each do |a|
    if a != ?+ and adds > 0
        o += '    ' * scope + '*p += ' + adds.to_s + ";\n"
        # o += '    ' * scope + "$m[$p] = 256 + $m[$p] if $m[$p] < 0\n"
        # o += '    ' * scope + "$m[$p] %= 256\n"
        adds = 0
    elsif a != ?- and subs > 0
        o += '    ' * scope + '*p -= ' + subs.to_s + ";\n"
        # o += '    ' * scope + "if (m[p] < 0) m[p] = 256 + m[p];\n"
        # o += '    ' * scope + "$m[$p] %= 256\n"
        subs = 0
    elsif a != ?> and rslides > 0
        o += '    ' * scope + 'p += ' + rslides.to_s + ";\n"
        rslides = 0
    elsif a != ?< and lslides > 0
        o += '    ' * scope + 'p -= ' + lslides.to_s + ";\n"
        lslides = 0
    end

    if a == ?`
        inline = !inline

        if inline
            o += '    ' * scope
        else
            o += ";\n"
        end
    elsif inline
        o += a
    elsif a == ?+
        adds += 1
    elsif a == ?-
        subs += 1
    elsif a == ?>
        rslides += 1
    elsif a == ?<
        lslides += 1
    elsif a == ?[
        o += "\n"
        o += '    ' * scope + "while (*p) {\n"
        scope += 1
    elsif a == ?(
        o += "\n"
        o += '    ' * scope + "if (*p) {\n"
        scope += 1
    elsif a == ?] or a == ?)
        scope -= 1
        o += '    ' * scope + "}\n\n"
    elsif a == ?,
        o += '    ' * scope + "*p = getchar();\n"
        o += '    ' * scope + "if ((unsigned char)(*p) == e) *p = 0;\n"
    elsif a == ?.
        o += '    ' * scope + "printf(\"%c\", *p);\n"
    elsif a == ?~
        o += '    ' * scope + "if (*p) *p = 0; else *p = 1;\n"
    elsif a == ?0
        o += '    ' * scope + "*p = 0;\n"
    elsif a == ?1
        o += '    ' * scope + "*p = 1;\n"
    end

    # if calling
    #     o += '    ' * scope + a + "();\n" if (?a..?z) === a
    # else
    #     o += '    ' * scope + 'int ' + a + "() {\n" if (?a..?z) === a
    # end

    # calling = a == ?!
end

# If any variables still hold values here, they can safely be ignored because
# they don't contribute in any way to the output of the program

File.write($out_file, o + "}\n")
