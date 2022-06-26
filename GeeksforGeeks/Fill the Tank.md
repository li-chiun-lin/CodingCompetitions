# Medium

In a city water tanks are connected by pipeline(as a tree). Since people working at the city corporation are lazy they usually select one of the tank and pour complete amount of water into it, when the tank is filled, the excess water evenly flows to the connected tanks. The head of city corporation has instructed to pour minimum amount of water into the selected tank so that all other tank is filled. As the labours of the corporation are not intelligent enough to figure out the minimum amount of water required to fill all the tanks they have asked your help. Also,  maximum amount of water available with city corporation is $10^{18}$.

```cpp
class Solution {
    long long limit = 1e18;
    
public:
    long long dfs(int u, int *cap, vector<vector<int>> &adj, vector<bool> &visited)
    {
        long long m = -1;
        int cnt = 0;
        
        for (int v : adj[u])
        {
            if (visited[v])
                continue;
                
            visited[v] = true;
            ++ cnt;
            
            long long r = dfs(v, cap, adj, visited);
            
            if (r == -1 || r * cnt > limit)
                return -1;
                
            m = max(m, r);
        }
        
        return cap[u - 1] + m * cnt;
    }
    
    long long minimum_amount(vector<vector<int>> &Edges, int num, int start, int *cap){
       vector<vector<int>> adj(num + 1);
       vector<bool> visited(num + 1);
       
       for (int i = 0; i < Edges.size() - 1; ++i)
       {
           adj[Edges[i][0]].push_back(Edges[i][1]);
           adj[Edges[i][1]].push_back(Edges[i][0]);
       }
       
       visited[start] = true;
       
       return dfs(start, cap, adj, visited);
    }
};
```
