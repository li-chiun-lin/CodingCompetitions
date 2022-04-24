# Medium

Given two numbers **L** and **R** (inclusive) find the product of primes within this range. Print the product modulo **10<sup>9</sup>+7**. If there are no primes in that range you must print **1**.

```cpp
class Solution{
public:
    bool isprime(long long n)
    {
        if (n < 2)
            return false;
            
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0)
                return false;
                
        return true;
    }
    
    long long primeProduct(long long L, long long R){
        int m = 1e9 + 7;
        long long ret = 1;
        
        for (long long i = L; i <= R; ++i)
            if (isprime(i))
                ret = (ret * i) % m;
                
        return ret;
    }
};
```
