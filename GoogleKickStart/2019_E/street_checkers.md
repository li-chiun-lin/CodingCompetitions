# Problem

Alice and Bob are playing a new virtual reality team game - Street Checkers. The game is set on an insanely long street divided into tiles which are numbered from 0 to $10^9$(inclusive of both). At the start of the game, Alice and Bob are standing on tile number 0 and are given a random number X in range [L, R] (both ends are inclusive). Alice only jumps to odd numbered tiles, while Bob only jumps to even numbered tiles. If the number on the tile divides X, then the player landing on it has to color it with their favorite color. The game is over after tile X has been colored.

A game is considered interesting by both the players if the absolute difference between the number of tiles painted by each is not greater than 2. Help Alice and Bob find how many numbers in the interval [L, R] could make for an interesting game.
