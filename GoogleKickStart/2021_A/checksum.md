# Problem

Grace and Edsger are constructing a $N×N$ boolean matrix $A$. The element in $i$-th row and $j$-th column is represented by $A_{i,j}$. They decide to note down the checksum (defined as bitwise XOR of given list of elements) along each row and column. Checksum of $i$-th row is represented as $R_i$. Checksum of $j$-th column is represented as $C_j$.

For example, if $N=2$,
$
    A=
    \begin{bmatrix}
        1&1\\
        0&1
    \end{bmatrix}
$, then
$
    R=
    \begin{bmatrix}
    1&0
    \end{bmatrix}
$ and
$
    C=
    \begin{bmatrix}
    0&1
    \end{bmatrix}
$
.

Once they finished the matrix, Edsger stores the matrix in his computer. However, due to a virus, some of the elements in matrix $A$ are replaced with $−1$ in Edsger's computer. Luckily, Edsger still remembers the checksum values. He would like to restore the matrix, and reaches out to Grace for help. After some investigation, it will take $B_{i,j}$ hours for Grace to recover the original value of $A_{i,j}$ from the disk. Given the final matrix $A$, cost matrix $B$, and checksums along each row ($R$) and column ($C$), can you help Grace decide on the minimum total number of hours needed in order to restore the original matrix $A$?
