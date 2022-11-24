# Medium

Given a positive integer n, generate all possible unique ways to represent $n$ as sum of positive integers.

Note: The generated output is printed without partitions. Each partition must be in decreasing order. Printing of all the partitions is done in reverse sorted order.

```cpp
class Solution{
    void dfs(int n, int c, int p, vector<int>&buf , vector<vector<int>>& ret)
    {
        if (c > n)
            return ;
            
        if (n == 0)
        {
            ret.push_back(buf);
            return ;
        }
        
        dfs(n, c + 1, p, buf, ret);
        
        if (c != 0 && c <= p)
        {
            buf.push_back(c);
            dfs(n - c, 0, c, buf, ret);
            buf.pop_back();
        }
    }
public:
    vector<vector<int>> UniquePartitions(int n) {
        vector<vector<int>> ret;
        vector<int> buf;
        
        dfs(n, 0, n + 1, buf, ret);
        
        return ret;
    }
};
```
