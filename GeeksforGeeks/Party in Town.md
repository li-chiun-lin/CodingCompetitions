# Medium

Geek town has **N** Houses numbered from **1** to **N**. They are connected with each other via **N-1** bidirectional roads and an adjacency list is used to represent the connections. To host the optimal party, you need to identify the house from which the distance to the farthest house is minimum. Find this distance.

```cpp
class Solution{
public:
    int partyHouse(int N, vector<vector<int>> &adj){
        int ret = INT_MAX;
        
        for (int i = 1; i <= N; ++i)
        {
            vector<int> dst(N + 1, INT_MAX);
            queue<int> que;
            int s = 0;
            int c = -1;
            
            que.push(i);
            dst[i] = 0;
            
            while (s = que.size())
            {
                while (s --)
                {
                    int u = que.front();
                    que.pop();
                    
                    for (int v : adj[u])
                    {
                        if (dst[v] > dst[u] + 1)
                        {
                            dst[v] = dst[u] + 1;
                            que.push(v);
                        }
                    }
                }
                
                ++ c;
            }
            
            ret = min(ret, c);
        }
        
        return ret;
    }
};
```
