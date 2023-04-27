# Problem

Scott has an ant farm containing N ants. Each ant has a certain length and weight.

Today, as a challenge for the ants, Scott has placed some food at the top of the ant farm. The ants will try to reach it by arranging themselves into a vertical stack, with each ant in the stack directly holding the next on its back. In this way, each ant bears the weight of all ants above it. Scott's ants are very strong for their size and are able to carry up to 6 times their own weight. For example, an ant that weights 8 milligrams can carry two other ants weighing 24 milligrams each! Each ant also has a body length; the exact lengths are not important, except that they are all different.

    The stack must be linear. Each ant except for the top ant must be directly below exactly one ant, and each ant except for the bottom ant must be directly above exactly one ant.
    The lengths of the ants in the stack must be strictly decreasing from the bottom to the top of the stack; this ensures that each new ant that joins the stack will be able to climb up to the top.
    For each ant, the sum of the weights of all the ants above it in the stack must be no more than 6 times the weight of that ant.

What is the maximum number of these ants that can form such a stack?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer N: the number of ants in the colony. Then, a second line follows containing N integers W1, W2, ..., WN, where Wi is the weight in milligrams of the i-th ant. The ants are listed in strictly increasing order of length. Notice that no actual length values are given; only the order is important.
