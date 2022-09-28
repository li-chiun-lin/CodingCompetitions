# Hard

You are given a matrix of dimension $n \times n$. All the cells are initially zero. You are given $Q$ queries, which contains $4 integers $a$ $b$ $c$ $d$ where $(a,b)$ is the TOP LEFT cell and $(c,d)$ is the Bottom Right cell of a submatrix. Now, all the cells of this submatrix have to be incremented by one. After all the $Q$ queries have been performed. Your task is to find the final resulting matrix.

```cpp
class Solution {
  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        vector<vector<int>> ret(n, vector<int>(n));
        
        for (auto& q : Queries)
            for (int r = q[0]; r <= q[2]; ++r)
            {
                ++ ret[r][q[1]];
                
                if (q[3] + 1 < n)
                    -- ret[r][q[3] + 1];
            }
        
        for (int i = 0; i < n; ++i)
            for (int j = 1; j < n; ++j)
                ret[i][j] += ret[i][j - 1] ;
        
        return ret;
    }
};
```
