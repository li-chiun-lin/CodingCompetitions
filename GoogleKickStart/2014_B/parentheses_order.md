# Problem

An $n$ parentheses sequence consists of $n$ ('s and $n$ )'s.

A valid parentheses sequence is defined as the following:

You can find a way to repeat erasing adjacent pair of parentheses () until it becomes empty.

For example, (()) is a valid parentheses, you can erase the pair on the 2nd and 3rd position and it becomes () then you can make it empty.
)()( is not a valid parentheses, after you erase the pair on the 2nd and 3rd position, it becomes )( and you cannot erase any more.

Now, we have all valid $n$ parentheses sequences. Find the $k$-th smallest sequence in lexicographical order.

For example, here are all valid 3 parentheses sequences in lexicographical order:

```text
((()))
(()())
(())()
()(())
()()()
```

## Input

The first line of the input gives the number of test cases, $T$. $T$ lines follow. Each line represents a test case consisting of 2 integers, $n$ and $k$.
