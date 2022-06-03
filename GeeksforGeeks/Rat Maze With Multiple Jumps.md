# Medium

A Maze is given as $n*n$ $matrix$ of blocks where source block is the upper left most block i.e., $matrix[0][0]$ and destination block is lower rightmost block i.e., $matrix[n-1][n-1]$.

A rat starts from source and has to reach the destination. The rat can move in only two directions: first forward if possible or down. If multiple solutions exist, the shortest earliest hop will be accepted. For the same hop distance at any point, forward will be preferred over downward.

In the maze $matrix$, $0$ means the block is the dead end and non-zero number means the block can be used in the path from source to destination. The non-zero value of $matrix[i][j]$ indicates number of maximum jumps rat can make from cell $matrix[i][j]$. In this variation, Rat is allowed to jump multiple steps at a time instead of $1$. Find a matrix which describes the position the rat to reach at the destination.

```cpp
class Solution {
    bool dfs(vector<vector<int>>&matrix, int i, int j, vector<vector<int>> &ret)
    {
        int n = matrix.size();
        
        if (i >= n || j >= n)
            return false;
            
        ret[i][j] = 1;
        
        if (i == n - 1 && j == n - 1)
            return true;
        
        for (int k = 1; k <= matrix[i][j]; ++k)
            if (dfs(matrix, i, j + k, ret) || dfs(matrix, i + k, j, ret))
                return true;
        
        ret[i][j] = 0;
        
        return false;
    }
    
public:
    vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
        int n = matrix.size();
        vector<vector<int>> ret(n, vector<int>(n));

        if (dfs(matrix, 0, 0, ret))
            return ret;
            
        return {{-1}};
    }
};
```
