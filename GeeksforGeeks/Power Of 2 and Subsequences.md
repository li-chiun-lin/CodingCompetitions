# Medium

Given is an array $A$ of size $N$, return the number of non-empty subsequences such that the product of all numbers in the subsequence is Power of $2$. Since the answer may be too large, return it modulo $10^9 + 7$.

```cpp
class Solution{ 
public:
    long long numberOfSubsequences(int N, long long A[]){
        long long mod = 1e9 + 7;
        long long ret = 1;
        
        for (int i = 0; i < N; ++i)
            if ((A[i] & (A[i] - 1)) == 0)
                ret = (ret << 1) % mod;
        
        return ret - 1;
    }
};
```
