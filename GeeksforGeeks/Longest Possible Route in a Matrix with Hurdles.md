# Medium

Given an $N \times M$ matrix, with a few hurdles(denoted by 0) arbitrarily placed, calculate the length of the longest possible route possible from source $(xs,ys)$ to a destination $(xd,yd)$ within the matrix. We are allowed to move to only adjacent cells which are not hurdles. The route cannot contain any diagonal moves and a location once visited in a particular path cannot be visited again. If it is impossible to reach the destination from the source return $-1$.

```cpp
class Solution {
    int d[5] = {1, 0, -1, 0, 1};
    
    void dfs(vector<vector<int>> &matrix, int i, int j, int xd, int yd, int acc, vector<vector<bool>> &visited, int &ret)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        
        if (i == xd && j == yd)
        {
            ret = max(ret, acc);
            return ;
        }
        
        for (int k = 0; k < 4; ++k)
        {
            int ii = i + d[k];
            int jj = j + d[k + 1];
            
            if (0 <= ii && ii < m && 0 <= jj && jj < n && ! visited[ii][jj] && matrix[ii][jj])
            {
                visited[ii][jj] = true;
                dfs(matrix, ii, jj, xd, yd, acc + 1, visited, ret);
                visited[ii][jj] = false;
            }
        }
    }
    
public:
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n));
        visited[xs][ys] = true;
        
        if (matrix[xs][ys] == 0 || matrix[xd][yd] == 0)
            return -1;
            
        int ret = -1;
        
        dfs(matrix, xs, ys, xd, yd, 0, visited, ret);
        
        return ret;
    }
};
```
