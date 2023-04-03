# Problem

Siv's birthday is next week and Cel is preparing a birthday present for her. Because Siv loves puzzles, Cel is creating a word search puzzle as a gift.

In a word search puzzle, the solver is given a rectangular grid with R rows and C columns, and the solver must find all valid words hidden inside the grid. Each hidden word may appear horizontally or vertically (but NOT diagonally) in the grid, forward or in reverse. Hidden words may overlap.

Cel has a dictionary with W different words; these are the only words that can be hidden within the puzzle grid. (Of course, not every contiguous horizontal or vertical part of the grid will necessarily contain one of the hidden words.) These words are not necessarily real English words. Each word might appear in the grid one or more times, or not at all.

Cel has already created the word search puzzle. However, there is a problem: the puzzle is too big to print on a sheet of paper. As Siv's birthday is coming soon, there is not enough time to create a new word search puzzle from scratch. So Cel is wondering whether she can reduce the size of the grid, simply by selecting a non-empty, grid-aligned subgrid from the original grid.

Randomly selecting a subgrid might result in a boring puzzle without a lot of hidden words. So Cel wants to select a subgrid with the largest fun value, where the fun value of a subgrid is defined as:

fun value = (total length of words matched) / ((width of subgrid) + (height of subgrid))

Notes:

- The entire word has to appear in the subgrid to be counted.
- If a word appears x times in the subgrid, its length should be added x times in the above formula.
- If a word and its reverse both appear in the subgrid (even at the same position!), we count both occurrences.
- The subgrid with largest fun value might be the entire original grid.

Can you please help Cel find the largest fun value that a subgrid could have, and the number of different subgrids that have this fun value? Two subgrids are considered different if and only if there is some cell in the grid—that is, some (row, column) position—that is in one subgrid, but not the other.
