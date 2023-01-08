# Easy

Akku likes binary numbers and she likes playing with these numbers. Her teacher once gave her a question. For given value of $L$ and $R$, Akku have to find the count of number $X$, which have only three-set bits in it's binary representation such that $L \leq X \leq R$. Akku is genius, she solved the problem easily. Can you do it?

```cpp
class Solution{
public:
    void precompute()
    {
    }
    
    long long solve(long long l, long long r){
        int cnt = 0;
        
        for (long long i = 1; i <= r; i <<= 1)
            for (long long j = i << 1; j <= r; j <<= 1)
                for (long long k = j << 1; k <= r; k <<= 1)
                {
                    long long x = i | j | k;
                    
                    if (l <= x && x <= r)
                        ++ cnt;
                }
                
        return cnt;
    }
};
``
