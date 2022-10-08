# Easy

The task is to count all the possible paths from top left to bottom right of a $m \times n$ matrix with the constraints that from each cell you can either move only to right or down. The answer may be very large, compute the answer modulo $10^9 + 7$.

```cpp
class Solution {
public:
    long long int numberOfPaths(int m, int n){
        int mod = 1e9 + 7;
        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1));
        
        dp[0][1] = 1;
        
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i + 1][j]) % mod;
                
        return dp[m][n];
    }
};
```
