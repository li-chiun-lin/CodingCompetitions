# Medium

The minions are very elitist in nature. If minion $x$ admires minion $y$, then $y$ thinks too highly of himself and does not admire $x$ back. Also, if $x$ admires $y$, $x$ also admires everyone that $y$ admires.

All the minions are going to be present at the Villain Con. They want to make sure that they do not dress in the same color as someone who admires them.

There are $N$ minions and $M$ relations between them. The relations are given in a 2D array $mat$. Each relation is given in $x_i$ , $y_i$ format where $y_i$ admires $x_i$. Find the minimum number of different colours that the minions will be dressing in.

```cpp
class Solution{
    // hint1: 'If minion x admires minion y, then y thinks too highly of himself and does not admire x back.'
    //          => it is a tree.
    // hint2: 'if x admires y, x also admires everyone that y admires.'
    //        'they do not dress in the same color as someone who admires them.'
    //          => the colors are different between each layer of the tree.
    // sum up: 
    //          1. build the relation tree/forest.
    //          2. find the root(s).
    //          3. compute the height.
public:
    int minColour(int N, int M, vector<int> mat[]) {
        vector<vector<int>> adj(N + 1);
        vector<int> deg(N + 1);
        
        for (int i = 0; i < M; ++i)
        {
            adj[mat[i][0]].push_back(mat[i][1]);
            ++deg[mat[i][1]];
        }
        
        queue<int> que;
        int s = 0;
        int c = 0;
        
        for (int i = 1; i <= N; ++i)
            if (deg[i] == 0)
                que.push(i);
                
        while (s = que.size())
        {
            ++ c;
            
            while (s --)
            {
                int u = que.front();
                que.pop();
                
                for (int v : adj[u])
                    if (-- deg[v] == 0)
                        que.push(v);
            }
        }
        
        return c;
    }
};
```
