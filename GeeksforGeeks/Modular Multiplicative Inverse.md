# Easy

Given two integers $a$ and $m$. The task is to find the smallest modular multiplicative inverse of $a$ under modulo $m$.

```cpp
class Solution{
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
public:
    int modInverse(int a, int m)
    {
        if (gcd(a, m) != 1)
            return -1;
            
        for (long long i = 1; i < m; ++i)
            if ((i * a) % m == 1)
                return i;
                
        return -1;
    }
};
```
