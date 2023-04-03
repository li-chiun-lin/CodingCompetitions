# Problem

Pommel is very bored at home so she has invented a new game involving N dice. Each die has the numbers from 1 to M written on it. Whenever she throws a die, it has an equal probability of landing on each of the M possible values.

Pommel places all the dice in a row. She goes through the dice one at a time from left to right. For each die she rolls, Pommel can either keep the value she rolled and move on to the next die or she can re-roll the die. Pommel can re-roll a die as much as she wants before moving on to the next die.

Once Pommel has gone through all the dice, the game is finished. To determine if she has won, she puts the dice into groups. All dice with the same value are put into the same group. So if she finishes the game with x distinct values, then there will be x groups. These groups of dice are then sorted by number of dice in non-decreasing order.

For example:

    If the final dice results are [2, 2, 3, 2, 2, 3], the dice would be put into two groups and ordered as follows: [3, 3] and [2, 2, 2, 2].
    If the final dice results are [1, 6, 7, 7], the dice would be put into three groups and ordered as follows: [6], [1], and [7, 7] (or equivalently, [1], [6] and [7, 7]).

Pommel wins if she finishes the game with exactly K groups, and the i-th group contains exactly Ai dice, for all i.

What is the expected value of the total number of dice rolls it will take Pommel to win the game, assuming she plays optimally to minimize this expected value?

It is guaranteed that for any valid input, it is possible for Pommel to win the game.
