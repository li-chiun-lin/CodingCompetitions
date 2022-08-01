# Medium

You are given $N$ identical eggs and you have access to a $K$-floored building from $1$ to $K$.

There exists a floor $f$ where $0 \leq f \leq K$ such that any egg dropped at a floor higher than $f$ will break, and any egg dropped at or below floor $f$ will not break. There are few rules given below.

- An egg that survives a fall can be used again.
- A broken egg must be discarded.
- The effect of a fall is the same for all eggs.
- If the egg doesn't break at a certain floor, it will not break at any floor below.
- If the eggs breaks at a certain floor, it will break at any floor above.

Return the minimum number of moves that you need to determine with certainty what the value of $f$ is.

```cpp
class Solution
{
public:
    int bfs(int n, int k, vector<vector<int>> &dp)
    {
        // there is no egg left, infinity, impossible
        if (n == 0)
            return INT_MAX;
        
        if (n == 1)
            return k;
            
        // floor 0, no more drop
        if (k == 0)
            return 0;
            
        // floor 1, one more drop to check if f == 0 or f == 1
        if (k == 1)
            return 1;
            
        // already checked
        if (dp[n][k] != -1)
            return dp[n][k];
            
        int r = INT_MAX;
        
        // for all the floors below, 
        for (int f = 1; f <= k; ++f)
        {
            // how many steps if we assume the egg will break at floor f, 
            // and we use n - 1 eggs to check floor f - 1?
            int a = bfs(n - 1, f - 1, dp);
            // how many steps if we assume the egg will not break at floor f, 
            // and we use n eggs to check the floor below (i.e. k - f).
            int b = bfs(n    , k - f, dp);
            
            // the max(a, b) is how many steps we need to solve the puzzle with n eggs and k floors.
            r = min(r, max(a, b));
        }
        
        // whatever the result, we use one move to check.
        return dp[n][k] = r + 1;
    }
    
    int eggDrop(int n, int k) 
    {
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        
        return bfs(n, k, dp);
    }
};
```
