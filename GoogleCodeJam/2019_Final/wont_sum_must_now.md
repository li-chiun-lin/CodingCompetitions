# Problem

In 2016, it was shown that every positive integer can be written as the sum of three or fewer palindromic terms. For the purposes of this problem, a palindromic term is a string of digits (with no leading zeroes) that represents a positive integer and reads the same forward and backward.

Given a positive integer S, find K palindromic terms that sum to S, such that K is minimized.

## Input

The first line of input gives the number of test cases, T. T lines follow, each containing a positive integer S.

## Output

For each test case, output one line of the form Case #x: A1 (if only one term is needed), Case #x: A1 A2 (if only two terms are needed), or Case #x: A1 A2 A3 (if three terms are needed), where x is the case number (counting starting from 1), each Ai is a palindromic term (as described above), and the sum of the Ais equals S.
