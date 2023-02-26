# Problem

Codejamon is a mobile game in which monster trainers walk around in the real world to catch monsters. You have an old smartphone with a short battery life, so you need to choose your path carefully to catch as many monsters as possible.

Suppose the Codejamon world is a rectangular grid with $R$ rows and $C$ columns. Rows are numbered from top to bottom, starting from $0$; columns are numbered from left to right, starting from $0$. You start in the cell in the $R_s$-th row and the $C_s$-th column. You will take a total of $S$ unit steps; each step must be to a cell sharing an edge (not just a corner) with your current cell.

Whenever you take a step into a cell in which you have not already caught a monster, you will catch the monster in that cell with probability $P$ if the cell has a monster attractor, or $Q$ otherwise. If you do catch the monster in a cell, it goes away, and you cannot catch any more monsters in that cell, even on future visits. If you do not catch the monster in a cell, you may still try to catch the monster on a future visit to that cell. The starting cell is special: you have no chance of catching a monster there before taking your first step.

If you plan your path optimally before making any move, what is the maximum possible expected number of monsters that you will be able to catch?
The battery can only support limited steps, so hurry up!

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

Each test case starts with a line of five integers: $R$, $C$, $R_s$, $C_s$ and $S$. $R$ and $C$ are the numbers of rows and columns in the grid; $R_s$ and $C_s$
are the numbers of the row and column of your starting position, and $S$ is the number of steps you are allowed to take.

The next line contains two decimals $P$ and $Q$, where $P$ is the probability of meeting a monster in cells with a monster attractor, and $Q$ is the probability of meeting a monster in cells without a monster attractor. $P$ and $Q$ are each given to exactly four decimal places.

Each of the next $R$ lines contains contains $C$ space-separated characters; the $j$-th character of the $i$-th line represents the cell at row $i$ and column $j$. Each element is either . (meaning there is no attractor in that cell) or A (meaning there is an attractor in that cell).
