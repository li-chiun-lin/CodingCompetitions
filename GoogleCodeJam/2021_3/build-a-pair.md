# Problem

You want to build a pair of positive integers. To do that, you are given a list of decimal digits to use. You must use every digit in the list exactly once, but you get to choose which ones to use for the first integer and which ones to use for the second integer. You also get to choose the order of the digits within each integer, except you cannot put a zero as the most significant (leftmost) digit in either integer. Note that you cannot choose just a zero for one integer either, because it would not be positive.

For example, you could be given the list [1,0,2,0,4,3]. Two of the valid pairs you can build are (200,143) and (3,12400). The following pairs, on the other hand, are not valid:

- (0102,34): has a leading zero.
- (0,12340): has a non-positive integer.
- (10,243) and (12300,47): the list of digits in each of these pairs is not exactly equal to the given list of digits.

Given the list of digits to use, what is the minimum absolute difference between the two built integers that can be achieved?
