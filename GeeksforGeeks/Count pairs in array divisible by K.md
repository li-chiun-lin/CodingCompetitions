# Medium

Given an array $A[]$ and positive integer $K$, the task is to count total number of pairs in the array whose sum is divisible by $K$.

```cpp
class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        map<int, int> rem;
        
        for (int i = 0; i < n; ++i)
            ++ rem[A[i] % K];
            
        long long ret = 0;
        
        for (auto &r : rem)
        {
            if (r.first * 2 == K || r.first == 0)
                ret += r.second * (r.second - 1);
            else
                ret += r.second * rem[K - r.first];
        }
        
        return ret / 2;
    }
};
```
