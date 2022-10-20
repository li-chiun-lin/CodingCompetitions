# Problem

Consider an infinite complete binary tree where the root node is $1/1$ and left and right childs of node $p/q$ are $p/(p+q)$ and $(p+q)/q$, respectively. This tree looks like:

```text
         1/1
    ______|______
    |           |
   1/2         2/1
 ___|___     ___|___
 |     |     |     |
1/3   3/2   2/3   3/1
...
```

It is known that every positive rational number appears exactly once in this tree. A level-order traversal of the tree results in the following array:

$1/1, 1/2, 2/1, 1/3, 3/2, 2/3, 3/1, \dots$

Please solve the following two questions:

- Find the $n$-th element of the array, where $n$ starts from $1$.
- Given $p/q$, find its position in the array.
