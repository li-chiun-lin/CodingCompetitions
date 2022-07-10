# Easy

Given a directed acyclic graph(DAG) with $n$ nodes labeled from $0$ to $n-1$. Given $edges$, $s$ and $d$, count the number of ways to reach from $s$ to $d$. There is a directed edge from vertex $edges[i][0]$ to the vertex $edges[i][1]$.

```cpp
class Solution {
public:
    int possible_paths(vector<vector<int>>edges, int n, int s, int d){
        vector<vector<int>> adj(n);
        
        for (auto &e : edges)
            adj[e[0]].push_back(e[1]);
            
        queue<int> que;
        int len = 0;
        int c = 0;
        
        que.push(s);
        
        while (len = que.size())
        {
            while (len --)
            {
                int u = que.front();
                que.pop();
                
                if (u == d)
                    ++ c;
                else
                {
                    for (int v : adj[u])
                        que.push(v);
                }
            }
        }
        
        return c;
    }
};
```
