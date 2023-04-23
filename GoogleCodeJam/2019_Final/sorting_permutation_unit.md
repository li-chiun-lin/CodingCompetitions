# Problem

You may have heard of Google's Tensor Processing Units, which are used to build neural networks. However, there is one research area that is even deeper and more important than machine learning: sorting!

We are working on a special new chip called the Sorting Permutation Unit, which is very fast at applying permutations to arrays of integers. Formally, a permutation is an ordering of the first n positive integers

p1, p2, ..., pn

and applying it to an array of n integers

a1, a2, ..., an

yields the new array

ap1, ap2, ..., apn.

For example, applying the permutation 3, 1, 2, 4 to the array 99, 234, 45, 800 would yield the new array 45, 99, 234, 800.

However, permutations are expensive to represent in the hardware, so the unit can only have access to at most P distinct permutations. We need your help figuring out what those permutations should be!

Given K arrays of N integers each, you must first specify up to P permutations (of size N) of your choice. Then, for each of those K input arrays, you must provide one sequence of up to S instructions (each of which is a permutation from your specified set). When the instructions in this sequence are applied, in the given order, to the array, they must yield an array sorted in nondecreasing order. In each of your K sequences of instructions, you may use each of your P permutations zero or more times (not necessarily consecutively).

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with four integers P, S, K, and N: the maximum number of permutations allowed, the maximum number of instructions you are allowed to use to sort each array, the number of arrays, and the number of integers in each array. Then, there are K more lines of N integers Ai1, Ai2, .., AiN each, where the j-th integer on the i-th line, Aij, represents the j-th value of the i-th array.

## Output

For each test case, first output the following, in this order:

    One line containing Case #x:, where x is the test case number (starting from 1).
    One line containing one integer P', where 1 ≤ P' ≤ P: the number of permutations you have chosen to use.
    P' lines, the i-th of which contains N integers pi1 pi2 ... piN, where pij is the j-th element of the i-th permutation.

Then, output K more lines. The i-th of these gives the instructions that you will apply to the i-th array given in the input. Each such line must begin with one integer S', where 0 ≤ S' ≤ S, and must continue with S' integers X1, X2, ..., XS', where 1 ≤ Xk ≤ P' for all k. Here, Xk represents that the k-th instruction you apply to the i-th array is the Xk-th permutation (counting starting from 1) in your list of permutations. These instructions must yield an array with the elements of the i-th input array, sorted in nondecreasing order.
