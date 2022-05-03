# Medium

A prime number is Super Prime if it is a sum of two primes. Find all the Super Primes upto **N**.

```cpp
class Solution{
public:
    int superPrimes(int n)
    {
        vector<bool> sieve(n + 1, true);
        
        for (int i = 2; i * i <= n; ++i)
        {
            if (sieve[i])
            {
                for (int j = i * i; j <= n; j += i)
                    sieve[j] = false;
            }
        }
        
        int ret = 0;
        
        for (int i = 5; i <= n; ++i)
            if (sieve[i] && sieve[i - 2])
                ++ ret;
        
        return ret;
    }
};
```
