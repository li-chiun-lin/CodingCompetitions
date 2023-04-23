# Problem

The Code Jam team's first cryptocurrency, jamcoins, never caught on. This year, we are trying again with hexacoins, which are named for their use of base 16. To "mine" a D-digit hexacoin, one has to work with integers using exactly D base 16 digits, including leading zeroes if needed. Each value represents an integer between 0 and 16D - 1, inclusive. Base 16 digits are represented by the numbers 0 through 9 and the uppercase letters A through F, as usual. For example, F2B, 0C8 and 000 are valid values when D=3, corresponding to the base 10 values 3883, 200 and 0. On the other hand, 1234, DF, C0DE and JAM are not valid values when D=3.

When performing addition of D-digit base 16 values, any overflow digits are dropped. That is, the addition is performed modulo 16D. For example, F2B + 0C8 = FF3 (4083 in base 10) and F2B + F2B = E56 (3670 in base 10, because the sum's result is 7766, and taking modulo 163 yields 3670).

To "mine" a D-digit hexacoin, a computer must perform the following steps:

    Choose a list L of N D-digit base 16 values L1, L2, ..., LN.
    Choose a target range of D-digit base 16 values: the numbers from S to E, inclusive.
    Choose a permutation P of the base 16 digits 0 through F, uniformly at random from among all 16! such permutations.
    Apply P to all digits of all numbers in the list, creating a new list L' consisting of N D-digit base 16 values. Formally, the j-th digit of the i-th element of L' is the result of applying P to the j-th digit of the i-th element of L.
    Choose a pair of elements from L' without replacement, uniformly at random from among all such possible choices, and independently of the choice of permutation.
    Calculate the sum (dropping overflow digits) of the two chosen elements.

If the sum calculated in the last step is between S and E, inclusive, then a hexacoin has been found! For example, suppose that:

    L = [134, 000, FFB, 000, AA9].
    S = 85C and E = EDF.
    The computer happens to choose P = (0 → 4, 1 → A, 2 → 2, 3 → 8, 4 → 9, 5 → B, 6 → C, 7 → 7, 8 → F, 9 → 1, A → 0, B → 3, C → 5, D → 6, E → E, F → D). 

Then, when P is applied to L, the resulting L' is [A89, 444, DD3, 444, 001]. Notice that P is not applied to S and E.

There are (5 × 4) / 2 = 10 pairs of values to choose, and each pair has a probability of 1/10 of being chosen. The only sums that fall within the range are A89 + DD3 = 85C, 444 + 444 = 888, A89 + 001 = A8A, DD3 + 001 = DD4, and A89 + 444 = ECD (twice).

The first two steps are already computed and you know the list L and the range [S, E] that were chosen. What is the probability that a hexacoin is found after the rest of the process is performed?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of three lines. The first line contains two integers N and D: the size of the given list and the number of digits to work with, respectively. The second line contains two D-digit base 16 numbers S and E: the inclusive lower and upper bounds of the target range, respectively. Then there is one more line containing N D-digit base 16 numbers L1, L2, ..., LN, representing the values in the list.

## Output

For each test case, output one line containing Case #x: y z, where x is the test case number (starting from 1) and y and z are non-negative integers, such that the fraction y/z represents the probability of finding a hexacoin, under the conditions described above. All of x, y, and z must be in base 10. If there are multiple acceptable values for y and z, choose the ones such that z is minimized.
