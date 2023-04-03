# Problem

There are N people in the world numbered 1 to N. The i-th person has a distinct name Si that is a string of uppercase English letters.

Two people are friends if and only if there is some letter that appears at least once in each of their names. Any such letter does not need to be at the same position in both names. After all, friendship requires having something in common!

A friendship chain of length n between person A and person B is a sequence of people X1, X2, ..., Xn such that X1 = A, Xn = B, and Xi and Xi+1 are friends, for i=1 to n-1. Note that any two people can have zero or more friendship chains between them.

For each of the given Q pairs of people, can you find the length of the shortest friendship chain between them? If there is no friendship chain between a pair, output -1.
