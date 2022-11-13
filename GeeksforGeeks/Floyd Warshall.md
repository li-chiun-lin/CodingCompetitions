# Medium

The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed graph. The graph is represented as an adjacency matrix of size $n \times n$. $Matrix[i] [j]$ denotes the weight of the edge from $i$ to $j$. If $Matrix[i] [j]=-1$, it means there is no edge from $i$ to $j$.

Do it in-place.

```cpp
class Solution {
public:
    void shortest_distance(vector<vector<int>>&matrix){
        int n = matrix.size();
        
        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    if (matrix[i][k] != -1 && matrix[k][j] != -1)
                        matrix[i][j] = min(
                            matrix[i][j] == -1 ? INT_MAX : matrix[i][j], 
                            matrix[i][k] + matrix[k][j]);
    }
};
```
