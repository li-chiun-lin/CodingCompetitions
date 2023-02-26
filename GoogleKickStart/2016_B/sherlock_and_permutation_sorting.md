# Problem

Sherlock and Watson have already been introduced to sorting in their computer programming course. Now, Watson has always been curious about parallel computing and wants to sort a permutation of the integers $1$ through $N$ by breaking it into chunks, sorting the chunks individually, and then concatenating them.

For a permutation $p_1, p_2, ..., p_N$, a chunk is a contiguous subarray of the permutation: i.e., a sequence of elements $p_i, p_{i + 1}, ..., p_j$, for the elements at indexes $i$ and $j$ such that $1 ≤ i ≤ j ≤ N$.

Watson wants to partition his permutation into an ordered list of one or more chunks, without changing the order that the elements are in, in such a way that each element of the permutation is in exactly one chunk, and all elements in a chunk are smaller than all elements in any later chunk.
For example, for the permutation $[2, 1, 3, 5, 4]$, these are the only four legal ways for Watson to break it into chunks: $[[2, 1, 3], [5, 4]]$ or $[[2, 1], [3, 5, 4]]$ or $[[2, 1], [3], [5, 4]]$ or $[[2, 1, 3, 5, 4]]$. Watson is happiest when there are as many chunks as possible; we denote the maximum number of chunks for a permutation $p$ as $f(p)$. In this example, the maximum number of chunks is $3$.

Watson wants to consider all permutations $p$ of the numbers $1$ through $N$, and find the sum of squares of $f(p)$. Watson knows Sherlock might come in handy and comes to him for help, but Sherlock is as clueless as Watson and asks you for help. As the sum of squares can be large, please find it modulo $M$.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of one line with two integers $N$ and $M$.
