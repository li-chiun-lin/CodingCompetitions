# Problem

We are in the process of creating a somehow esoteric sorting algorithm to sort an array $A$ of all integers between $1$ and $N$. The integers in $A$ can start in an arbitrary order. Besides the input order, the algorithm depends on two integers $P$ (which would be at most $3$) and $K$. Here is how the algorithms works:

1. Partition $A$ into $K$ disjoint non-empty subarrays $A_1, A_2, ..., A_K$ such that concatenating them in order $A_1A_2 ... A_K$ produces $A$.
2. Sort each subarray individually.
3. Choose up to $P$ of the subarrays, and swap any two of them any number of times.

For example, consider $A = [1 5 4 3 2]$ and $P = 2$. A possible partition into $K = 4$ disjoint subarrays is:

$
A_1 = [1] \\
A_2 = [5] \\
A_3 = [4] \\
A_4 = [3 \ 2]
$

After Sorting Each Subarray:

$
A_1 = [1] \\
A_2 = [5] \\
A_3 = [4] \\
A_4 = [2 \ 3] \\
$

After swapping $A_4$ and $A_2$:

$
A_1 = [1] \\
A_2 = [2 \ 3] \\
A_3 = [4] \\
A_4 = [5] \\
$

We want to show the algorithm is good for distributed environments by finding, for a fixed input and value of $P$, the maximum number of partitions $K$ such that, choosing the partitions and swaps wisely, we can achieve a sorting of the original order. Can you help us to calculate that $K$?

## Input

The first line of the input gives the number of test cases, $T$.
$T$ test cases follow. Each test case consists of two lines. The first line contains two integers $N$ and $P$, as described above.
The second line of the test case contains $N$ integers $X_1, X_2, ..., X_N$ represting array $A$.
