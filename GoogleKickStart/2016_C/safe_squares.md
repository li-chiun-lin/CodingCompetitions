# Problem

Codejamon trainers are actively looking for monsters, but if you are not a trainer, these monsters could be really dangerous for you. You might want to find safe places that do not have any monsters!

Consider our world as a grid, and some of the cells have been occupied by monsters. We define a safe square as a grid-aligned $D \times D$ square of grid cells (with $D ≥ 1$) that does not contain any monsters. Your task is to find out how many safe squares (of any size) we have in the entire world.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case starts with a line with three integers, $R$, $C$, and $K$. The grid has $R$ rows and $C$ columns, and contains $K$ monsters. $K$ more lines follow; each contains two integers $R_i$ and $C_i$, indicating the row and column that the $i$-th monster is in. (Rows are numbered from top to bottom, starting from $0$; columns are numbered from left to right, starting from $0$.)