# Medium

Given a grid of size **n*n** filled with **0, 1, 2, 3**. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left.
The description of cells is as follows:

- A value of cell **1** means Source.
- A value of cell **2** means Destination.
- A value of cell **3** means Blank cell.
- A value of cell **0** means Wall.

```cpp
class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int d[] = {0, 1, 0, -1, 0};
        queue<pair<int, int>> que;
        
        for (int i = 0; i < n && que.empty(); ++i)
            for (int j = 0; j < n && que.empty(); ++j)
                if (grid[i][j] == 1)
                    que.push({i, j});
            
        while (que.size())
        {
            int i = que.front().first;
            int j = que.front().second;
            que.pop();
            
            for (int k = 0; k < 4; ++k)
            {
                int ii = i + d[k];
                int jj = j + d[k + 1];
                
                if (0 <= ii && ii < n && 0 <= jj && jj < n)
                {
                    if (grid[ii][jj] == 2)
                        return true;
                    else if (grid[ii][jj] == 3)
                    {
                        grid[ii][jj] = 0;
                        que.push({ii, jj});
                    }
                }
            }
        }
            
        return false;
    }
};
```
