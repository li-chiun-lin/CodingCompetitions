# Problem

Professor Shekhu was a famous scientist working in the field of game theory in the early days of computer science. Right now, he's working on a game which involves a box containing $N$ distinct cards. The $i$-th of these cards has a red number written on one side, and a blue number written on the other side. Both of these numbers are positive integers. The game proceeds as follows:

- The player starts with a total of $0$ points. The objective of the game is to finish with the lowest possible total.
- As long as there are at least two cards remaining in the box, the player must repeat the following move:
  - Remove two cards of their choice from the box. Choose a red number $R$ from one card and a blue number $B$ from the other card.
  - Add the value $R \oplus B$ to the total, where $\oplus$ denotes bitwise XOR operation.
  - Return one of the two cards to the box, and remove the other from the game.
- The game ends when there is only one card remaining in the box (and so it is impossible to make another move).

Professor Shekhu has summoned his best student, Akki, to play this game. Can you help Akki find the minimum possible total, considering all possible ways in which he can play the game?
