# Version
Version 1.1

# What is A?
A is an esoteric programming language. It is not useful but it does prove itself as a programming language.
It was mainly made for fun and to test my programming skills. It is inspired by Brainfuck (go search that up if youre
unfamiliar :D)

# Why should I use it?
You shouldn't. But if you must, the syntax is like this:
| Syntax | Description |
|--------|-------------|
| a | Output "Hello, World!" (you can also use A) |
| + | Increment a counter (initialised to 0). |
| - | Decrement a counter. |
| . | Output the counter value (++-. would output 1) |


# How does it work?
You can check compiler.c; but it opens a file, reads it, loops through it and finds the characters in it.
It does not have comments, so you cannot do;
..a++ This is an example comment.
It would output; 
```bash
0
0

Hello, World!
Hello, World!
Hello, World!2
```
; as it takes a and . literally.
If you MUST use comments. use '4' for 'a' (as in abcd -> 4bcd) and try not to use periods/ full stops, use commas instead for the same purpose.
This is just if you want to (not enforced by the compiler)

# What should I do to use it?
Download and compile compiler.c in the same folder you will use the main.a file in, using gcc compiler.c -o compiled (or your own
compiler). Then make the main.a file; put some code in it and run ./compiled if you're on Linux/ MacOS (for Windows, run the exec. made 
by the compiler) in the same folder you put main.a and compiler.c in. MAKE SURE MAIN.A EXISTS (using A version 1.0); COMPILER.C DOES NOT CHECK IF MAIN.A 
EXISTS, IF IT DOES NOT EXIST, IT WILL SEGFAULT!

If you made successful code and run the compiled file; you should see your respective output; you made your first A program!

# What does main.a look like?

For Hello World;
```
a
```

For adding 1+1 and printing it;
```
++.
```

For doing 4-2 and printing it;
```
++++--.
```

These are some of the programs you can make. 

That's it for A (A-Lang) for now. Have fun creating some very limited programs!!! (or editing compiler.c to your liking, like adding
more keywords/syntaxes!)
