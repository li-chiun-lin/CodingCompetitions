# Problem

Jemma is competing in a robotics competition. The challenge for today is to build a robot that can navigate around a hole in the arena.

The arena is a grid of squares containing $W$ columns (numbered $1$ to $W$ from left to right) and $H$ rows (numbered $1$ to $H$ from top to bottom). The square in the $x$-th column and $y$-th row is denoted $(x, y)$. The robot begins in the top left square $(1,1)$ and must navigate to the bottom right square $(W, H)$.

A rectangular subgrid of squares has been cut out of the grid. More specifically, all the squares that are in the rectangle with top-left square $(L, U)$ and bottom-right square $(R, D)$ have been removed.

Jemma did not have much time to program her robot, so it follows a very simple algorithm:

- If the robot is in the rightmost column, it will always move to the square directly below it. Otherwise,
- If the robot is in the bottommost row, it will always move to the square directly right of it. Otherwise,
- The robot will randomly choose to either move to the square directly to the right, or to the square directly below it with equal probability.

Jemma passes the challenge if her robot avoids falling into the hole and makes it to the square $(W, H)$. What is the probability she passes the challenge?
