# Problem

The hot new toy for this year is called "X Squared". It consists of a square $N$ by $N$ grid of tiles, where $N$ is odd. Exactly $2 × N - 1$ of the tiles are labeled with an $X$, and the rest are blank (which we will represent with the . character). In each move of the game, the player can either choose and exchange two rows of tiles, or choose and exchange two columns of tiles. The goal of the game is to get all of the $X$ tiles to be on the two main diagonals of the grid, forming a larger $X$ shape, as in the following example for $N = 5$:

    X...X
    .X.X.
    ..X..
    .X.X.
    X...X

You are about to play with your $X$ Squared toy, which is not yet in the goal state. You suspect that your devious younger sibling might have moved some of the tiles around in a way that has broken the game. Given the current configuration of the grid, can you determine whether it is possible to win or not?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each one begins with one line with an integer $N$, the size of the grid. $N$ more lines with $N$ characters each follow; the $j$-th character on the $i$-th of these lines is $X$ if the tile in the $i$-th row and $j$-th column of the grid has an $X$, or . if that tile is blank.
