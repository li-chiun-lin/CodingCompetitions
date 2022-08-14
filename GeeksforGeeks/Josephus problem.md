# Easy

Given the total number of persons $n$ and a number $k$ which indicates that $k-1$ persons are skipped and $k$-th person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so that when you perform these operations starting from $1$-st place in the circle, you are the last one remaining and survive.

```cpp
class Solution
{
    public:
    int josephus(int n, int k)
    {
        return n == 1 ? 1 : (josephus(n - 1, k) + k - 1) % n + 1;
    }
};
```
