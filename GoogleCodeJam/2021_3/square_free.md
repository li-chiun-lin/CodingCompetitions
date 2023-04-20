# Problem

We have a matrix of square cells with R
rows and C

columns. We need to draw a diagonal in each cell. Exactly one of two possible diagonals must be drawn in each cell: the forward slash diagonal, which connects the bottom-left and the top-right corners of the cell, or the backslash diagonal, which connects the top-left and the bottom-right corners of the cell.

For each row and column, we want to draw a specific number of diagonals of each type. Also, after all the diagonals are drawn, the matrix should be square free. That is, there should be no squares formed using the diagonals we added.

For example, suppose we have a matrix with 4
rows and 4

columns. The number next to each row is the exact number of forward slash diagonals there must be in that row. The number below each column is the exact number of forward slash diagonals there must be in that column.

An empty 4 by 4 matrix with row and column totals.

There are multiple ways to fill the matrix respecting those per-row and per-column amounts. Below we depict three possibilities:
First way to fill the above matrix
Second way to fill the above matrix
Third way to fill the above matrix

The first two matrices are not square free, while the third matrix is. In the first matrix, there is a square of side-length 2
diagonals with its vertices in the middle of each side of the matrix. In the second matrix, there is a square of side-length 1

diagonal drawn in the bottom-right corner. In the third matrix, there is no square. The third matrix would then be a valid drawing according to all the rules.

Given the size of the matrix and the exact number of forward slash diagonals that must be drawn in each row and column, produce any square free matrix that satisfies the row and column constraints, or say that one does not exist.
