# Problem

Alice and Bob are going to play the Binary Search game. The game is played on a board consisting of a single row of 2L
cells. Each cell contains an integer between 1 and N, inclusive. There are also N cards numbered 1 through N. Before the game starts, the referee writes an integer between 1 and M, inclusive, on each card, in one of the MN

ways in which that can be done. Alice and Bob know the integers in the cells and on each card before they start playing.

The game proceeds alternating turns, with Alice having the first turn. There are L
turns in total, which means Alice plays ⌈L/2⌉ turns and Bob plays ⌊L/2⌋ turns. During a turn, a player can eliminate either the leftmost half or the rightmost half of the remaining cells. For example, let us consider a board that contains the numbers [2,4,1,1,4,5,2,5]. In her first turn, Alice must choose to eliminate one half, leaving either [2,4,1,1] or [4,5,2,5]. If she eliminates the leftmost half and leaves [4,5,2,5], then Bob must choose between leaving [4,5] and [2,5]. If he were to leave [2,5], the game's final turn would have Alice choosing between [2] and [5]

.

When the game is over, they look at the number X
in the only remaining cell. The score of the game is the integer written on card number X. In the example above, if Alice were to eliminate [5] and leave [2] in her final turn, the score of the game would be the number the referee wrote on card number 2

.

Illustration of example given in the problem statement

Alice plays optimally to maximize the score of the game, while Bob plays optimally to minimize it. They are given a fixed board with integers A1,A2,…A2L
in its cells. For maximal fairness, they will play MN games, and the referee will choose a different way to write integers on the cards for each one. That means that for any given way of writing integers on the cards, Alice and Bob will play exactly one game with it. Given the game parameters and the fixed board contents, please determine the sum of the scores of all those games. Since the output can be a really big number, we only ask you to output the remainder of dividing the result by the prime 109+7 (1000000007).
