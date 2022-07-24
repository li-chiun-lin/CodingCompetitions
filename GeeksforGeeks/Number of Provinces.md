# Medium

Given a graph with $V$ vertices. We say two vertices $u$ and $v$ belong to a single province if there is a path from $u$ to $v$ or $v$ to $u$. Your task is to find the number of provinces.

```cpp
class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<bool> visited(V);
        int cnt = 0;
        
        for (int i = 0; i < V; ++i)
        {
            if (visited[i])
                continue;
                
            ++ cnt;
            queue<int> que;
            que.push(i);
            
            while (que.size())
            {
                int u = que.front();
                que.pop();
                
                for (int v = 0; v < V; ++v)
                {
                    if (adj[u][v] && ! visited[v])
                    {
                        visited[v] = true;
                        que.push(v);
                    }
                }
            }
        }
        
        return cnt;
    }
};
```
