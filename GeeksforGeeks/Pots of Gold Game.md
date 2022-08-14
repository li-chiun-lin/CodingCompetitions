# Medium

Two players $X$ and $Y$ are playing a game in which there are pots of gold arranged in a line, each containing some gold coins. They get alternating turns in which the player can pick a pot from one of the ends of the line. The winner is the player who has a higher number of coins at the end. The objective is to maximize the number of coins collected by $X$, assuming $Y$ also plays optimally.

Return the maximum coins $X$ could get while playing the game. Initially, $X$ starts the game.

```cpp
class Solution {
    int dfs(vector<int>&A, int i, int j, vector<vector<int>>& dp)
    {
        if (i == j)
            return A[i];
            
        if (i > j)
            return 0;
            
        if (dp[i][j])
            return dp[i][j];
            
        int r1 = A[i] + min(dfs(A, i + 2, j, dp), dfs(A, i + 1, j - 1, dp));
        int r2 = A[j] + min(dfs(A, i, j - 2, dp), dfs(A, i + 1, j - 1, dp));
        
        return dp[i][j] = max(r1, r2);
    }
public:
    int maxCoins(vector<int>&A, int n)
    {
        vector<vector<int>> dp(n, vector<int>(n));
        
        return dfs(A, 0, n - 1, dp);
    }
};
```
