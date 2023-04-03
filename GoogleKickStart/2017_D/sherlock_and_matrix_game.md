# Problem

Today, Sherlock and Watson attended a lecture in which they were introduced to matrices. Sherlock is one of those programmers who is not really interested in linear algebra, but he did come up with a problem involving matrices for Watson to solve.

Sherlock has given Watson two one-dimensional arrays $A$ and $B$; both have length $N$. He has asked Watson to form a matrix with $N$ rows and $N$ columns, in which the $j$-th element in the $i$-th row is the product of the $i$-th element of $A$ and the $j$-th element of $B$.

Let $(x, y)$ denote the cell of the matrix in the $x$-th row (numbered starting from $0$, starting from the top row) and the $y$-th column (numbered starting from $0$, starting from the left column). Then a submatrix is defined by bottom-left and top-right cells $(a, b)$ and $(c, d)$ respectively, with $a ≥ c$ and $d ≥ b$, and the submatrix consists of all cells $(i, j)$ such that $c ≤ i ≤ a$ and $b ≤ j ≤ d$. The sum of a submatrix is defined as sum of all of the cells of the submatrix.

To challenge Watson, Sherlock has given him an integer $K$ and asked him to output the $K$-th largest sum among all submatrices in Watson's matrix, with $K$ counting starting from $1$ for the largest sum. (It is possible that different values of $K$ may correspond to the same sum; that is, there may be multiple submatrices with the same sum.) Can you help Watson?
