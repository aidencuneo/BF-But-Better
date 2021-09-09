o = '''
#include <stdio.h>

int main() {
    unsigned int ptr = 0;
    unsigned char mem[30000] = {0};

'''.lstrip

# Pre-processing
$raw = $<.read.chars
$code = ''

$raw.each do |ch|
    $code += ch if '+-><,.[]'.chars.include? ch
end

# Code shortening (for **performance**)
$code = $code.gsub '[-]+', '1'
$code = $code.gsub '[+]+', '1'
$code = $code.gsub '[-]', '0'
$code = $code.gsub '[+]', '0'

# Compilation
adds = 0
subs = 0
rslides = 0
lslides = 0
calling = false
scope = 1

$code.chars.each do |a|
    if a != ?+ and adds > 0
        o += '    ' * scope + 'mem[ptr] += ' + adds.to_s + ";\n"
        # o += '    ' * scope + "$mem[$ptr] = 256 + $mem[$ptr] if $mem[$ptr] < 0\n"
        # o += '    ' * scope + "$mem[$ptr] %= 256\n"
        adds = 0
    elsif a != ?- and subs > 0
        o += '    ' * scope + 'mem[ptr] -= ' + subs.to_s + ";\n"
        # o += '    ' * scope + "if (mem[ptr] < 0) mem[ptr] = 256 + mem[ptr];\n"
        # o += '    ' * scope + "$mem[$ptr] %= 256\n"
        subs = 0
    elsif a != ?> and rslides > 0
        o += '    ' * scope + 'ptr += ' + rslides.to_s + ";\n"
        rslides = 0
    elsif a != ?< and lslides > 0
        o += '    ' * scope + 'ptr -= ' + lslides.to_s + ";\n"
        lslides = 0
    end

    if a == ?[
        o += "\n"
        o += '    ' * scope + "while (mem[ptr]) {\n"
        scope += 1
    elsif a == ?{
        o += "\n"
        o += '    ' * scope + "if (mem[ptr]) {\n"
        scope += 1
    elsif a == ?] or a == ?} or a == ?;
        scope -= 1
        o += '    ' * scope + "}\n\n"
    elsif a == ?,
        o += '    ' * scope + "mem[ptr] = getchar();\n"
    elsif a == ?.
        o += '    ' * scope + "printf(\"%c\", mem[ptr]);\n"
    elsif a == ?~
        o += '    ' * scope + "if (mem[ptr]) mem[ptr] = 0; else mem[ptr] = 1;\n"
    elsif a == ?0
        o += '    ' * scope + "mem[ptr] = 0;\n"
    elsif a == ?1
        o += '    ' * scope + "mem[ptr] = 1;\n"
    end

    adds += 1 if a == ?+
    subs += 1 if a == ?-
    rslides += 1 if a == ?>
    lslides += 1 if a == ?<

    if calling
        o += '    ' * scope + a + "();\n" if (?a..?z) === a
    else
        o += '    ' * scope + 'int ' + a + "() {\n" if (?a..?z) === a
    end

    calling = a == ?!
end

# If any variables still hold values here, they can safely be ignored because
# they don't contribute in any way to the output of the program

File.write('_out.c', o + "}\n")
