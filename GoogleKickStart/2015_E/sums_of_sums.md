# Problem

Alice presented her friend Bob with an array of $N$ positive integers, indexed from $1$ to $N$. She challenged Bob with many queries of the form "what is the sum of the numbers between these two indexes?" But Bob was able to solve the problem too easily.

Alice took her array and found all $N \times (N+1)/2$ non-empty subarrays of it. She found the sum of each subarray, and then sorted those values (in nondecreasing order) to create a new array, indexed from $1$ to $N \times (N+1)/2$. For example, for an initial array $[2, 3, 2]$, Alice would generate the subarrays $[2], [3], [2], [2, 3], [3, 2],$ and $[2, 3, 2]$ (note that $[2, 2]$, for example, is NOT a subarray). Then she'd take the sums -- $2, 3, 2, 5, 5, 7$ -- and sort them to get a new array of $[2, 2, 3, 5, 5, 7]$.

Alice has given the initial array to Bob, along with $Q$ queries of the form "what is the sum of the numbers from index $L_i$ to $R_i$, inclusive, in the new array?" Now Bob's in trouble! Can you help him out?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case begins with one line with two space-separated integers $N$ and $Q$, denoting the number of elements in the initial array and the number of Alice's queries. Then, there is one line with $N$ space-separated integers, denoting the elements of Alice's initial array. Finally, there are $Q$ more lines with two space-separated integers each: $L_i$ and $R_i$, the inclusive index bounds for the $i$-th query.
