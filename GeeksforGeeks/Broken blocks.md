# Medium

In the game of Broken Blocks, the player is allowed to move on **m x n** blocks i.e. **m** levels and **n** stone blocks on each level such that one level is vertically above the previous level (as in a staircase), with some of its stone blocks replaced by wooden blocks.

The player at the start of the game is present on the ground level. The player can start from any of the blocks present on the level **0** and start moving further to next levels. The player can only move to the stone-block just above to the present stone-block or diagonally to the left or to the right. The player cant move on the same level.

If the player steps on any of the wooden block (denoted by **-1**), he will fall off the board and die as the wood-block will not able to hold players weight. Each of the stone-block has some gold coins present on it (wooden blocks doesn't have any coins on them). If at any point the player cant move to further level due to any reason, the game ends and his present total coin score will be considered.

The players aim is to collect as many gold coins as he can without falling off the board.

```cpp
class Solution {
public:
    int MaxGold(vector<vector<int>> &matrix){
        int m = matrix.size();
        int n = matrix[0].size();
        // consider that the coin might be 0, we set -1 as default.
        vector<vector<int>> dp(m + 1, vector<int>(n + 2, -1));
        int r = 0;
        
        // the ground level initial to 0
        // notice that dp[0][0] and dp[0][n] remains default -1
        for (int j = 0; j < n; ++j)
            dp[0][j + 1] = 0;
        
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
            {
                // if there is a wood block, do nothing
                // the related dp will remain as default -1
                if (matrix[i][j] == -1)
                    continue;
                    
                // check the three possible block in the previous level
                dp[i + 1][j + 1] = max(dp[i][j], max(dp[i][j + 1], dp[i][j + 2]));
                
                // if there are all -1, means this is an invalid path, purge it.
                // otherwise, add the coin in current block and update the global max value.
                if (dp[i + 1][j + 1] != -1)
                {
                    dp[i + 1][j + 1] += matrix[i][j];
                    r = max(r, dp[i + 1][j + 1]);
                }
            }
        
        return r;
    }
};
```
