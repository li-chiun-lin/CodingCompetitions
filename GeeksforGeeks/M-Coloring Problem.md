# Medium

Given an undirected graph and an integer $M$. The task is to determine if the graph can be colored with at most $M$ colors such that no two adjacent vertices of the graph are colored with the same color.

Here coloring of a graph means the assignment of colors to all vertices. Print $1$ if it is possible to colour vertices and $0$ otherwise.

```cpp
class Solution{
    bool dfs(bool graph[101][101], int m, int n, int u, vector<int>& color)
    {
        // end case
        if (u == n)
            return true;
            
        // for each possible color
        for (int c = 0; c < m; ++c)
        {
            color[u] = c;
                
            // check if any adjacent nodes has same color,
            bool valid = true;
            
            for (int v = 0; v < n && valid; ++v)
                if (graph[u][v] && color[u] == color[v])
                    valid = false;
            
            // we set the color of this node and go to next node.
            if (valid)
            {
                if (dfs(graph, m, n, u + 1, color))
                    return true;
            }
        }
        
        // backtracking
        color[u] = -1;
        
        return false;
    }
    
public:
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> color(n, -1);
        
        return dfs(graph, m, n, 0, color);
    }
};
```
