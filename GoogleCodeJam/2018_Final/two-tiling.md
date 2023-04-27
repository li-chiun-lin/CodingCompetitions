# Problem

Your game company just ordered a lot of square game boards with 64 blank unit cells, intending to turn them into chessboards, but your boss has suddenly declared that chess is out of fashion. To make the best use of all of these boards, you have designed a new puzzle that uses tiles.

A tile is a contiguous set of unit cells, connected edge-to-edge, that can fit inside a 3x3 square of unit cells. For example, the following are examples of valid tiles (with each @ denoting a piece of the tile, and extra . characters for padding):

```text
... @@@ @@@ .@@
... @@@ @.@ @.@
.@. @@@ @.. @@@
```

The following would NOT be valid tiles:

```text
@@. @.@ .@@.
... .@. @@@@
.@@ @.@ .@@.
```

When the solver of your new puzzle places a tile on the board, its unit cells must exactly overlap some unit cells on the board that have not already been covered by other tiles. A tile is still considered the same type of tile even after being arbitrarily translated, rotated (by multiples of 90 degrees), and/or reflected, and the solver is allowed to do any of those things to a tile while placing it. For example, all of these are considered to be the same tile (and other variants of that tile are possible):

```text
.@. ..@ @.. ... @@.
@@. .@@ @@. .@@ .@@
@.. .@. .@. @@. ...
```

To make your puzzle, you will color one or more of the cells on the board red. The solver will solve the puzzle by placing tiles on the board such that all red cells are covered up, but no other cell is covered up. To save on manufacturing costs, the solver receives only one type of tile, but they are given exactly enough copies of it to be able to cover all of the red cells.

Your job is to decide which of the board's cells to color red. Unfortunately, your boss is still deciding which of two particular tiles to use for the game. You are tired of waiting, so you have decided to try to color a set of cells such that the puzzle can be solved regardless of which of the tiles ends up being used.
Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of four lines. Each of the first three lines has three characters, then a single space, then three more characters. The fourth line is a blank line.

When looking at an entire case, the space characters separate a 3x3 grid on the left and a 3x3 grid on the right. Each grid represents a frame in which one of the two tiles is displayed. In each grid, each character is either @, representing a cell that is part of the tile, or ., representing a cell that is not part of the tile. Note that these . cells have nothing to do with the puzzle or the board, and are just padding to make the shape of the tile clear. It is guaranteed that the two tiles are not the same, as described in the statement above.
