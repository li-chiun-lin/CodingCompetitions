# Medium

Given a string $str$ of length $N$, you have to find number of palindromic subsequence (need not necessarily be distinct) which could be formed from the string $str$.

Note: You have to return the answer module $10^9+7$

```cpp
class Solution{
public:
    long long int countPS(string str)
    {
        int n = str.size();
        vector<vector<long long int>> dp(n, vector<long long int>(n));
        int m = 1e9 + 7;
        
        for (int i = 0; i < n; ++i)
            dp[i][i] = 1;
            
        for (int i = 1; i < n; ++i)
            dp[i - 1][i] = 2 + (str[i - 1] == str[i]);
                
        for (int len = 2; len < n; ++len)
            for (int i = 0, j = len; j < n; ++i, ++j)
                dp[i][j] = (
                    dp[i][j - 1] 
                  + dp[i + 1][j] 
                  + (str[i] == str[j] 
                    ? 1 
                    : m - dp[i + 1][j - 1])
                ) % m;
        
        return dp[0][n - 1];
    }
};
```
