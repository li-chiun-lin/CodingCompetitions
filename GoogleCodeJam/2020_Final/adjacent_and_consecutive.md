# Problem

Two players, A and B, are playing a game. The game uses N tiles numbered 1 through N, and a board consisting of a single horizontal row of N empty cells.

Players alternate turns, with Player A going first. On a turn, a player picks an unused tile and an empty cell and places the tile in the cell. At the end of the game, Player A wins if there are two tiles with consecutive numbers in adjacent cells (regardless of who put them there). Otherwise, Player B wins. For example, final boards of 1 2 3 4 and 4 1 3 2 are examples of wins for Player A, and a final board of 3 1 4 2 is an example of a win for Player B. (Notice that consecutive numbers may appear in either order.)

You just watched two players play a game, but you could not understand their strategy. They may not have played rationally! You decide to compare their moves against an optimal strategy.

A winning state is a state of the game from which the player whose turn it is can guarantee a win if they play optimally, regardless of what the opponent does. A mistake is a move made while in a winning state that results in the opponent having a winning state on their next turn. (Notice that it is not possible to make a mistake on the last turn of the game, since if the last turn begins with a winning state for that player, it must be because that player's only move results in a win.)

Given the N moves, count the number of mistakes made by each player.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line containing an integer N: the number of tiles in the game (which is also the number of turns, and the number of cells on the board).

Then, N more lines follow. The i-th of these (counting starting from 1) has two integers Mi and Ci. Respectively, these represent the tile chosen on the i-th turn, and the index of the cell (counting from 1 at the left end to N at the right end) where that tile is placed.

Note that it is Player A's turn whenever i is odd, and Player B's turn whenever i is even.

## Output

For each test case, output one line containing Case #x: a b, where x is the test case number (starting from 1), a is the total number of mistakes made by Player A, and b is the total number of mistakes made by Player B.
