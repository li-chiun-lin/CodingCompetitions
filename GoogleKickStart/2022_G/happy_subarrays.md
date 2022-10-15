# Problem

Let us define $F(B,L,R)$ as the sum of a subarray of an array $B$ bounded by indices $L$ and $R$ (both inclusive). Formally, $F(B,L,R)=B_L+B_{L+1}+\dots+B_R$.

An array $C$ of length $K$ is called a happy array if all the prefix sums of $C$ are non-negative. Formally, the terms $F(C,1,1),F(C,1,2),\dots,F(C,1,K)$ are all non-negative.

Given an array $A$ of $N$ integers, find the result of adding the sums of all the happy subarrays in the array $A$.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.

Each test case begins with one line consisting an integer $N$ denoting the number of integers in the input array $A$.

Then the next line contains $N$ integers $A_1,A_2,\dots,A_N$ representing the integers in given input array $A$.
