# Easy

Given a matrix of size $n \times m$. Every cell of matrix contains either **'A'** or **'B'**. Exchange is defined as swaping the characters between two cells. Your task is to find the minimum number of exchange needed to rearrange the given matrix such that no adjacent cell contains the same characters.

Two cells are adjacent if they share one of their common sides (left,right,front or back if exists).

```cpp
class Solution {
public:
    int MinimumExchange(vector<vector<char>>matrix){
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> cnt(2);
        
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                ++ cnt[matrix[i][j] - 'A'];
             
        int ret = INT_MAX;
        
        // start with 'A'
        if (cnt[0] >= cnt[1])
        {
            int c = 0;
            
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < n; ++j)
                    if (matrix[i][j] != 'A' + ((i + j) % 2))
                        ++ c;
                        
            ret = min(ret, c);
        }
        
        // start with 'B'
        if (cnt[0] <= cnt[1])
        {
            int c = 0;
            
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < n; ++j)
                    if (matrix[i][j] != 'B' - ((i + j) % 2))
                        ++ c;
                        
            ret = min(ret, c);
        }
                  
        return ret / 2;  
    } 
};
```
