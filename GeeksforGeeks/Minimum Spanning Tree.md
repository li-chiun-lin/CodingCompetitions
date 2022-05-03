# Medium

Given a weighted, undirected and connected graph of **V** vertices and **E** edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

```cpp
class Solution
{
    int find(int x, vector<int> &grp)
    {
        if (x != grp[x])
            grp[x] = find(grp[x], grp);
            
        return grp[x];
    }
    
    int join(int x, int y, vector<int> &grp)
    {
        int gx = find(x, grp);
        int gy = find(y, grp);
        
        if (gx != gy)
            grp[x] = gy;
    }
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<
            vector<int>, 
            vector<vector<int>>, 
            greater<vector<int>>
        > pq;
        vector<int> grp(V);
        
        for (int i = 0; i < V; ++i)
        {
            for (auto &e : adj[i])
                pq.push({e[1], i, e[0]});
            
            grp[i] = i;
        }
        
        int sum = 0;
        
        while (pq.size() && 1 < V)
        {
            int w = pq.top()[0];
            int x = pq.top()[1];
            int y = pq.top()[2];
            pq.pop();
            int gx = find(x, grp);
            int gy = find(y, grp);
            
            if (gx == gy)
                continue;
                
            grp[gx] = gy;
            sum += w;
            V -= 1;
        }
        
        return sum;
    }
};
```
