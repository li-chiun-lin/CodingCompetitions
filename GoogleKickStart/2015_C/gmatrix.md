# Problem

You have a square $N$ by $N$ matrix $M$ of nonnegative integers. We would like to make a list of the maximum values in every sub-matrix of size $K$ by $K$ within $M$, and then find the sum of those values together. (Note that the same entry of $M$ might be the maximum value in more than one sub-matrix, in which case it will show up multiple times in the list.) Can you find that sum?

To simplify the input of the matrix, you are given two arrays $A$ and $B$ of length $N$, and two integers $C$ and $X$. Then the entry $M_{ij}$ (for the $i$-th row and $j$-th column of the matrix) equals $(A_i \times i+B_j \times j + C) \mod X$, where $i$ and $j$ are in the range $[1, N]$.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case begins with one line with four integers, $N$, $K$, $C$ and $X$. Then there are two lines with $N$ integers each, representing the arrays $A$ and $B$.
