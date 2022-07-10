# Easy

Given a $N \times M$ grid. Find All possible paths from top left to bottom right. From each cell you can either move only to right or down.

```cpp
class Solution
{
    void dfs(vector<vector<int>> &grid, int i, int j, vector<int> &path, vector<vector<int>> &ret)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if (n <= i || m <= j)
            return ;
        
        path.push_back(grid[i][j]);
        
        if (i == n - 1 && j == m - 1)
        {
            ret.push_back(path);
        }
        else
        {
            dfs(grid, i + 1, j, path, ret);
            dfs(grid, i, j + 1, path, ret);
        }
        
        path.pop_back();
    }
    
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<vector<int>> ret;
        vector<int> path;
        
        dfs(grid, 0, 0, path, ret);
        
        return ret;
    }
};
```
