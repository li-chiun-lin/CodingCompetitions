# Medium

Given a weighted, directed and connected graph of $V$ vertices and $E$ edges, Find the shortest distance of all the vertex's from the source vertex $S$.

Note: The Graph doesn't contain any negative weight cycle.

```cpp
class Solution{
public:
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        vector<int> dst(V, 1e8);
        
        dst[S] = 0;
        
        for (int i = 0; i < V - 1; ++i)
            for (auto& e : adj)
                dst[e[1]] = min(dst[e[1]], dst[e[0]] + e[2]);
                    
        return dst;
    }
};
```
