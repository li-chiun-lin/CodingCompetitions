# Problem

Writing Code Jam problems is hard, so we have built an AI to come up with new ideas. To make the AI as creative as possible, we have given it N different "cores", each of which has its own "personality". However, just like people, these cores may become distracted or corrupt or may refuse to work; the i-th core has a success probability Pi of functioning properly. As long as at least K of the cores function properly, the AI will function properly. Otherwise, it will probably become evil and trap us in a maze of fiendish puzzles of its own design. And who knows what it might do to Code Jam — it might just write a bunch of tough probability problems!

To prevent this from happening, we plan to train one or more of the cores to become more reliable. We have a total of U "training units" that we can use to improve the cores. Spending X units on the i-th core will add X to its success probability. We can divide up the units among the cores however we like, and it is possible that one or more cores may not receive any units. Of course, a core's success probability cannot be increased above 1.

If we assign the training units to maximize the probability that the AI will function properly, what is that probability?
Solving this problem

This problem has 2 Small datasets and no Large dataset. You must solve the first Small dataset before you can attempt the second Small dataset. You will be able to retry either of the datasets (with a time penalty).

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of three lines. The first line contains two integers N and K: the total number of cores, and the minimum number of cores that must succeed for the AI to function properly. The second line contains one rational U: the number of training units. The third line contains N rational numbers Pi; the i-th of these gives the probability that the i-th core will function properly. All of these probabilities are specified to exactly four decimal places of precision.
