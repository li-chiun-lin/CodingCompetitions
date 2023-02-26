# Problem

Sherlock and Watson have mastered the intricacies of the language C++ in their programming course, so they have moved on to algorithmic problems. In today's class, the tutor introduced the problem of merging one-dimensional intervals. $N$ intervals are given, and the $i$-th interval is defined by the inclusive endpoints $[L_i, R_i]$, where $L_i ≤ R_i$.

The tutor defined the covered area of a set of intervals as the number of integers appearing in at least one of the intervals. (Formally, an integer $p$ contributes to the covered area if there is some $j$ such that $L_j ≤ p ≤ R_j$.)

Now, Watson always likes to challenge Sherlock. He has asked Sherlock to remove exactly one interval such that the covered area of the remaining intervals is minimized. Help Sherlock find this minimum possible covered area, after removing exactly one of the $N$ intervals.

## Input

Each test case consists of one line with eight integers $N$, $L_1$, $R_1$, $A$, $B$, $C_1$, $C_2$, and $M$. $N$ is the number of intervals, and the other seven values are parameters that you should use to generate the other intervals, as follows:

First define $x_1 = L_1$ and $y_1 = R_1$. Then, use the recurrences below to generate $x_i$, $y_i$ for $i = 2$ to $N$:

- $x_i = ( A \times x_{i-1} + B \times y_{i-1} + C_1 ) \mod M$.
- $y_i = ( A \times y_{i-1} + B \times x_{i-1} + C_2 ) \mod M$.

We define $L_i = min(x_i, y_i)$ and $R_i = max(x_i, y_i)$, for all $i = 2$ to $N$.
