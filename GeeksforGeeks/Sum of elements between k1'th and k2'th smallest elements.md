# Easy

Given an array $A$ of $N$ positive integers and two positive integers $K1$ and $K2$. Find the sum of all elements between $K1$-th and $K2$-th smallest elements of the array. It may be assumed that ($1 \leq k1 < k2 \leq n$).

```cpp
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        sort(A, A + N);
        return accumulate(A + K1, A + K2 - 1, 0L);
    }
};
```
