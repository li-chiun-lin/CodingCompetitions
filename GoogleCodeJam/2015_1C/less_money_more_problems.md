# Problem

Up until today, the nation you live in has used D different positive integer denominations of coin for all transactions. Today, the queen got angry when a subject tried to pay his taxes with a giant sack of low-valued coins, and she just decreed that no more than C coins of any one denomination may be used in any one purchase. For instance, if C = 2 and the existing denominations are 1 and 5, it is possible to buy something of value 11 by using two 5s and one 1, or something of value 12 by using two 5s and two 1s, but it is impossible to buy something of value 9 or 17.

You cannot directly challenge the queen's decree, but you happen to be in charge of the mint, and you can issue new denominations of coin. You want to make it possible for any item of positive value at most V to be purchased under the queen's new rules. (Note that this may not necessarily have been possible before the queen's decree.) Moreover, you want to introduce as few new denominations as possible, and your final combined set of pre-existing and new denominations may not have any repeats.

What is the smallest number of new denominations required?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with three space-separated values C, D, and V, followed by another line with D distinct space-separated values representing the preexisting denominations, in ascending order.
