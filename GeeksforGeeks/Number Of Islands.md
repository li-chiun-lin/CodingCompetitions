# Medium

You are given $n$ and $m$ which means the row and column of the 2D matrix and an array of size $k$ denoting the number of operations. Matrix elements is $0$ if there is water or $1$ if there is land.

Originally, the 2D matrix is all $0$ which means there is no land in the matrix. The array has $k$ operator and each operator has two integer $A[i] [0]$, $A[i] [1]$ means that you can change the cell $matrix[A[i] [0]] [A[i] [1]]$ from sea to island.

Return how many island are there in the matrix after each operator. You need to return an array of size $k$.

```cpp
class Solution {
    int find(int x, vector<int>& grp)
    {
        if (x == grp[x])
            return x;
            
        return grp[x] = find(grp[x], grp);
    }
    
    bool join(int x, int y, vector<int>& grp)
    {
        x = find(x, grp);
        y = find(y, grp);
        
        // already in the same group
        if (x == y)
            return false;

        grp[y] = x;
        
        return true;
    }
    
public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        vector<int> grp(n * m, -1);
        int d[] = {0, -1, 0, 1, 0};
        vector<int> ret;
        // the group counter
        int cnt = 0;
        
        // for each operator
        for (auto& op : operators)
        {
            // the corresponding index in 1D.
            int x = op[0] * m + op[1];
            
            // if the current index `x' haven't been assigned to any group yet.
            if (grp[x] == -1)
            {
                // assign a new group to `x' and increase the group counter.
                grp[x] = x;
                ++ cnt;
                
                // check the neighbors in 4 directions
                for (int i = 0; i < 4; ++i)
                {
                    int ii = op[0] + d[i];
                    int jj = op[1] + d[i + 1];
                    
                    // if not out-of-board
                    if (0 <= ii && ii < n && 0 <= jj && jj < m)
                    {
                        // the corresponding index in 1D
                        int y = ii * m + jj;
                        
                        // check if `y' has benn assigned to any group,
                        if (grp[y] != -1)
                            // join the groups.
                            // if they are in the same group, decrease the group counter.
                            if (join(x, y, grp))
                                -- cnt;
                    }
                }
            }
            
            ret.push_back(cnt);
        }
        
        return ret;
    }
};
```
