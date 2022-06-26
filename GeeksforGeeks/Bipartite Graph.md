# Medium

Given an adjacency list of a graph $adj$ of $V$ vertices having 0 based index. Check whether the graph is bipartite or not.

```cpp
class Solution {
public:
    bool isBipartite(int V, vector<int>adj[]){
        queue<int> que;
        vector<int> visited(V);
        
        for (int i = 0; i < V; ++i)
        {
            if (visited[i])
                continue;
                
            que.push(i);
            visited[i] = 1;
            
            while (que.size())
            {
                int u = que.front();
                que.pop();
                
                for (int v : adj[u])
                {
                    if (visited[v])
                    {
                        if (visited[v] == visited[u])
                            return false;
                    }
                    else
                    {
                        visited[v] = visited[u] * -1;
                        que.push(v);
                    }   
                }
            }
        }
        
        return true;
    }
};
```
