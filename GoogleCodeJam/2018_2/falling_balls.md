# Problem

A certain toy consists of a grid of 2 or more columns and 1 or more rows, where each cell of the grid contains either a \ ramp or a / ramp, or is empty. The leftmost and rightmost columns are empty and the bottom row is also empty. Balls are dropped into the top row and fall vertically, sliding on ramps. To prevent balls from getting stuck, a cell with a \ ramp is never immediately to the left of a cell with a / ramp.

When a ball is dropped into the top row, it moves deterministically as follows:

    A ball in an empty cell moves to the cell immediately below its current cell, unless it is in the bottom row, in which case it does not move any more.
    A ball in a cell containing a \ ramp moves to the cell immediately below and to the right of its current cell.
    A ball in a cell containing a / ramp moves to the cell immediately below and to the left of its current cell.

To see the mechanism to its full extent, the user drops exactly one ball into each column. Balls do not interfere with each other, and it is possible for a cell to contain multiple balls.

Your friend has a toy with C columns and an unknown number of rows. They just dropped one ball into the top row of each column, and waited for all balls to stop moving. Then, they counted how many balls ended up in each of the cells of the bottom row, and gave you those results... but you think it is possible that they made a mistake. Can you create a layout that is consistent with the results and uses as few rows as possible, or determine that no such layout exists?

For example, if your friend reported the values 3 0 0 2 0 1, one possible solution would be the following. (Note that it is not necessary to use a minimal number of ramps, or for every ramp to affect the balls.)

.//\..
./\./.
......

Here are the paths that the balls would take when falling through that grid:

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line containing an integer C: the number of columns in your friend's falling ball toy. Then, there is one more line containing C integers Bi. The i-th of these integers represents the number of balls that ended up in the i-th cell from the left of the bottom row of your friend's falling ball toy, according to the data they gave you.
