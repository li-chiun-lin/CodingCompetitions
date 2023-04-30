# Problem

The prestigious Slate Modern gallery specializes in the latest art craze: grayscale paintings that follow very strict rules. Any painting in the gallery must be a grid with R rows and C columns. Each cell in the grid is painted with a color of a certain positive integer brightness value; to make sure the art is not too visually startling, the brightness values of any two cells that share an edge (not just a corner) must differ by no more than D units.

Your artist friend Cody-Jamal is working on a canvas for the gallery. Last night, he became inspired and filled in N different particular cells with certain positive integer brightness values. You just told him about the gallery's rules today, and now he wants to know whether it is possible to fill in all of the remaining cells with positive integer brightness values and complete the painting without breaking the gallery's rules. If this is possible, he wants to make the sum of the brightness values as large as possible, to save his black paint. Can you help him find this sum or determine that the task is impossible? Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime 109+7 (1000000007).

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with one line with four integers: R, C, N, and D, as described above. Then, N lines follow; the i-th of these has three integers Ri, Ci, and Bi, indicating that the cell in the Rith row and Cith column of the grid has brightness value Bi. The rows and columns of the grid are numbered starting from 1.
