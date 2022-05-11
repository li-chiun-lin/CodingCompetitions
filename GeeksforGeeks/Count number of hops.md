# Easy

A frog jumps either **1, 2, or 3** steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo **1000000007**.

```cpp
class Solution
{
public:
    long long countWays(int n)
    {
        int m = 1e9 + 7;
        vector<long long> dp(max(n + 3, 4));
        
        dp[0 + 2] = 1;
        
        for (int i = 0; i < n; ++i)
            dp[i + 3] = (dp[i] + dp[i + 1] + dp[i + 2]) % m;
        
        return dp[n + 2];
    }
};
```
