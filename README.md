# BF But Better
A compiler that compiles into raw BF.

## Main files
- `src/bf_but_better.rb`: This compiles BFB code into BF code.
- `src/bf.rb`: This compiles BF code into C code.

It would be handy to have GCC installed so that you can compile your C code
into something executable on your computer.

## What are these file extensions?
Files ending in `.bf` and `.bfb` are fairly self explanatory; they contain BF
code and BFB code, respectively. `.c` files are the same, they contain C code.
`.out` files are the result of GCC compiling C code into code that your
computer can understand (the same goes for `.exe` if there are any of those in
here). But not every computer. More specifically, the computer you compiled
it on.

## Getting started

### A Quick Note
Before you even begin to program in this language, I HIGHLY RECOMMEND
that you declare your variables in order of size (as in, big ones first,
medium ones next, smallest ones last). Arrays count as big variables, so
declare them first. However, you can ignore this request and code however you
want to, but after you do so, you will probably want to run your code through
`src/experimental/cell_map_compressor.rb` to cut down your code size. For
example: `ruby src/experimental/cell_map_compressor.rb _out.bf 500 80`
(where `500` is number of iterations and `80` is the line length in the
output file). Optionally, you can append an output file to the end of that
command: `... _out.bf 500 80 file.bf`.

### Ok, seriously, getting started
Now that we've gotten that out of the way, you can begin programming. Go ahead
and make yourself a file in the `examples` folder, or just anywhere in this
area. Let's start with the "Hello, World!" of BFB. Try putting the following
code in your new file:

```
println 'Hello, World!'
```

Easy! You can compile this code with `./comp.sh <filename>` (sorry Windows
users, I'll make a batch file for you guys soon). Also, you can pass an
optional argument to the `comp.sh` script which changes the size of your
integers. This affects both the BFB and BF compilation. You can just give it
any number or some kind of datatype that it understands and it'll make that
the new size of your integers. For example, compile with
`./comp.sh <filename> short` to have integers up to but not including 65,536.
Similarly, you can use `./comp.sh <filename> 700` to have integers up to
but not including 700 (that's oddly specific and will almost definitely not
work as intended, but you get the point). I would recommend sticking to
datatypes such as char, int, long, etc, otherwise the BF compiler may have a
little trouble figuring out how to make things specific for you.
