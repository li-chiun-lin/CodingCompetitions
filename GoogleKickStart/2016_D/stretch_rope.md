# Problem

Mary likes playing with rubber bands. It's her birthday today, and you have gone to the rubber band shop to buy her a gift.

There are $N$ rubber bands available in the shop. The $i$-th of these bands can be stretched to have any length in the range $[A_i, B_i]$, inclusive. Two rubber bands of range $[a, b]$ and $[c, d]$ can be connected to form one rubber band that can have any length in the range $[a+c, b+d]$. These new rubber bands can themselves be connected to other rubber bands, and so on.

You want to give Mary a rubber band that can be stretched to a length of exactly $L$. This can be either a single rubber band or a combination of rubber bands. You have $M$ dollars available. What is the smallest amount you can spend? If it is impossible to accomplish your goal, output **IMPOSSIBLE** instead.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case starts with 3 integers $N$, $M$, $L$, the number of rubber bands available in the shop, the number of dollars you have and the desired rubber band length. Then $N$ lines follow. Each line represents one rubber band and consists of 3 integers, $A_i$, $B_i$, and $P_i$. [Ai, Bi] is the inclusive range of lengths that the $i$-th rubber band can stretch to, and $P_i$ is the price of the $i$-th rubber band in dollars.
