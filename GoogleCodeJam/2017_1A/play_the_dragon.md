# Problem

You are a friendly dragon fighting to protect your lair from a greedy knight! You have Hd health points and an attack power of Ad, and the knight has Hk health points and an attack power of Ak. If your health drops to 0 or below at any point; you are knocked out and you instantly lose; if the knight's health drops to 0 or below at any point, the knight is knocked out and you win!

You will battle the knight in a series of turns. On each turn, you go first, and you can choose and execute any one of the following actions.

- Attack: Reduce the opponent's health by your own attack power.
- Buff: Increase your attack power by B for the rest of the battle.
- Cure: Your health becomes Hd.
- Debuff: Decrease the opponent's attack power by D for the rest of the battle. If a Debuff would cause the opponent's attack power to become less than 0, it instead sets it to 0.

Then, if the knight's health is greater than 0 following your action, the knight will execute an Attack action. After that, the turn ends. (Note that a turn in which you defeat the knight still counts as a turn even though the knight does not get to act.)

Note that buffs stack with each other; every buff adds an additional B to your attack power. Similarly, debuffs stack with each other.
You would like to defeat the knight as fast as possible (if it is possible) so that you will not be late to help the villagers roast marshmallows at tonight's festival. Can you determine the minimum number of turns in which you can defeat the knight, or that it is IMPOSSIBLE to do so?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with six integers Hd, Ad, Hk, Ak, B, and D, as described above.
