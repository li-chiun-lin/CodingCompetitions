# Problem

A permutation cycle in a permutation $C$ is a sequence of integers $(a_1,a_2,…,a_k)$ such that the following hold:

- $a_i \in C$ for all $i$, and are distinct.
- For each $i \in {1,2,…,k−1}: C[a_i]=a_{i+1}$, and $C[a_k]=a_1$.

A permutation cycle of length $k$ is called a $k$-cycle.

For example, the permutation $C=[4,2,1,3]$ has two cycles: the $3$-cycle $(4,3,1)$, and the $1$-cycle $(2)$. $(4,3,1)$ is a cycle because $C[4]=3$, $C[3]=1$, and $C[1]=4$.

Grace loves permutation cycles, so Charles decides to design an $N$-level game to challenge her.

At the start of the game, the player is given an $N$-length permutation $P$ of integers from $1$ through $N$. The levels in the game are numbered from $1$ to $N$. At each level, the player starts with the given permutation, and is allowed to make modifications to it by swapping any two elements in it (multiple swaps allowed). To clear the $k$-th level in the game, the player is required to find the minimum number of swaps using which a $k$-cycle can be created in the permutation. The player can progress to the $(k+1)$-th level only after clearing the $k$-th level.

Grace finds the game a bit challenging, but wants to win at any cost. She needs your help! Formally, for each level $k$, you need to find the minimum number of swaps using which a $k$-cycle can be created in the permutation.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.
The first line of each test case contains an integer $N$: the length of the permutation.
The next line contains $N$ integers $P_1, P_2, …, P_N$, where the $i$-th integer represents the $i$-th element in the permutation $P$.
