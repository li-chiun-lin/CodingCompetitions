# Problem

Banny has just bought a new programmable robot. Eager to test his coding skills, he has placed the robot in a grid of squares with $R$ rows (numbered $1$ to $R$ from north to south) and $C$ columns (numbered $1$ to $C$ from west to east). The square in row $r$ and column $c$ is denoted $(r,c)$.

Initially the robot starts in the square $(S_R
, S_C)$. Banny will give the robot $N$ instructions. Each instruction is one of $N$, $S$, $E$, or $W$, instructing the robot to move one square north, south, east, or west respectively.

If the robot moves into a square that it has been in before, the robot will continue moving in the same direction until it reaches a square that it has not been in before. Banny will never give the robot an instruction that will cause it to move out of the grid.

Can you help Banny determine which square the robot will finish in, after following the $N$ instructions?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

Each test case starts with a line containing the five integers $N$, $R$, $C$, $S_R$, and $S_C$, the number of instructions, the number of rows, the number of columns, the robot's starting row, and the robot's starting column, respectively.

Then, another line follows containing a single string consisting of $N$ characters; the $i$-th of these characters is the $i$-th instruction Banny gives the robot (one of $N$, $S$, $E$, or $W$, as described above).
