class String
    def is_i?
        /\A[-+]?\d+\z/ === self
    end
end

def lpad s, pad_len, pad_char
    return pad_char * (pad_len - s.size) + s
end

def array_split arr, split_at
    out = []
    current = []

    arr.each do |a|
        if a == split_at
            out.push current
            current = []
        else
            current.push a
        end
    end

    out.push current
    out
end

def error msg
    puts "\nCompilation terminated:\n"

    if $fname != $current_context
        puts "At #$fname:#$current_context : Line #$current_line\n\n"
    else
        puts "At #$fname : Line #$current_line\n\n"
    end

    line = $current_line

    prev_line_num = (line - 1).to_s
    mid_line_num = line.to_s
    next_line_num = (line + 1).to_s
    pad = next_line_num.size

    code_lines = $code.split($/)
    line_count = code_lines.size + 1

    prev_line = code_lines[line - 2] if line - 1 > 0
    next_line = code_lines[line] if line + 1 < line_count

    # Line number padding
    prev_line_num = lpad prev_line_num, pad, ' '
    mid_line_num = lpad mid_line_num, pad, ' '

    if line - 1 > 0
        puts "  #{prev_line_num} | #{prev_line}"
    end

    puts "> #{mid_line_num} | #{code_lines[line - 1]}"

    if line + 1 < line_count
        puts "  #{next_line_num} | #{next_line}"
    end

    abort "\nError: #{msg}"
end

def file_tok code
    out = []
    current = ''

    # comment = 0 # <> This is a comment
    # sq = false # ''
    # dq = false # ""
    # bt = false # ``
    # rb = 0 # ()
    # sb = 0 # []
    cb = 0 # {}

    # typ = ''
    # last_typ = ''

    # if (?a..?z) === code[0, 1].downcase or code[0, 1] == '_'
    #     typ = 'A'
    # elsif (?0..?9) === code[0, 1]
    #     typ = 'D'
    # elsif " \t\n\v\f\r".chars.include? code[0, 1]
    #     typ = 'W'
    # elsif '<>=&|!'.chars.include? code[0, 1]
    #     typ = 'X' # Sticky symbol (sticks to other sticky symbols)
    # else
    #     typ = 'S' # Dry symbol (doesn't stick to anything)
    # end

    i = 0
    while i < code.size
        c = code[i]

        if c == $/ and not (cb > 0)
            out.push current
            current = '' # current = c

        # This would be to remove pretty much all useful symbols from the code
        # (So either leave it be, or delete it)
        # elsif sq or dq or bt or rb > 0 or sb > 0 or cb > 0
        #     nil

        elsif c == $/
            out.push ''
            current += c

        else
            current += c
        end

        # Do the stuff with symbols
        # if c == ?'
        #     sq = !sq
        # elsif c == ?"
        #     dq = !dq
        # elsif c == ?`
        #     bt = !bt
        # elsif c == ?(
        #     rb += 1
        # elsif c == ?)
        #     rb -= 1
        # elsif c == ?[
        #     sb += 1
        # elsif c == ?]
        #     sb -= 1
        if c == ?{
            cb += 1
        elsif c == ?}
            cb -= 1
        end

        i += 1
    end

    out.push current
    out
end

def tokenise line
    out = []
    current = ''

    comment = 0 # <> This is a comment
    sq = false # ''
    dq = false # ""
    bt = false # ``
    rb = 0 # ()
    sb = 0 # []
    cb = 0 # {}

    sticky_chars = '<>=:&|!+-*/'.chars
    typ = ''
    last_typ = ''

    c = line[0, 1]

    if (?a..?z) === c.downcase or (?0..?9) === c or c == '_'
        typ = 'A'
    # A and D are now merged to make alphanumerical characters stick together
    # elsif (?0..?9) === c
    #     typ = 'D'
    elsif " \t\n\v\f\r".chars.include? c
        typ = 'W'
    elsif sticky_chars.include? c
        typ = 'X' # Sticky symbol (sticks to other sticky symbols)
    else
        typ = 'S' # Dry symbol (doesn't stick to anything)
    end

    i = 0
    while i < line.size
        c = line[i]

        # Get char type
        if (?a..?z) === c.downcase or (?0..?9) === c or c == '_'
            typ = 'A'
        elsif ' \t\n\v\f\r' === c
            typ = 'W'
        elsif sticky_chars.include? c
            typ = 'X' # Sticky symbol (sticks to other sticky symbols)
        else
            typ = 'S' # Dry symbol (doesn't stick to anything)
        end

        if c == '<' and comment == 0
            comment = 1
        elsif c == '>' and comment == 1
            # Remove the previous character since this is definitely a comment
            current = current[0...-1]
            comment = 2
        elsif c == $/
            comment = 0
        end

        if comment == 2
            # Do nothing when this is a comment
        elsif (typ != last_typ or typ == 'S') and not (sq or dq or bt or rb > 0 or sb > 0 or cb > 0)
            out.push current
            current = c

        # This would be to remove pretty much all useful symbols from the code
        # (So either leave it be, or delete it)
        # elsif sq or dq or bt or rb > 0 or sb > 0 or cb > 0
        #     nil

        else
            current += c
        end

        # Do the stuff with symbols
        if c == ?' and not (dq or bt or rb > 0 or sb > 0 or cb > 0)
            sq = !sq
        elsif c == ?" and not (sq or bt or rb > 0 or sb > 0 or cb > 0)
            dq = !dq
        elsif c == ?` and not (sq or dq or rb > 0 or sb > 0 or cb > 0)
            bt = !bt
        elsif c == ?( and not (sq or dq or bt or sb > 0 or cb > 0)
            rb += 1
        elsif c == ?) and not (sq or dq or bt or sb > 0 or cb > 0)
            rb -= 1
        elsif c == ?[ and not (sq or dq or bt or rb > 0 or cb > 0)
            sb += 1
        elsif c == ?] and not (sq or dq or bt or rb > 0 or cb > 0)
            sb -= 1
        elsif c == ?{ and not (sq or dq or bt or rb > 0 or sb > 0)
            cb += 1
        elsif c == ?} and not (sq or dq or bt or rb > 0 or sb > 0)
            cb -= 1
        end

        last_typ = typ
        i += 1
    end

    out.push current
    return *out.filter { |x| x if !x.strip.empty? }
end

def to_type_tokens tok
    # Convert all items into their type tokens
    types = []
    i = 0
    while i < tok.size
        a = tok[i]

        if a.is_i?
            num = a.to_i

            if num >= $INT_LIMIT
                puts ("\nWARNING: integer " + a + ' exceeds maximum size of ' +
                    ($INT_LIMIT - 1).to_s + ', it will be interpreted as ' +
                    (num % $INT_LIMIT).to_s)
                puts ''
            end

            types.push a.to_i % $INT_LIMIT
        elsif (a.start_with? ?" and a.end_with? ?") or (a.start_with? ?' and a.end_with? ?')
            ch = a[1...-1]
            ch = eval('"' + ch + '"') if ch.include? '\\'

            if ch.size > 1
                # Strings are allowed, but they can only be printed by printstr
                # error ('this language only supports char; "' +
                #     ch + '" is too long for char datatype')

                types.push ch
            else
                types.push ch.ord
            end

        # elsif a.start_with? ?` and a.end_with? ?`
        #     a[1...-1].split.each do |x|
        #         types.push x
        #     end

        else
            types.push a.to_sym
        end

        i += 1
    end

    return types
end

def compile tok, in_global_scope: true
    if tok.empty?
        return ''
    end

    puts 'compiling... ' + tok.to_s

    compiled = ''

    # Keywords (high precedence)
    if tok[0] == :sub
        if tok.size > 3
            error 'too many arguments for subroutine definition'
        elsif tok.size < 3
            error 'not enough arguments for subroutine definition'
        end

        name = tok[1]
        sub_code = [tok[2]]
        $subs[name] = sub_code

    elsif tok[0] == :call
        if tok.size > 2
            error 'too many arguments for subroutine call'
        end

        name = tok[1]
        puts 'CALLING! ' + name.to_s + '...'

        if !$subs.include? name
            error 'subroutine "' + name.to_s + '" is not defined'
        end

        # More syntactic sugar for function arguments
        # i = 2
        # while i < tok.size
        #     compiled += compile [('r' + i.to_s).to_sym, :'=', tok[i]]
        # end

        compiled += compile $subs[name]

    elsif tok[0] == :include
        if tok.size > 2
            error 'too many arguments for include statement'
        end

        if !in_global_scope
            error 'can only include modules in global scope'
        end

        name = tok[1]
        full_name = name
        module_code = nil

        if Symbol === name
            name = name.to_s
        end

        # Just debugging stuff
        puts 'INCLUDE!!! ' + name.to_s + '...'

        # Search for a module in builtins
        if $builtin_modules.include? name
            full_name = $builtin_modules[name]
            module_code = File.read(full_name)

        # Search for a module in the current directory
        elsif Dir['.'].include? name
            module_code = File.read(name)
        elsif Dir['.'].include? name + '.bfb'
            full_name = name + '.bfb'
            module_code = File.read(full_name)
        end

        if module_code.nil?
            error 'module "' + name.to_s + '" does not exist'
        end

        compiled += compile_file_code module_code, fname: full_name

    elsif tok[0] == :while
        code_block_index = tok.map { |x| x.to_s.start_with? '{' and x.to_s.end_with? '}' }
        code_block_index = code_block_index.index true

        if code_block_index.nil?
            error 'while loop without code block'
        end

        condition = tok[1...code_block_index]
        code = [tok[code_block_index]]

        if tok.size == 2
            compiled += '[' + (compile tok[1]) + ']'
        else
            compiled += compile condition
            compiled += '['
            compiled += compile code
            compiled += compile condition
            compiled += ']'
        end

    elsif tok[0] == :for
        code_block_index = tok.map { |x| x.to_s.start_with? '{' and x.to_s.end_with? '}' }
        code_block_index = code_block_index.index true

        if code_block_index.nil?
            error 'for loop without code block'
        end

        info = array_split tok[1...code_block_index], :';'
        code = [tok[code_block_index]]

        # Extract all the for loop stuff and use it
        puts info.to_s

        if info.size < 3
            error 'invalid syntax in for loop (expected more ";" symbols)'
        elsif info.size > 3
            error 'invalid syntax in for loop (expected fewer ";" symbols)'
        end

        initialise = info[0]
        condition = info[1]
        ending = info[2]

        if condition.empty?
            condition = [1]
        end

        compiled += compile initialise

        if tok.size == 2
            compiled += '[' + (compile tok[1]) + ']'
        else
            compiled += compile condition
            compiled += '['
            compiled += compile code
            compiled += compile ending
            compiled += compile condition
            compiled += ']'
        end

    elsif tok[0] == :if
        code_block_index = tok.map { |x| x.to_s.start_with? '{' and x.to_s.end_with? '}' }
        code_block_index = code_block_index.index true

        if code_block_index.nil?
            error 'if statement without code block'
        end

        condition = tok[1...code_block_index]
        code = [tok[code_block_index]]

        if tok.size == 2
            compiled += '[' + (compile tok[1]) + '[-]]'
        else
            compiled += compile condition
            compiled += '['
            compiled += compile code
            compiled += '[-]]'
        end

    elsif tok[0] == :dec
        if tok.size > 3
            error 'too many arguments given to dec keyword'
        end

        # Declaration is only allowed in global scope
        if not in_global_scope
            error 'can only declare variables in global scope'
        end

        # Variable name to declare
        name = tok[1]

        # Number of addresses to take up with this variable
        # (useful for arrays or very big numbers)
        var_size = 1

        if tok.size == 3
            var_size = tok[2]

            if !(Integer === var_size)
                error 'invalid size "' + var_size + '" for variable declaration'
            end

            var_size = var_size.to_i
        end

        # Put the variable in this address (and each address after until its
        # size is satisfied), then move over to the next address
        compiled += '[-]>>>' * var_size

        $var[name] = $addr
        $addr += var_size

    # Variables (higher precedence than operators)
    elsif tok[1...-1].include? :'='
        eql_index = tok.index :'='

        # symbol = value
        if Symbol === tok[0] and eql_index == 1
            name = tok[0]
            value = tok[2...]

        # value = symbol
        elsif Symbol === tok[eql_index + 1] and eql_index == tok.size - 2
            name = tok[eql_index + 1]
            value = tok[0...eql_index]

        else
            error 'invalid syntax in variable definition'
        end

        puts 'VARIABLE: ' + name.to_s + ' = ' + (compile value).to_s

        # Reassignment is allowed in any scope
        if $var.include? name
            # Get new variable value
            compiled += '[-]' # Not sure if this line is needed
            compiled += compile value

            dist = ($addr - $var[name]) * 3

            # Clear old variable value
            compiled += ('<' * dist) + '[-]' + ('>' * dist)

            # Cut new variable value into variable's address
            compiled += '[-' + ('<' * dist) + '+' + ('>' * dist) + ']'

        # Declaration is only allowed in global scope
        elsif in_global_scope
            # Clear this address before assigning a variable here
            compiled += '[-]'
            compiled += (compile value) + '>>>'

            # Put the variable in this address, then move over to the next address
            $var[name] = $addr
            $addr += 1

        # Raise error for trying to declare inside some scope other than the global one
        else
            error ('variables can only be declared in global scope (' + name.to_s +
                ' doesn\'t exist yet, use "dec ' + name.to_s + '")')
        end

    # Address assignment (equal precedence to variable assignment)
    elsif tok[1...-1].include? :':='
        # Address assignment isn't as flexible as variable assignment, so you
        # can't assign to an address backwards the same way you can assign to
        # a variable backwards (15 = variable)

        eql_index = tok.index :':='

        address = tok[...eql_index]
        value = tok[eql_index + 1...]

        puts address.to_s
        puts value.to_s

        # During most of this operation, the compiler doesn't know where the
        # pointer is, which means the pointer must come back to exactly where
        # it was when this operation began

        # Compile the value to assign
        compiled += compile value

        # Figure out how many times the program needs to go backwards before
        # it reaches the desired address

        # Distance = current address - desired address
        # !!! Distance must not equal 0 !!!

        calculation = [
            $addr, :-,
            '(' + (address.map {|x| x.to_s}).join(' ') + ')',
        ]

        # Put this into the address after the current one
        compiled += '>>>'
        $addr += 1

        compiled += compile calculation

        # Copy it into empty1 (the cell directly after the current one)
        # and also the empty1 of the next address
        compiled += '[->+<<<+>>]'

        # Move back and point at the distance cell
        compiled += '<<'
        $addr -= 1

        # Now, in this address, we have: <value>, distance, empty2 (0)

        # abort compiled

        # Use the distance to go back to the specified address

        # Move backwards until distance is 0
        # (and carry the value along the way, as well as the second distance
        # cell stored in the empty1 of the next address)

        compiled += (
        """
        [
            [-<<+>>] < [-<<+>>] >>>> [-<<<+>>>]
            <<<<<-
            [
                [-<<<+>>>] < [-<<<+>>>] >>> [-<<<+>>>]
                <<<<<-
            ]
        ]

        <<
        """.gsub! ' ', '').gsub! $/, ''

        # (the last line here is to align with the final address)

        # The desired address has been reached

        # Now copy the value from empty1 to its new home (but not before
        # clearing the old value))
        compiled += '[-]>[-<+>]<'

        # abort compiled

        # Copy the second distance cell to empty1
        compiled += '>>>>[-<<<+>>>]'

        # Point at empty1
        compiled += '<<<'

        # Go forward to the current address

        # Move forwards until distance is 0

        compiled += (
        """
        [
            [->+<]
            >
            [
                [->>>+<<<]
                >>>-
            ]
        ]

        <<
        """.gsub! ' ', '').gsub! $/, ''

        # (the last line here is to align with the current address)

        # Current address has been reached

        # Done

    # Inplace assignment (just syntactic sugar)
    elsif (
        tok[1...-1].include? :'+='
    ) or (
        tok[1...-1].include? :'-='
    ) or (
        tok[1...-1].include? :'*='
    ) or (
        tok[1...-1].include? :'/='
    )
        if tok[1...-1].include? :'+='
            symbol = :+
        elsif tok[1...-1].include? :'-='
            symbol = :-
        elsif tok[1...-1].include? :'*='
            symbol = :*
        elsif tok[1...-1].include? :'/='
            symbol = :/
        end

        tokens = [tok[0], :'=', tok[0], symbol] + tok[2...]
        compiled += compile tokens

    # Increment/decrement operators (just more syntactic sugar)
    elsif tok[0] == :'++' or tok[0] == :'--'
        if tok[0] == :'++'
            symbol = :+
        elsif tok[0] == :'--'
            symbol = :-
        end

        tokens = [tok[1], :'=', tok[1], symbol, 1]
        compiled += compile tokens

    elsif tok.size > 1 and (tok[1] == :'++' or tok[1] == :'--')
        if tok[1] == :'++'
            symbol = :+
        elsif tok[1] == :'--'
            symbol = :-
        end

        tokens = [tok[0], :'=', tok[0], symbol, 1]
        compiled += compile tokens

    # Keyword functions (higher precedence than operators, but lower than variables)
    elsif tok[0] == :print
        compiled += (compile tok[1...]) + '.'

    elsif tok[0] == :putprint
        tok[1...].each do |token|
            compiled += (compile [token]) + '.'
        end

    elsif tok[0] == :printstr or tok[0] == :println
        if tok.size > 2
            error "too many arguments given to #{tok[0]} keyword"
        end

        str = tok[1]
        puts str

        # Print the string letter by letter
        str.chars.each do |ch|
            compiled += compile [:print, ch.ord]
        end

        # Print a newline if this is println
        if tok[0] == :println
            compiled += compile [:print, 10]
        end

    elsif tok[0] == :input
        compiled += ','

    # Binary operators
    elsif $bin_opers.include? tok[1].to_s
        if tok.size > 3
            error 'too many tokens in a line that performs a binary operation'
        elsif tok.size < 3
            error 'invalid syntax'
        end

        a, b, c = tok
        b = b.to_s
        puts a.to_s + ' ' + b.to_s + ' ' + c.to_s

        # Load first argument into current address
        # Load second argument into the cell directly after the current address
        compiled += compile [a]
        compiled += '>>>'
        $addr += 1
        compiled += compile [c]
        # Begin operations in the address just after the current address

        # Memory: addr1 empty1 empty2 addr2 empty3 empty4
        #                              ^^^

        if b == '+' or b == 'or' or b == '||'
            # While second argument is > 0,
            #   subtract one from second argument and add one to first argument
            compiled += '[-<<<+>>>]'
        elsif b == '-' or b == '!='
            # While second argument is > 0,
            #   subtract one from both arguments
            compiled += '[-<<<->>>]'
        elsif b == '*' or b == 'and' or b == '&&'
            # While second argument is > 0,
            #   add first argument to itself
            #   subtract one from second argument
            compiled += '[<<<[->+>+<<]>>[-<<+>>]>-]'

            # Copy result from empty1 to first argument
            # (after clearing first argument)
            compiled += '<<<[-]>[-<+>]'

            # Move back to second argument
            compiled += '>>'
        elsif b == '/'
            error 'division not implemented yet, try the "/" subroutine from the standard module'
        elsif b == '=='
            # (Subtraction '-')
            # (Logical NOT '!')

            # While second argument is > 0,
            #   subtract one from both arguments
            compiled += '[-<<<->>>]'

            # Move back to first argument
            compiled += '<<<'

            # While first argument > 0,
            #   add one to the next cell over,
            #   then move back one cell and clear the first argument,
            # Set the first argument to one
            compiled += '[>+<[-]]+'

            # Now, if the next cell over is one, set the first argument to zero
            compiled += '>[-<->]<'

            # Move back to second argument
            compiled += '>>>'
        elsif b == '>' or b == '<' or b == '>=' or b == '<='
            # Memory: r0 empty1 condition r1 empty3 empty4
            #                             ^^

            # To prevent weird issues:
            # r0 += 1
            # r1 += 1
            compiled += '+<<<+'

            # condition = 1
            compiled += '>>+'

            # while condition {
            #     r0 -= 1
            #     r1 -= 1
            compiled += '[>-<<<-'

            # Memory: r0 empty1 condition r1 empty3 empty4
            #         ^^
            #     if !r0 {
            #         condition = 0
            #     }
            compiled += '[->+>>>>+<<<<<]' # Cut r0 to empty1 and empty4 (for later)
            compiled += '+' # Set r0 to one
            compiled += '>[<->[-]]<' # If empty1, set r0 to zero (this also clears empty1)

            # The original r0 is now held in empty4
            # r0 now holds !r0

            compiled += '[>>[-]<<[-]]' # Set condition to zero if !r0

            # Memory: 0 empty1 condition r1 empty3 r0
            #        ^^^
            compiled += '>>>>>[-<<<<<+>>>>>]<<<<<' # Copy r0 back into its original place

            # Memory: r0 empty1 condition r1 empty3 empty4
            #         ^^
            #     if !r1 {
            #         condition = 0
            #     }
            compiled += '>>>[->+>+<<]' # Cut r1 to empty3 and empty4 (for later)
            compiled += '+' # Set r1 to one
            compiled += '>[<->[-]]<' # If empty3, set r1 to zero (this also clears empty3)

            # The original r1 is now held in empty4
            # r1 now holds !r1

            compiled += '[<[-]>[-]]' # Set condition to zero if !r1

            # Memory: r0 empty1 condition 0 empty3 r1
            #                            ^^^
            compiled += '>>[-<<+>>]<<' # Copy r1 back into its original place

            # } (end of the loop)
            # Point at condition for the end of the loop
            compiled += '<]'

            # After the loop, use this to figure out what the result should be
            # lt  = r1
            # gte = !r1
            # gt  = r0
            # gte = !r0

            # Pointer is at condition now and must finish at r1
            # Result must be stored in r0

            if b == '>'
                # Clear r1 (r1 is not needed)
                compiled += '>[-]'

                # If r0, set empty1 to 1, otherwise, empty1 will be 0
                compiled += '<<<[>+<[-]]'

                # Cut empty1 to r0
                compiled += '>[-<+>]'

                # Point to r1
                compiled += '>>'

            elsif b == '<'
                # Clear r0 (r0 is not needed)
                compiled += '<<[-]'

                # If r1, set r0 to 1, otherwise, r0 will be 0
                compiled += '>>>[<<<+>>>[-]]'

            elsif b == '>='
                # Clear r0 (r0 is not needed)
                compiled += '<<[-]'

                # Set empty1 to 1
                compiled += '>+'

                # If r1, set empty1 to 0, otherwise, empty1 will be 1
                compiled += '>>[<<->>[-]]'

                # Cut empty1 to r0
                compiled += '<<[-<+>]'

                # Point to r1
                compiled += '>>'

            elsif b == '<='
                # Clear r1 (r1 is not needed)
                compiled += '>[-]'

                # Set empty1 to 1
                compiled += '<<+'

                # If r0, set empty1 to 0, otherwise, empty1 will be 1
                compiled += '<[>-<[-]]'

                # Cut empty1 to r0
                compiled += '>[-<+>]'

                # Point to r1
                compiled += '>>'
            end

            # R0 = !r1
        end

        # After the operation is completed, it is assumed that empty cells are
        # now empty again, so now move back to the current address
        compiled += '<<<'
        $addr -= 1

    # Unary operators
    elsif $unary_opers.include? tok[0].to_s
        if tok.size > 2
            error 'too many tokens in a line that performs a unary operation'
        elsif tok.size < 2
            error 'invalid syntax'
        end

        a, b = tok
        a = a.to_s
        puts a.to_s + ' ' + b.to_s

        # Load first argument into current address
        compiled += compile [b]

        if a == '!'
            # While first argument > 0,
            #   add one to the next cell over,
            #   then move back one cell and clear the first argument,
            # Set the first argument to one
            compiled += '[>+<[-]]+'

            # Now, if the next cell over is one, set the first argument to zero
            compiled += '>[-<->]<'
        elsif a == '~'
            # Perform empty1 (0 at this point) - addr
            # Cut and paste empty1 to addr

            compiled += '[->-<]'
            compiled += '>[-<+>]<'
        end

        # The result is stored in the current address

    # Address of
    elsif tok[0] == :&
        if tok.size > 2
            error 'too many arguments for the "address of" operator ("&")'
        end

        name = tok[1]

        if !$var.include? name
            error 'tried to get the address of "' + name.to_s + '", which hasn\'t been declared yet'
        end

        address = $var[name]

        # Treat this address as a regular integer and push it into the current
        # address

        # Keep in mind that at this point in time there can only be 256
        # different addresses before an overflow occurs

        compiled += compile [address]

    # Dereference
    elsif tok[0] == :*
        if tok.size > 2
            error 'too many arguments for the dereference operator ("*")'
        end

        address = [tok[1]]
        puts address.to_s

        # During most of this operation, the compiler doesn't know where the
        # pointer is, which means the pointer must come back to exactly where
        # it was when this operation began

        # Figure out how many times the program needs to go backwards before
        # it reaches the desired address

        # Distance = current address - desired address
        # !!! Distance must not equal 0 !!!

        calculation = [
            $addr, :-,
            '(' + (address.map {|x| x.to_s}).join(' ') + ')',
        ]

        # Put this into the address after the current one
        compiled += '>>>'
        $addr += 1

        compiled += compile calculation

        # Copy it into empty1 (the cell directly after the current one)
        # and also the empty1 of the next address
        compiled += '[->+<<<+>>]'

        # Move back and point at the distance cell
        compiled += '<<'
        $addr -= 1

        # Now, in this address, we have: 0, <distance>, empty2 (0)

        # abort compiled

        # Use the distance to go back to the specified address

        # Move backwards until distance is 0
        # (and carry the second distance cell stored in the empty1 of the
        # next address)

        compiled += (
        """
        [
            [-<<+>>] >>> [-<<<+>>>]
            <<<<<-
            [
                [-<<<+>>>] >> [-<<<+>>>]
                <<<<<-
            ]
        ]

        <<
        """.gsub! ' ', '').gsub! $/, ''

        # (the last line here is to align with the final address)

        # The desired address has been reached

        # Now copy the value from this address to empty2
        compiled += '[->+>+<<]>[-<+>]<'

        # Copy the second distance cell to empty1
        compiled += '>>>>[-<<<+>>>]'

        # Point at empty1
        compiled += '<<<'

        # Go forward to the current address

        # Move forwards until distance is 0
        # (and carry the value along the way)

        compiled += (
        """
        [
            [->>>+<<<] > [->>>+<<<]
            >>-
            [
                [->>>+<<<] > [->>>+<<<]
                >>-
            ]
        ]
        """.gsub! ' ', '').gsub! $/, ''

        # Copy value from empty2 to the current address
        compiled += '>[-<<+>>]'

        # Align with the current address
        compiled += '<<'

        # Current address has been reached

        # Done

    # Code block (should be low precedence)
    elsif (
        tok[0].to_s.start_with? ?{ and tok[0].to_s.end_with? ?}
    ) or (
        tok[0].to_s.start_with? ?( and tok[0].to_s.end_with? ?)
    )
        # is_multi_line = (tok[0].to_s.start_with? ?{ and tok[0].to_s.end_with? ?})

        code = tok[0][1...-1]
        code_tok = file_tok code
        code_tok.each do |line|
            tokenised = to_type_tokens tokenise line
            compiled_line = compile tokenised, in_global_scope: false
            compiled += compiled_line
            # compiled += $SEP if !compiled_line.empty? and is_multi_line
        end

    # Inline code (should be very low precedence)
    elsif tok[0].to_s.start_with? ?` and tok[0].to_s.end_with? ?`
        compiled += tok[0][1...-1]

    # Symbols (should be very low precedence)
    elsif Symbol === tok[0] and tok.size == 1
        if !$var.include? tok[0]
            error 'undefined variable or method "' + tok[0].to_s + '"'
        end

        var_addr = $var[tok[0]]
        dist = ($addr - var_addr) * 3 # Distance of var from current address

        # If distance is zero, there's no point copying a variable to itself
        if dist != 0
            # Clear the cell used to copy and paste this symbol
            compiled += '[-]'

            # Move to variable's address
            # if dist < 0
            #     compiled += '>' * -dist
            # else
                compiled += '<' * dist
            # end

            puts dist

            # Clear empty1 and empty2
            # Cut from $addr1 to empty1 and empty2
            # Cut from empty2 to $addr1
            compiled += '>[-]>[-]<<'
            compiled += '[->+>+<<]'
            compiled += '>>[<<+>>-]<<'

            # Now I have $addr1_value1, $addr1_value2, empty
            # Cut $addr1_value2 to current address
            compiled += (
                '>[-' +
                ((dist < 0) ? '<' * (-dist - 1) : '>' * (dist - 1)) +
                '+' +
                ((dist < 0) ? '>' * (-dist - 1) : '<' * (dist - 1)) +
                ']'
            )

            # Finish this operation back in the current address
            compiled += ((dist < 0) ? '<' * (-dist - 1) : '>' * (dist - 1))
        end

    # Numbers (should be very low precedence)
    elsif Integer === tok[0] and tok.size == 1
        split = [
            tok[0] / 10,
            tok[0] % 10,
        ]

        # Clear the two cells used to create this integer
        compiled += '[-]>[-]<'

        # Don't modify the address ($addr) because this isn't moving far
        # enough to call it a new address

        # Add the first split
        if split[0] > 0
            compiled += '>' + '+' * split[0]
            compiled += '[<' + ('+' * 10) + '>-]<'
        end

        # Now add the remainder
        compiled += '+' * split[1]

    # Errors
    else
        error 'invalid syntax'
    end

    compiled
end

def compile_file_code code, fname: '<string>'
    compiled = ''

    code_tokenised = file_tok code
    code_tokenised.each do |line|
        $current_context = fname
        $current_line += 1

        tok = to_type_tokens tokenise line
        compiled += compile tok
    end

    compiled
end

def post_process code
    clean_code = ''
    slides = 0

    code.chars.each do |char|
        if char == '+' or char == '-' or char == ',' or char == '.' or char == '[' or char == ']'
            if slides > 0
                clean_code += '>' * slides
            elsif slides < 0
                clean_code += '<' * -slides
            end

            slides = 0
            clean_code += char
        elsif char == '>'
            slides += 1
        elsif char == '<'
            slides -= 1
        end
    end

    reshaped_code = ''
    line_len = 0

    clean_code.chars.each do |char|
        reshaped_code += char

        if (line_len += 1) >= $MAX_LINE_LENGTH
            reshaped_code += $/
            line_len = 0
        end
    end

    return reshaped_code
end

if ARGV.size < 1
    abort 'Input filen not given'
end

# Maximum size for integers
$INT_LIMIT = 256
# $SEP = $/ # ''
$MAX_LINE_LENGTH = 80

$bin_opers = '+-*/%&|^><'.chars + [
    '==', '!=', '>=', '<=', 'and', 'or', '&&', '||',
]

$unary_opers = '!~'.chars + []

$fname = ARGV.first
$out_file = (ARGV.size > 1) ? ARGV[1] : '_out.bf'
$code = File.read($fname)
$current_line = 0
$current_context = $fname
$compiled = ''

# Addresses look like this in bf memory:
# $addr1, empty, empty, $addr2, empty, empty, $addr3, empty, empty...
# The empty cells are there to make operations easier to perform

$addr = 0
$var = {}
$subs = {}
# $modules = {}
$builtin_modules = {}

Dir['./builtins/*.bfb'].each do |path|
    module_id = path[11...-4]
    $builtin_modules[module_id] = path
end

# Tokenise the subroutines
# $subs.each_key do |name|
#     $subs[name] = to_type_tokens tokenise $subs[name]
# end

# Compile whole input file
$compiled = compile_file_code $code, fname: $fname

# Post processing
$clean_code = post_process $compiled

# Write compiled code
File.write($out_file, $clean_code + $/)
