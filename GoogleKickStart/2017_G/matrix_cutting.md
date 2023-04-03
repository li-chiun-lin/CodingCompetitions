# Problem

Prof Shekhu has a matrix of $N$ rows and $M$ columns where rows are numbered from $0$ to $N-1$ from top to bottom, and columns are numbered from $0$ to $M-1$ from left to right. Each cell in the matrix contains a positive integer.

He wants to cut this matrix into $N \times M$ submatrices (each of size $1 \times 1$) by making horizontal and vertical cuts. A cut can be made only on the boundary between two rows or two columns.

Prof Shekhu invites his best student Akki for this job and makes an interesting proposition. Every time Akki makes a cut in a submatrix, before he makes the cut, he is awarded a number of coins equal to the minimum value in that submatrix. Note that with every cut, the total number of submatrices increases. Also, cuts in any two different submatrices are independent and likewise, Akki is awarded independently for the cuts in different submatrices.

Now, Akki has various ways in which he can make the cuts. Can you help him by maximizing the total number of coins he can gain?
