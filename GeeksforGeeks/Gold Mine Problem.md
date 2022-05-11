# Easy

Given a gold mine called **M** of **(n x m**) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move

- to the cell diagonally up towards the right
- to the right
- to the cell diagonally down towards the right

Find out maximum amount of gold which he can collect.

```cpp
class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n + 2, vector<int>(m));
        
        for (int c = 0; c < m; ++c)
            for (int r = 0; r < n; ++r)
                dp[r + 1][c] = max(dp[r][c - 1], max(dp[r + 1][c - 1], dp[r + 2][c - 1])) + M[r][c];
        
        int ret = 0;
        
        for (int r = 0; r < n + 2; ++r)
            ret = max(ret, dp[r][m - 1]);
            
        return ret;
    }
};
```
