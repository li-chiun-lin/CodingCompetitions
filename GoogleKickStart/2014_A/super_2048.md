# Problem

**2048** is a famous single-player game in which the objective is to slide tiles on a grid to combine them and create a tile with the number $2048$.

**2048** is played on a simple $4 \times 4$ grid with tiles that slide smoothly when a player moves them. For each movement, the player can choose to move all tiles in 4 directions, left, right, up, and down, as far as possible at the same time. If two tiles of the same number collide while moving, they will merge into a tile with the total value of the two tiles that collided. In one movement, one newly created tile can not be merged again and always is merged with the tile next to it along the moving direction first.

E.g. if the three "2" are in a row "2 2 2" and the player choose to move left, it will become "4 2 0", the most left 2 "2" are merged.

Alice and Bob accidentally find this game and love the feel when two tiles are merged. After a few round, they start to be bored about the size of the board and decide to extend the size of board to N x N, which they called the game **"Super 2048"**.

The big board then makes them dazzled (no zuo no die -_-| ). They ask you to write a program to help them figure out what the board will be looked like after all tiles move to one specific direction on a given board.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. The first line of each test case gives the side length of the board, $N$, and the direction the tiles will move to, $DIR$. $N$ and $DIR$ are separated by a single space. $DIR$ will be one of four strings: "left", "right", "up", or "down".

The next $N$ lines each contain $N$ space-separated integers describing the original state of the board. Each line represents a row of the board (from top to bottom); each integer represents the value of a tile (or $0$ if there is no number at that position).
