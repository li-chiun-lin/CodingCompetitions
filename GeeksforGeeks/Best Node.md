# Medium

You are given a tree rooted at node $1$. The tree is given in form of an array $P$ where $P_i$ denotes the parent of node $i$, Also $P_1 = -1$, as $1$ is the root node. Every node $i$ has a value $A_i$ associated with it. At first, you have to choose any node to start with, after that from a node you can go to any of its child nodes.

You've to keep moving to a child node until you reach a leaf node. Every time you get to a new node, you write its value.

Let us assume that the integer sequence in your path is $B$.
Let us define a function $f$ over $B$, which is defined as follows:
$f(B) = B_1 - B_2 + B_3 - B_4 + B_5 .... + (-1)^{(k-1)}B_k$.

You have to find the maximum possible value of $f(B)$.

```cpp
class Solution {
    long long dfs(int u, int sign, vector<int> &A, vector<vector<int>>& child, vector<vector<long long>>& dp)
    {
        if (dp[u][sign] != INT_MIN)
            return dp[u][sign];
            
        long long ret = INT_MIN;
        
        for (int v : child[u])
            ret = max(ret, dfs(v, 1 - sign, A, child, dp));
        
        if (ret == INT_MIN)
            ret = 0;
        
        if (sign)
            return dp[u][sign] = ret + A[u];
        else
            return dp[u][sign] = ret - A[u];
    }
    
 public:
    long long bestNode(int N, vector<int> &A, vector<int> &P) {
        vector<vector<int>> child(N + 1);
        vector<vector<long long>> dp(N + 1, vector<long long>(2, INT_MIN));
        
        for (int i = 0; i < N; ++i)
            if (P[i] != -1)
                child[P[i] - 1].push_back(i);
             
        long long ret = INT_MIN;
        
        for (int i = 0; i < N; ++i)
            ret = max(ret, dfs(i, true, A, child, dp));
            
        return ret;
    }
};
```
