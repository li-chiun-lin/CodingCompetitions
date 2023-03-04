# Problem

Mr. Panda has recently fallen in love with a new game called **Square Off**, in which players compete to find as many different squares as possible on an evenly spaced rectangular grid of dots. To find a square, a player must identify four dots that form the vertices of a square. Each side of the square must have the same length, of course, but it does not matter what that length is, and the square does not necessarily need to be aligned with the axes of the grid. The player earns one point for every different square found in this way. Two squares are different if and only if their sets of four dots are different.

Mr. Panda has just been given a grid with $R$ rows and $C$ columns of dots. How many different squares can he find in this grid? Since the number might be very large, please output the answer modulo $10^9 + 7$.

## Input

The first line of the input gives the number of test cases, $T$. $T$ lines follow. Each line has two integers $R$ and $C$: the number of dots in each row and column of the grid, respectively.
