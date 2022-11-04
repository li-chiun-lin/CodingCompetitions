# Medium

You live in Geek land. Geek land can be seen as a grid of shape $N \times M$. There are $K$ enemy at $K$ positions. Each enemy blocks the row and column to which it belongs. You have to find the largest continuous area that is not blocked. No two enemies share the same row or the same column.

```cpp
class Solution
{
public:
    int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
    {
        vector<bool> row(n), col(m);
        
        for (auto& e : enemy)
        {
            row[e[0] - 1] = true;
            col[e[1] - 1] = true;
        }
        
        int mr = 0;
        int mc = 0;
        int r = 0;
        int c = 0;
        
        for (int i = 0; i < n; ++i)
        {
            if (row[i])
                r = 0;
            else
                ++ r;
                
            mr = max(mr, r);
        }
        
        for (int j = 0; j < m; ++j)
        {
            if (col[j])
                c = 0;
            else
                ++ c;
                
            mc = max(mc, c);
        }
        
        return mr * mc;
    }
};
```
