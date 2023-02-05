# Easy

Given a positive integer $N$, find the sum of all prime numbers between $1$ and $N$ (inclusive).

```cpp
class Solution{
public:
    long long int prime_Sum(long long int n){
        long long int sum = 0;
        bool sieve[n + 1];
        
        for (long long int i = 2; i <= n; ++i)
            sieve[i] = true;
            
        for (long long int i = 2; i <= n; ++i)
            if (sieve[i])
            {
                sum += i;
                for (long long int j = i * i; j <= n; j += i)
                    sieve[j] = false;
            }
            
        return sum;
    }    
};
```
