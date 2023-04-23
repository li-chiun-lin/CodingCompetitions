# Problem

Marlin is a fish who lost his son and is trying to find him. Fortunately, he ran into Cynthia, a turtle, as she swam around with her brothers, Wally and Seymour. Cynthia knows exactly where Marlin needs to go, and she can be very precise in giving directions. While Marlin is smart and can follow them perfectly, keeping track of a long list of directions can be problematic. Cynthia needs to find a way to make the list of directions short.

Marlin lives in a matrix of R rows and C columns. Some cells of the matrix are dangerous and cannot be entered. Marlin and his son are currently in different non-dangerous cells. Marlin's son never moves to a different cell. Cynthia decided to give Marlin directions in the form of a program consisting of a list of instructions, each on a single line. Each instruction is of one of 5 types:

    N: move one cell North (up),
    S: move one cell South (down),
    W: move one cell West (left),
    E: move one cell East (right), and
    G(i): jump to the i-th line of the instruction list (counting starting from 1).

After executing a line with any of the first 4 instructions, Marlin jumps to the next line on the list if there is one. If there is no next line, Marlin just stands still forever.

For example, if Marlin were following the program

1: N
2: E
3: G(6)
4: S
5: G(1)
6: W
7: G(4)

he would move North (line 1), then East (2), then jump to line 6 without physically moving (3), then move West (6), then jump to line 4 (7), then move South (4), then jump to line 1 (5), then move North (1), etc.

If at any point Marlin and his son are at the same cell, they will be reunited and Marlin will no longer follow any instructions. Cynthia the turtle wants to find out the smallest number of lines in a program that would get Marlin to the same cell as his son, without him ever going into a dangerous cell or moving outside of the matrix boundaries. All G instructions must jump to existing lines in the program.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing R and C, the number of rows and columns in the matrix. Then, R lines follow containing a string of C characters each. The j-th character of the i-th of these lines Aij represents the cell in the i-th row and j-th column of the matrix. The character is # if the cell is dangerous, an uppercase M if the cell is the one Marlin is currently at, an uppercase N if the cell is the one Marlin's son is currently at and . if the cell is an unoccupied non-dangerous cell.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is IMPOSSIBLE if there is no program that would get Marlin to his son under the conditions explained above, or the smallest number of instructions in such a program.
