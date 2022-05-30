# Hard

Given a $n*m$ matrix, find the maximum length path (starting from any cell) such that all cells along the path are in strictly increasing order.

We can move in 4 directions from a given cell ($i, j$), i.e., we can move to ($i+1, j$) or ($i, j+1$) or ($i-1, j$) or ($i, j-1$).

```cpp
class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int d[] = {1, 0, -1, 0, 1};
        vector<vector<int>> dp(m, vector<int>(n));
        queue<pair<int, int>> que;
        int ma = 0;

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
            {
                if (dp[i][j])
                    continue;
                
                que.push({i, j});
                dp[i][j] = 1;
                
                while (que.size())
                {
                    int i = que.front().first;
                    int j = que.front().second;
                    que.pop();
                    
                    for (int k = 0; k < 4; ++k)
                    {
                        int ii = i + d[k];
                        int jj = j + d[k + 1];
                        
                        if (0 <= ii && ii < m && 0 <= jj && jj < n && matrix[i][j] < matrix[ii][jj])
                        {
                            if (dp[ii][jj] < dp[i][j] + 1)
                            {
                                dp[ii][jj] = dp[i][j] + 1;
                                que.push({ii, jj});
                                
                                ma = max(ma, dp[ii][jj]);
                            }
                        }
                    }
                }
            }

        return ma;
    }
};
```
