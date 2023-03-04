# Problem

There are $N$ weighted points in a plane. Point $i$ is at $(X_i, Y_i)$ and has weight $W_i$.

In this problem, we need to find a special center of these points. The center is a point $(X, Y)$ such that the sum of $\max(|X-X_i|, |Y-Y_i|) \times W_i$ is minimum.

## Input

The input starts with one line containing exactly one integer $T$, which is the number of test cases. $T$ test cases follow.

Each test case begins with one line containing one integer $N$. $N$ lines follow. Each line contains three space-separated real numbers $X_i$, $Y_i$, and $W_i$. $X_i$, $Y_i$ and $W_i$ have exactly 2 digits after the decimal point.
