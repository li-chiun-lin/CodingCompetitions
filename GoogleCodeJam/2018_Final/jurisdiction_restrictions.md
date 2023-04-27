# Problem

The city of Gridtopia is a matrix of square cells ("blocks") with R rows and C columns; rows are numbered (starting from 1) from top to bottom, and columns are numbered (starting from 1) from left to right. The city is served by S different police stations; the i-th station is in the block located in the Rith row and the Cith column, and no block contains more than one station.

Each station is only able to patrol blocks that are no more than Di blocks away from that station, either horizontally or vertically. That is, the i-th station can only patrol the block in row R' and column C' if max(|R' - Ri|, |C'- Ci|) ≤ Di. Put another way, the i-th station can patrol only blocks within the square of side length 2Di + 1 centered on that station.

As the new police commissioner, you need to assign some blocks within the city to exactly one station that is able to patrol it. Blocks that contain stations and blocks that no station is able to patrol should not be assigned. All other blocks have to be assigned. Moreover, you must distribute this assignment load as evenly as possible among stations. Let Ai denote the number of blocks assigned to the i-th station; then your goal is to minimize the difference between the maximum of all the Ai values and the minimum of all of the Ai values. If you make optimal assignments, what is the smallest possible difference?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line with three integers R, C, and S: respectively, the numbers of rows and columns in the grid of cells, and the number of stations. Then, there are S more lines. The i-th of these has three integers Ri, Ci, and Di: respectively, the row and column in which the i-th station is located, and the parameter that determines which blocks that station is able to patrol, as described above.
