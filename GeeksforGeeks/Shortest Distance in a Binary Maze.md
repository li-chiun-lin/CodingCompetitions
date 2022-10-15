# Medium

Given a $n \times m$ matrix $grid$ where each element can either be $0$ or $1$. You need to find the shortest distance between a given $source$ cell to a $destination$ cell. The path can only be created out of a cell if its value is $1$.

If the path is not possible between $source$ cell and $destination$ cell, then return $-1$.

Note : You can move into an adjacent cell if that adjacent cell is filled with element $1$. Two cells are adjacent if they share a side. In other words, you can move in one of the four directions.

```cpp
class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        
        int d[] = {1, 0, -1, 0, 1};
        int n = grid.size();
        int m = grid[0].size();
        int size = 0;
        int step = 0;
        queue<pair<int, int>> que;
        que.push(source);
        grid[source.first][source.second] = 0;
        
        while (size = que.size())
        {
            while (size --)
            {
                auto u = que.front();
                que.pop();
                
                if (u == destination)
                    return step;
                    
                for (int k = 0; k < 4; ++k)
                {
                    int i = u.first + d[k];
                    int j = u.second + d[k + 1];
                    
                    if (0 <= i && i < n && 0 <= j && j < m && grid[i][j] == 1)
                    {
                        grid[i][j] = 0;
                        que.push({i, j});
                    }
                }
            }
            ++ step;
        }
        
        return -1;
    }
};
```
