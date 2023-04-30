# Problem

You are playing a solitaire game in which there are N stacks of face-up cards, each of which initially has C cards. Each card has a value and a suit, and no two cards in the game have the same value/suit combination.

In one move, you can do one of the following things:

1. If there are two or more cards with the same suit that are on top of different stacks, you may remove the one of those cards with the smallest value from the game. (Whenever you remove the last card from a stack, the stack is still there — it just becomes empty.)
1. If there is an empty stack, you may take a card from the top of any one of the non-empty stacks and place it on top of (i.e., as the only card in) that empty stack.

You win the game if you can make a sequence of moves such that eventually, each stack contains at most one card. Given a starting arrangement, determine whether it is possible to win the game.

## Input

The first line of the input gives the number P of premade stacks that will be used in the test cases. Then, P lines follow. The i-th of those lines begins with an integer Ci, the number of cards in the i-th of those premade stacks, and continues with Ci ordered pairs of integers. The j-th of these ordered pairs has two integers Vij and Sij, representing the value and suit of the j-th card from the top in the i-th premade stack.

Then, there is another line with one integer T, the number of test cases. T test cases follow. Each case begins with one line with two integers N and C: the number of stacks, and the number of cards in each of those stacks. Then, there is one line with N integers Pi, representing the indexes (starting from 0) of the test case's set of premade stacks.
