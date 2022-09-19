# Medium

You are in a city that consists of $n$ intersections numbered from $0$ to $n - 1$ with bi-directional roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.

You are given an integer $n$ and a 2D integer array $roads$ where $roads[i] = [u_i, v_i, time_i]$ means that there is a road between intersections $u_i$ and $v_i$ that takes $time_i$ minutes to travel. You want to know in how many ways you can travel from intersection $0$ to intersection $n - 1$ in the shortest amount of time.

Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo $10^9 + 7$.

```cpp
class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<vector<int>>> adj(n);
        
        for (auto& r : roads)
        {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }
        
        vector<int> dst(n, INT_MAX);
        vector<int> way(n);
        int mod = 1e9 + 7;
        
        dst[0] = 0;
        way[0] = 1;
        
        priority_queue<
            vector<int>, 
            vector<vector<int>>, 
            greater<>
            > pq;
            
        pq.push({0, 0});
        
        
        while (pq.size())
        {
            int u = pq.top()[0];
            int w = pq.top()[1];
            pq.pop();
            
            if (dst[u] < w)
                continue;
                
            for (auto& v : adj[u])
            {
                if (dst[v[0]] > dst[u] + v[1])
                {
                    dst[v[0]] = dst[u] + v[1];
                    way[v[0]] = way[u];
                    pq.push({v[0], dst[v[0]]});
                }
                else if (dst[v[0]] == dst[u] + v[1])
                {
                    way[v[0]] = (way[v[0]] + way[u]) % mod;
                }
            }
        }
        
        return way[n - 1];
    }
};
```
