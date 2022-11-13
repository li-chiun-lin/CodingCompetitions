# Problem

Googlers are very interested in cubes, but they are bored with normal three-dimensional cubes and also want to think about other kinds of cubes! A "$D$-dimensional cube" has $D$ dimensions, all of equal length. ($D$ may be any positive integer; for example, a $1$-dimensional cube is a line segment, and a $2$-dimensional cube is a square, and a $4$-dimensional cube is a hypercube.) A "$D$-dimensional cuboid" has $D$ dimensions, but they might not all have the same lengths.

Suppose we have an $N$-dimensional cuboid. The $N$ dimensions are numbered in order ($0, 1, 2, ..., N - 1$), and each dimension has a certain length. We want to solve many subproblems of this type:

1. Take all consecutive dimensions between the $L_i$-th dimension and $R_i$-th dimension, inclusive.

2. Use those dimensions to form a $D$-dimensional cuboid, where $D = R_i - L_i + 1$. (For example, if $L_i = 3$ and $R_i = 6$, we would form a $4$-dimensional cuboid using the $3$-rd, $4$-th, $5$-th, and $6$-th dimensions of our $N$-dimensional cuboid.)

3. Reshape it into a $D$-dimensional cube that has exactly the same volume as that $D$-dimensional cuboid, and find the edge length of that cube.

Each test case will have $M$ subproblems like this, all of which use the same original $N$-dimensional cuboid.
