# Problem

A "0/1 string" is a string in which every character is either $0$ or $1$. There are two operations that can be performed on a 0/1 string:

- switch: Every $0$ becomes $1$ and every $1$ becomes $0$.
- reverse: The string is reversed.

Consider this infinite sequence of 0/1 strings:

$S_0$ = ""

$S_1$ = "0"

$S_2$ = "001"

$S_3$ = "0010011"

$S_4$ = "001001100011011"

$\vdots$

$S_N$ = $S_{N-1}$ + "0" + switch(reverse($S_{N-1}$)).

You need to figure out the $K$-th character of Sgoogol, where googol = $10^{100}$.

## Input

The first line of the input gives the number of test cases, $T$. Each of the next $T$ lines contains a number $K$.
