# Problem

Alice and Bob both have a sweet tooth, and they are going to play a game to collect pancakes. There are $N$ pancake stacks lined up on the table labeled from $1$ to $N$. The $i$-th stack has exactly $A_i$ pancakes. Alice and Bob are going to collect pancakes by alternating turns claiming full stacks. For the first turn, Alice must choose a stack labeled between $L_a$ and $R_a$, inclusive, and claim it. Then, Bob must choose a stack labeled between $L_b$ and $R_b$, inclusive, and different from the one chosen by Alice, and claim it.

In subsequent turns, each of them must choose an unclaimed stack that is adjacent to a stack they claimed themselves before. That is, for Alice to claim stack $i$ on one of her turns other than the first, she must have claimed either stack $i−1$ or stack $i+1$ in one of her previous turns. The same is true for Bob. If at some point there is no valid choice for either player, they skip that turn and claim no stack.

The game ends when every stack is claimed. At that point, Alice collects all pancakes from all stacks she claimed, and Bob collects all pancakes in all stacks he claimed.

Alice wants to get as many pancakes as possible for herself, and Bob wants to get as many pancakes as possible for himself. Can you help Alice find out the maximum number of pancakes she can collect if they both play optimally?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of three lines.

The first line of each test case contains an integer $N$, representing the number of pancake stacks.

The second line contains $N$ integers $A_1,A_2,…,A_N$, where $A_i$ denotes the number of pancakes in stack $i$.

The third line contains 4 integers $L_a$, $R_a$, $L_b$, and $R_b$, the inclusive ranges of pancake stack labels Alice and Bob can choose for their first turn, respectively.
