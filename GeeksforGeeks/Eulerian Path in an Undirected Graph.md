# Easy

Given an adjacency matrix representation of an unweighted undirected graph named **graph**, which has **N** vertices. You have to find out if there is an eulerian path present in the graph or not.

```cpp
class Solution{
public:
    int eulerPath(int N, vector<vector<int>> graph){
        int odd = 0;
        
        for (int i = 0; i < N; ++i)
        {
            int c = 0;
            for (int j = 0; j < N; ++j)
                c += graph[i][j];
                
            odd += c & 1;
        }
        
        return odd == 0 || odd == 2;
    }
};
```
