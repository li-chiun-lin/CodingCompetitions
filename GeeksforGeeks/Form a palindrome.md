# Medium

Given a string, find the minimum number of characters to be inserted to convert it to palindrome.

```cpp
class Solution{
    int dfs(string &s, int i, int j, vector<vector<int>> &dp)
    {
        if (j <= i)
            return 0;
            
        if (dp[i][j] != -1)
            return dp[i][j];
            
        if (s[i] == s[j])
            return dp[i][j] = dfs(s, i + 1, j - 1, dp);
            
        int r1 = dfs(s, i + 1, j, dp);
        int r2 = dfs(s, i, j - 1, dp);
        
        return dp[i][j] = min(r1, r2) + 1;
    }

public:
    int countMin(string str){
        int n = str.size();
        
        vector<vector<int>> dp(n, vector<int>(n, -1));
        
        return dfs(str, 0, str.size() - 1, dp);
    }
};
```

```cpp
class Solution{
  public:
    int countMin(string str){
        int n = str.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1));
        
        // find longest common string between str and its reverse
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (str[i] == str[n - 1 - j])
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                else
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
                    
        return n - dp[n][n];
    }
};
```
