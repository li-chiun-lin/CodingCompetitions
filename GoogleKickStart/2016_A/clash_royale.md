# Problem

Clash Royale is a real time strategy card game. Each card has an attack power and a level. Each player picks 8 cards to form a battle deck; the total attack power of a deck is the sum of the attack power of each of its cards. Players fight with each other by placing cards from their battle decks into the battle arena. The winner of a battle is rewarded with coins, which can be used to upgrade cards. Upgrading a card increases its attack power.

After days of arena fighting, Little Shawn has accumulated a total of $M$ coins. He has decided to upgrade some of his cards. Little Shawn has $N$ cards. The $i$-th card can have any level from $1$ through $K_i$; the attack power for the $j$-th level is $A_{i,j}$. Cards must be upgraded one level at a time; the price to upgrade the $i$-th card from level $j$ to level $j+1$ costs $C_{i,j}$ coins. The $i$-th card is currently at level $L_i$ before Little Shawn has upgraded any cards.

Little Shawn wants to use some or all of his coins to upgrade cards, and then form a deck of exactly $8$ cards, so that the deck's total attack power is as large as possible. Can you help him do this? He can upgrade the same card more than once as long as he can afford it, and he does not have to upgrade every card.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case starts with 2 integers $M$ and $N$, the number of coins and the number of cards that Little Shawn possesses. Then $N$ blocks follow. The $i$-th block consists of 3 lines describing the $i$-th card. The first line contains two integers $K_i$ and $L_i$, the maximum possible level and current level of the card. The second line contains $K_i$ integers $A_{i,1}, A_{i,2}, ..., A_i, K_i$, the attack power of each level. The third line contains $K_i-1$ integers $C_{i,1}, C_{i,2}, ..., C_i,K_{i-1}$, the number of coins required to upgrade a card that is currently at level $1, 2, ..., K_{i-1}$.
