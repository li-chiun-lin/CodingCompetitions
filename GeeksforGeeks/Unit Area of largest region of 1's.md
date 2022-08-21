# Medium

Given a grid of dimension $n \times m$ containing $0$'s and $1$'s. Find the unit area of the largest region of $1$'s.
Region of $1$'s is a group of $1$'s connected 8-directionally (horizontally, vertically, diagonally).

```cpp
class Solution
{
public:
    int findMaxArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int ret = 0;
        
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 0)
                    continue;
                    
                queue<pair<int, int>> que;
                int cnt = 1;
                
                que.push({i, j});
                grid[i][j] = 0;
                
                while (que.size())
                {
                    int ii = que.front().first;
                    int jj = que.front().second;
                    que.pop();
                    
                    for (int x = -1; x <= 1; ++x)
                        for (int y = -1; y <= 1; ++y)
                        {
                            int iii = ii + x;
                            int jjj = jj + y;
                            
                            if (iii < 0 || m <= iii || jjj < 0 || n <= jjj || grid[iii][jjj] == 0)
                                continue;
                                
                            grid[iii][jjj] = 0;
                            que.push({iii, jjj});
                            ++ cnt;
                        }
                }
                
                ret = max(ret, cnt);
            }
        
        return ret;
    }
};
```
