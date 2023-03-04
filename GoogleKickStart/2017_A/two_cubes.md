# Problem

"Look at the stars, look how they shine for you." - Coldplay, "Yellow"

In a galaxy far, far away, there are many stars. Each one is a sphere with a certain position (in three-dimensional space) and radius. It is possible for stars to overlap each other.

The stars are so incredibly beautiful to you that you want to capture them forever! You would like to build two cubes of the same integer edge length, and place them in space such that for each star, there is at least one cube that completely contains it. (It's not enough for a star to be completely contained by the union of the two cubes.) A star is completely contained by a cube if no point on the star is outside the cube; a point exactly on a cube face is still considered to be inside the cube.

The cubes can be placed anywhere in space, but they must be placed with their edges parallel to the coordinate axes. It is acceptable for the cubes to overlap stars or each other.

What is the minimum integer edge length that allows you to achieve this goal?

## Input

The input starts with one line containing exactly one integer $T$, which is the number of test cases. $T$ test cases follow.

Each test case begins with a line containing an integer, $N$, representing the number of stars.

This is followed by $N$ lines. On the ith line, there are 4 space-separated integers, $X_i$, $Y_i$, $Z_i$ and $R_i$, indicating the $(X, Y, Z)$ coordinates of the center of the $i$-th star, and the radius of the $i$-th star.
