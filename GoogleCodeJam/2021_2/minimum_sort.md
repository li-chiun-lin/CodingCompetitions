# Problem

In this problem, you need to sort a list of N=100 distinct integers in strictly increasing order. You can rearrange the list by swapping the contents of any two positions (they do not need to be adjacent). Unfortunately, you cannot read those contents directly. You can access information about the list contents by querying the minimum of a range. The minimum query gives you the position of the minimum value over a range of consecutive positions. For example, in the list [51,33,100,11], the minimum over the range between positions 2 and 4, inclusive (1-based), is at position 4 and the minimum between positions 1 and 3 is at position 2.

Queries about the minimum within a range are limited by a coin budget per test case. Larger ranges are cheaper: asking about the position of the minimum between positions i and j (for i<j) costs ⌈108/(j−i+1)⌉ coins, where ⌈x⌉ is the smallest integer greater than or equal to x (that is, x rounded up). Swap operations, on the other hand, do not cost any coins.

Write a program that sorts lists of integers using any number of swaps and at most 6×10^8 coins per test case distributed among any number of minimum queries.
