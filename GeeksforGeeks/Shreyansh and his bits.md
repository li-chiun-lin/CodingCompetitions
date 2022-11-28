# Medium

Shreyansh has an integer $N$. He is really curious about the binary representation of integers. He sees that any given integer has a number of set bits. Now he wants to find out that how many positive integers, strictly less than $N$, have the same number of set bits as $N$.

He is a little weak in maths. Help him find the number of integers.

Note : Since $N$ takes large values, brute force won't work.

```cpp
class Solution{
public:
    long long comb(long long n, long long r)
    {
        if (r > n)
            return 0;
            
        long long ret = 1;
        
        for (int i = 0; i < r; ++i)
        {
            ret *= n - i;
            ret /= i + 1;
        }
        
        return ret;
    }
    
    long long count(long long x) {
        int cnt = 0;
        int one = 0;
        long long ret = 0;
        
        while (x)
        {
            if (x & 1)
                ret += comb(cnt, ++ one);
                
            ++ cnt;
            x >>= 1;
        }

        return ret;
    }
};
```
