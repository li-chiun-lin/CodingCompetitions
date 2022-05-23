# Medium

There are a total of $n$ tasks you have to pick, labeled from $0$ to $n-1$. Some tasks may have prerequisites tasks.

Given the total number of $n$ tasks and a list of $prerequisite$ pairs of size $m$. Find a ordering of tasks you should pick to finish all tasks.

```cpp
class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<int> ret;
        vector<vector<int>> adj(n);
        vector<int> deg(n);
        queue<int> que;
        
        for (auto &p : prerequisites)
        {
            adj[p[1]].push_back(p[0]);
            ++ deg[p[0]];
        }
        
        for (int i = 0; i < n; ++i)
            if (deg[i] == 0)
                que.push(i);
                
        while (que.size())
        {
            int u = que.front();
            que.pop();
            
            ret.push_back(u);
            
            for (int v : adj[u])
                if (--deg[v] == 0)
                    que.push(v);
        }
        
        return ret.size() == n ? ret : vector<int>();
    }
};
```
