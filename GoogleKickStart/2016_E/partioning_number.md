# Problem

Shekhu has $N$ balls. She wants to distribute them among one or more buckets in a way that satisfies all of these constraints:

1. The numbers of balls in the buckets must be in non-decreasing order when read from left to right.
1. The leftmost bucket must be non-empty and the number of balls in the leftmost bucket must be divisible by $D$.
1. The difference (in number of balls) between any two buckets (not just any two adjacent buckets) must be less than or equal to $2$.

How many different ways are there for Shekhu to do this? Two ways are considered different if the lists of numbers of balls in buckets, reading left to right, are different.

## Input

The first line of the input gives the number of test cases, $T$.
$T$ test cases follow. Each test case consists of one line with two integers $N$ and $D$, as described above.
