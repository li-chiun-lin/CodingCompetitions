# Hard

Find the number of occurrences of a given search word in  a 2d-Array of characters where the word can go up, down, left, right and around 90 degree bends.

```cpp
class Solution{
    int d[5] = {1, 0, -1, 0, 1};
    
    int dfs(vector<vector<char>>& mat, string& target, int r, int c, int i, vector<vector<bool>>& visited)
    {
        int m = mat.size();
        int n = mat[0].size();
        int cnt = 0;
        
        if (i == target.size() - 1)
            return 1;
            
        for (int k = 0; k < 4; ++k)
        {
            int rr = r + d[k];
            int cc = c + d[k + 1];
            
            if (0 <= rr && rr < m && 
                0 <= cc && cc < n && 
                ! visited[rr][cc] && 
                mat[rr][cc] == target[i + 1])
            {
                visited[rr][cc] = true;
                
                cnt += dfs(mat, target, rr, cc, i + 1, visited);
                    
                visited[rr][cc] = false;
            }
        }
        
        return cnt;
    }

public:
    int findOccurrence(vector<vector<char> > &mat, string target){
        int m = mat.size();
        int n = mat[0].size();
        int cnt = 0;
        
        for (int r = 0; r < m; ++r)
            for (int c = 0; c < n; ++c)
            {
                if (mat[r][c] != target[0])
                    continue;
                    
                vector<vector<bool>> visited(m, vector<bool>(n));
                visited[r][c] = true;
                
                cnt += dfs(mat, target, r, c, 0, visited);
            }
            
        return cnt;
    }
};
```
