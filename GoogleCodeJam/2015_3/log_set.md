# Problem

The power set of a set S is the set of all subsets of S (including the empty set and S itself). It's easy to go from a set to a power set, but in this problem, we'll go in the other direction!

We've started with a set of (not necessarily unique) integers S, found its power set, and then replaced every element in the power set with the sum of elements of that element, forming a new set S'. For example, if S = {-1, 1}, then the power set of S is {{}, {-1}, {1}, {-1, 1}}, and so S' = {0, -1, 1, 0}. S' is allowed to contain duplicates, so if S has N elements, then S' always has exactly 2N elements.

Given a description of the elements in S' and their frequencies, can you determine our original S? It is guaranteed that S exists. If there are multiple possible sets S that could have produced S', we guarantee that our original set S was the earliest one of those possibilities. To determine whether a set S1 is earlier than a different set S2 of the same length, sort each set into nondecreasing order and then examine the leftmost position at which the sets differ. S1 is earlier iff the element at that position in S1 is smaller than the element at that position in S2.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with an integer P, followed by two more lines, each of which has P space-separated integers. The first of those lines will have all of the different elements E1, E2, ..., EP that appear in S', sorted in ascending order. The second of those lines will have the number of times F1, F2, ..., FP that each of those values appears in S'. That is, for any i, the element Ei appears Fi times in S'
