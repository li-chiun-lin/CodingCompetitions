# Easy

Ishaan has been given a task by his teacher. He needs to find the $N$-th term of a series. His teacher gives him some examples to help him out. He is a bit weak in pattern searching so to help him his teacher told him that the $N$-th term is related to prime numbers. The $N$-th term is the difference of $N$ and the closest prime number to $N$. Help him find the $N$-th term for a given $N$.

```cpp
class Solution {
    bool isprime(int n)
    {
        if (n <= 1)
            return false;
            
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0)
                return false;
                
        return true;
    }
    
public:
    int NthTerm(int N)
    {
        int r = 0;
        int l = 0;
        
        for (l = N; l > 0; --l)
            if (isprime(l))
                break;
            
        for (r = N; r <= 1e6; ++r)
            if (isprime(r))
                break;
            
        return min(r - N, N - l);
    }
};
```
