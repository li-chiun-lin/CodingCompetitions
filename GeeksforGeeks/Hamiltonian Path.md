# Medium

A Hamiltonian path, is a path in an undirected graph that visits each vertex exactly once. Given an undirected graph, the task is to check if a Hamiltonian path is present in it or not.

```cpp
class Solution
{
    bool dfs(int u, int cnt, vector<bool>& visited, vector<vector<int>>& adj)
    {
        if (cnt == 0)
            return true;
            
        for (int v : adj[u])
        {
            if (visited[v])
                continue;
                
            visited[v] = true;
            if (dfs(v, cnt - 1, visited, adj))
                return true;
            visited[v] = false;
        }
        
        return false;
    }
    
public:
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        vector<vector<int>> adj(N + 1);
        
        for (auto& e : Edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        for (int i = 1; i <= N; ++i)
        {
            vector<bool> visited(N + 1);
            visited[i] = true;
            if (dfs(i, N - 1, visited, adj))
                return true;
        }
        
        return false;
    }
};
```
