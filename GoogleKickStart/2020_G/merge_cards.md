# Problem

Panko is playing a game with N cards laid out in a row. The i-th card has the integer Ai written on it.

The game is played in N - 1 rounds. During each round Panko will pick an adjacent pair of cards and merge them. Suppose that the cards have the integers X and Y written on them. To merge two cards, Panko creates a new card with X + Y written on it. He then removes the two original cards from the row and places the new card in their old position. Finally Panko receives X + Y points for the merge. During each round Panko will pick a pair of adjacent cards uniformly at random amongst the set of all available adjacent pairs.

After all N - 1 rounds, Panko's total score is the sum of points he received for each merge. What is the expected value of Panko's total score at the end of the game?
