# Medium

A number is called a stepping number if all adjacent digits have an absolute difference of $1$. Given two integers $n$ and $m$, find the count of all the stepping numbers in the range $[n, m]$.

```cpp
class Solution{
    void dfs(int lb, int ub, int val, int d, int& ret)
    {
        if (ub < val)
            return;
            
        val = val * 10 + d;
        
        if (lb <= val && val <= ub)
            ++ ret;
        
        if (d >= 1)
            dfs(lb, ub, val, d - 1, ret);
        
        if (d <= 8)
            dfs(lb, ub, val, d + 1, ret);
    }
    
public:
    int steppingNumbers(int n, int m)
    {
        int ret = n ? 0 : 1;
        
        for (int i = 1; i <= 9; ++i)
            dfs(n, m, 0, i, ret);
        
        return ret;
    }
};
```
