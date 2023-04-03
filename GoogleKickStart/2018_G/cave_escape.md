# Problem

Mr. Raven is stuck in a cave represented by a matrix of N rows and M columns, where rows are numbered from 1 to N from top to bottom, and columns are numbered from 1 to M from left to right. The cell at the i-th row and the j-th column is denoted by (i, j). Mr. Raven is currently at the cell (SR, SC), and the exit of the cave is located at the cell (TR, TC).

Some cells of the cave may contain obstacles. Mr. Raven cannot step into a cell that has an obstacle.
Other cells may contain traps. The first time that Mr. Raven enters a cell with a trap, he must spend a number of energy points equal to the strength of the trap. If he has fewer energy points than needed, he cannot enter the cell.
Moreover, some other cells may contain potions. The first time that Mr. Raven enters a cell with a potion, he gains energy points equal to the strength of the potion.

Mr. Raven initially has E energy points. He can move between cells that share an edge (not just a corner). On the exit cell, Mr. Raven can choose not to exit the cave and continue to explore the cave if he wants to. Can you help him find the maximum number of energy points he can have when he exits the cave, if it is possible to do so?
