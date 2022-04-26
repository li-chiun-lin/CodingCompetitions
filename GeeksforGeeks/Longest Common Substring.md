# Medium

Given two strings. The task is to find the length of the longest common substring.

```cpp
class Solution{
public:
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
        int ret = 0;
        
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (S1[i] == S2[j])
                {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                    ret = max(ret, dp[i + 1][j + 1]);
                }
            }
        }
        
        return ret;
    }
};
```

## For longest common subsequence

```cpp
int lcseq(string S1, string S2, int n, int m)
{
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (S1[i] == S2[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    
    return dp[n][m];
}
```

