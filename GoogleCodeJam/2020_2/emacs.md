# Problem

In 2016's Distributed Code Jam, we introduced the Lisp++ language for Lisp fans who prefer a higher density of parentheses. Here is a reminder of how the language's syntax works:

A Lisp++ program is a string of balanced parentheses. More formally, a Lisp++ program consists of one of the following. (In this specification, C stands for some program code — not necessarily the same code each time.)

    () Literally, just an opening parenthesis and a closing parenthesis. We say that this ( matches this ), and vice versa.
    (C) A program within a pair of enclosing parentheses. We say that this ( matches this ), and vice versa.
    CC Two programs (not necessarily the same), back to back.

This year, we are pleased to announce Emacs++, a text viewer for Lisp++. Emacs++ displays a Lisp++ program of length K as a single long line with a cursor that you can move around. The cursor is a "block cursor" that is always located on one of the K characters in the program, rather than between characters.

At any point, you can perform one of the following three actions to move the cursor. (i represents the current position of the cursor, counting starting from 1 for the leftmost position.)

    Move the cursor one character to the left (or, if the cursor is already on the leftmost character, does nothing). This takes Li seconds.
    Move the cursor one character to the right (or, if the cursor is already on the rightmost character, does nothing). This takes Ri seconds.
    Teleport the cursor to the parenthesis matching (as described above) the parenthesis that is the i-th character. This takes Pi seconds.

We think Emacs++ will be simple for power users, but we still need to understand how efficient it is. We have a single Lisp++ program and list of Q queries about that program; each query consists of a start position Sj and an end position Ej. To answer the j-th query, you must determine the smallest possible amount of time Nj (in seconds) that it will take to take the cursor from position Sj to position Ej, if you make optimal decisions.

Please output the sum of all of those Nj values.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of a test case contains two integers K, which is the length of the Lisp++ program, and Q, which is the number of queries.

The second line of a test case contains a string P of K characters, each of which is either ( or ), representing a Lisp++ program (string of balanced parentheses), as described above.

The third, fourth, and fifth lines of a test case each contain K integers. The i-th integers in these lines are the values Li, Ri, and Pi, respectively, that are described above.

The sixth and seventh lines of a test case each contain Q integers. The j-th integers in these lines are Sj and Ej, respectively, that are described above.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the sum of the Nj values that are described above.
