# Easy

Given a number $N$. The task is to find the $N$-th catalan number.

```cpp
class Solution
{
public:
    cpp_int findCatalan(int n) 
    {
        vector<cpp_int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        
        for (int i = 2; i <= n; ++i)
            for (int j = 0; j < i; ++j)
                dp[i] += dp[j] * dp[i - j - 1];
                
        return dp[n];
    }
};
```
