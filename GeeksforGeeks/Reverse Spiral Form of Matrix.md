# Medium

Given a matrix as 2D array. Find the reverse spiral traversal of the matrix.

```cpp
class Solution {
public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        int di[] = {0, 1, 0, -1};
        int dj[] = {1, 0, -1, 0};
        vector<int> ret;
        int RC = R * C;
        int i = 0;
        int j = 0;
        int k = 0;
        int ii = 0;
        int jj = 0;
        
        while (ret.size() < RC - 1)
        {
            ii = i + di[k];
            jj = j + dj[k];
            
            if (0 <= ii && ii < R && 0 <= jj && jj < C && a[ii][jj] != -1)
            {
                ret.push_back(a[i][j]);
                a[i][j] = -1;
                i = ii;
                j = jj;
            }
            else
            {
                k = (k + 1) % 4;
            }
        }
        
        ret.push_back(a[i][j]);
        
        reverse(begin(ret), end(ret));
        
        return ret;
    }
};
```
