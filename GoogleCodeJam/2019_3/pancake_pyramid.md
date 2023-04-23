# Problem

You have just finished cooking for some diners at the Infinite House of Pancakes. There are S stacks of pancakes in all, and you have arranged them in a line, such that the i-th stack from the left (counting starting from 1) has Pi pancakes.

Your supervisor was about to bring out the stacks to the customers, but then it occurred to her that a picture of the stacks might make for a good advertisement. However, she is worried that there might be too many stacks, so she intends to remove the L leftmost stacks and the R rightmost stacks, where L and R are nonnegative integers such that L + R ≤ S - 3. (Notice that at least 3 stacks of pancakes will remain after the removal.)

Your supervisor also thinks the remaining stacks will look aesthetically pleasing if they have the pyramid property. A sequence of N stacks of heights H1, H2, ... , HN has the pyramid property if there exists an integer j (1 ≤ j ≤ N) such that H1 ≤ H2 ≤ ... ≤ Hj-1 ≤ Hj and Hj ≥ Hj+1 ≥ ... ≥ HN-1 ≥ HN. (It is possible that this sequence might not look much like a typical "pyramid" — a group of stacks of the same size has the pyramid property, and so does a group in which the stack heights are nondecreasing from left to right, among other examples.)

Note that the sequence of stacks remaining after your supervisor removes the L leftmost and R rightmost stacks might not yet have the pyramid property... but you can fix that by adding pancakes to one or more of the stacks! The pyramidification cost of a sequence of stacks is the minimum total number of pancakes that must be added to stacks to give the sequence the pyramid property.

While your manager is carefully deciding which values of L and R to choose, you have started to wonder what the sum of the pyramidification costs over all valid choices of L and R is. Compute this sum, modulo the prime 109+7 (1000000007).

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line containing one integer S: the number of stacks of pancakes. Then, there is one more line containing S integers P1, P2, ..., PS. The i-th of these is the number of pancakes in the i-th stack from the left.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the sum of the pyramidification costs over all valid choices of L and R, modulo the prime 109+7 (1000000007).

Limits

Time limit: 30 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ Pi ≤ 109, for all i.
Test set 1 (Visible)

S = 3000, for up to 20 test cases.
3 ≤ S ≤ 500, for all remaining cases.
Test set 2 (Hidden)

S = 106, for up to 1 test case.
S = 105, for up to 3 test cases.
3 ≤ S ≤ 10000, for all remaining cases.
Sample

Input
3
3
2 1 2
5
1 6 2 5 7
4
1000000000 1 1 1000000000

Output
Case #1: 1
Case #2: 16
Case #3: 999999991
