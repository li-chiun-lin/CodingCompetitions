# Problem

Professor Math is working on a secret project and is facing a challenge where a list of numbers need to be encoded into a single number in the most efficient manner. After much research, Professor Math finds a 3 step process that can best encode the numbers:

1. The first step is to find all possible non-empty subsets of the list of numbers and then, for each subset, find the difference between the largest and smallest numbers (that is, the largest minus the smallest) in that subset. Note that if there is only one number in a subset, it is both the largest and the smallest number in that subset. The complete set itself is also considered a subset.
1. Then add up all the differences to get the final encoded number.
1. As the number may be large, output the number modulo $10^9 + 7$.

The professor has shared an example and its explanation below. Given a list of numbers, can you help the professor build an efficient function to compute the final encoded number?

## Input

The first line of the input gives the number of test cases, $T$. This is followed by $T$ test cases where each test case is defined by 2 lines:

1. The first line gives a positive number $N$: the number of numbers in the list and
1. The second line contains a list of $N$ positive integers $K_i$, sorted in non-decreasing order.
