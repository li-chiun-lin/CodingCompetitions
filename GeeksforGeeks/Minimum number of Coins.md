# Medium

Given an infinite supply of each denomination of Indian currency $\{1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 \}$ and a target value $N$.
Find the minimum number of coins and/or notes needed to make the change for Rs $N$. You must return the list containing the value of coins required.

```cpp
class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> deno = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int> ret;
        
        for (int i = deno.size() - 1; i >= 0 && N; --i)
        {
            int q = N / deno[i];
            N %= deno[i];
            
            ret.insert(ret.end(), q, deno[i]);
        }
        
        return ret;
    }
};
```
