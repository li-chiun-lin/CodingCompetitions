# Problem

Becca and Terry are microbiologists who have a friendly rivalry. When they need a break from their research, they like to play a game together. The game is played on a matrix of unit cells with R rows and C columns. Initially, each cell is either empty, or contains radioactive material.

On each player's turn, if there are no empty cells in the matrix, that player loses the game. Otherwise, they choose an empty cell and place a colony of bacteria there. Bacteria colonies come in two types: H (for "horizontal") and V (for "vertical").

    When a type H colony is placed into an empty cell, it occupies that cell (making it non-empty), and also tries to spread into the cell immediately to the west (if there is one) and the cell immediately to the east (if there is one).
    When a type V colony is placed into an empty cell, it occupies that cell (making it non-empty), and also tries to spread into the cell immediately to the south (if there is one) and the cell immediately to the north (if there is one).

Whenever a colony (of either type) tries to spread into a cell:

    If the cell contains radioactive material, the colony mutates and the player who placed the colony loses the game.
    If that cell is empty, the colony occupies that cell (making it non-empty), and then the rule above is triggered again (i.e. the colony will try to spread further).
    If the cell already contains bacteria (of any type), the colony does not spread into that cell.

Notice that it may be possible that all of a player's available moves would cause them to lose the game, and so they are doomed. See the sample case explanations below for examples of how the game works.

Becca makes the first move, and then the two players alternate moves until one of them loses the game. If both players play optimally, who will win? And, if Becca will win, how many distinct winning opening moves does she have? (Two opening moves are distinct if and only if they either use different cells, or different kinds of colony, or both.)

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line containing two integers R and C: the number of rows and columns, respectively, in the matrix. Then, there are R more rows of C characters each. The j-th character on the i-th of these lines represents the j-th column of the i-th row of the matrix. Each character is either . (an empty cell) or # (a cell with radioactive material).

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1), and y is an integer: either 0 if Becca will not win, or, if Becca will win, the number of distinct winning opening moves she can make, as described above.
