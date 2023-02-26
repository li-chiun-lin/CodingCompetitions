# Problem

General Alice and General Bob are playing a war game. There are $N$ soldiers in the game. Each soldier has two stats: attack and defense.

Before the game starts, General Alice and General Bob will take turns selecting soldiers, with General Alice going first. In each turn, a player can select one soldier, as long as that soldier either has an attack stat greater than each of the attack stats of all soldiers selected so far, or has a defense stat greater than each of the defense stats of all soldiers selected so far. To be precise: let $A_i$ and $D_i$ be the attack and defense values for the $i$-th soldiers, for $i$ from $1$ to $N$, and let $S$ be the set of soldiers that have been selected so far. Then a player can select soldier $x$ if and only if at least one of the following is true:

- $A_x > A_s$ for all $s$ in $S$
- $D_x > D_s$ for all $s$ in $S$

If no selection can be made, then the selection process ends and the players start playing the game.

General Alice wants to select more soldiers than General Bob, and General Bob wants to avoid that. If both players play optimally to accomplish their goals, can General Alice succeed?

## Input

The first line of each case contains a positive integer $N$, the number of soldiers. $N$ more lines follow; the $i$-th of these line contains two integers $A_i$ and $D_i$, indicating the attack and defense stats of the $i$-th soldier.
