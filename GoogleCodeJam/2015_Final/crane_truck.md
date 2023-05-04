# Problem

You are in a large storage facility, with 240 storage locations arranged in a circle.

A truck with a crane on it moves along the circle of storage locations, picking up or putting down crates according to a program. (The truck has an unlimited supply of crates on board, so it can always put more crates down.)

The program consists of a sequence of these instructions:

- b : move back one location
- f : move forward one location
- u : pick up one crate at the current location
- d : put down one crate at the current location
- ( : do nothing
- ) : if there is more than one crate at the current location, move back to the most recent ( in the sequence of instructions, and continue the program from there. (This doesn't move the truck.)

( and ) instructions in the program will always come in pairs: a ( will be followed later by a matching ). There will be at most two such pairs in the program, and if there are two pairs, they will not be nested – that is, there will be either:

- no ( or ) instructions;
- one ( instruction somewhere in the program, followed later by one ) instruction;
- a ( instruction, followed later by a ) instruction, followed later by another (, and again later by another ).

The sample cases contain examples of each of these.

Each storage location begins with one crate, before the crane truck starts running its program.

Mysteriously, if the truck picks up the last crate at a location, another truck instantly comes along and puts down 256 crates there! Similarly, if the truck puts down a crate at a location, and that location then has 257 crates, another truck instantly drives past and picks up 256 of the crates, leaving one behind! So every location always has between 1 and 256 crates.

How many times will the truck move forward or backward before reaching the end of its program?

## Input

One line containing an integer T, the number of test cases in the program.

T lines, each containing a crane truck program with up to 2000 characters.
