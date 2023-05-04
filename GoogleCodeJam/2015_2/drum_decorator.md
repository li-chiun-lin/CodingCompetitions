# Problem

You are the drummer in the rock band Denise and the Integers. Your drum is a cylinder around which you've wrapped a rectangular grid of cells.

Your band is scheduled to perform in Mathland. The Mathlanders are a tough audience, and they will expect every cell of your drum to contain a positive integer; zeroes and negative integers are not allowed. Moreover, each integer K must border (share an edge, and not just a point, with) exactly K other cells with the same integer -- that is, a cell with a 1 must touch exactly one other cell with a 1, a cell with a 2 must touch exactly 2 other cells with a 2, and so on. Apart from this restriction, it does not matter what other cells a cell touches. (The circular top and bottom of the drum do not count as cells and do not need to be decorated. Note that this means that the cells along the top and bottom of the drum only touch three other cells each, whereas all the other cells touch four other cells each.)

For example, this is a valid decoration of a cylinder formed by a grid with 3 rows and 5 columns:

(Imagine that the unseen two columns on the back of the drum are the same as the three visible columns.)

You want to know how many different valid decorations are possible. Two decorations are different if one cannot be rotated (around the cylinder's axis of symmetry) to produce the other. The top and bottom of a drum are considered different, so this decoration of a 3x5 grid is different from the one above:

(Again, imagine that the unseen two columns on the back of the drum are the same as the three visible columns.)

Your drum has R rows and C columns. How many different valid decorations are possible? The number may be large, so return the number of decorations modulo 109 + 7 (1000000007).

## Input

The first line of the input gives the number of test cases, T. T lines follow; each contains two space-separated integers, R and C, which are the number of rows and columns in the drum.
