# Medium

Given  a grid of $n \times m$ consisting of $O$'s and $X$'s. The task is to find the number of $X$ total shapes.

```cpp
class Solution
{
public:
    int xShape(vector<vector<char>>& grid) 
    {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        int d[] = {0, 1, 0, -1, 0};
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (grid[i][j] == 'X')
                {
                    ++ cnt;
                    grid[i][j] = ' ';
                    
                    queue<pair<int, int>> que;
                    que.push({i, j});
                    
                    while (que.size())
                    {
                        int s = que.front().first;
                        int t = que.front().second;
                        que.pop();
                        
                        for (int k = 0; k < 4; ++k)
                        {
                            int ss = s + d[k];
                            int tt = t + d[k + 1];
                            
                            if (0 <= ss && ss < n && 0 <= tt && tt < m && grid[ss][tt] == 'X')
                            {
                                grid[ss][tt] = ' ';
                                que.push({ss, tt});
                            }
                        }
                    }
                }
        
        return cnt;
    }
};
```
