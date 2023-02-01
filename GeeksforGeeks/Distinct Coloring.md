# Medium

There is a row of $N$ houses, each house can be painted with one of the three colors: red, blue or green. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color. Find the minimum cost to paint all houses.

The cost of painting each house in red, blue or green colour is given in the array $r[]$, $g[]$ and $b[]$ respectively.

```cpp
class Solution{   
    long long int dfs(int N, vector<vector<int>>& rgb, int pre, vector<vector<long long int>>& dp)
    {
        if (N < 0)
            return 0;
            
        if (pre != -1 && dp[N][pre] != -1)
            return dp[N][pre];
            
        long long int ret = LLONG_MAX;
        
        for (int c = 0; c < 3; ++c)
        {
            if (c == pre)
                continue;
                
            long long int sum = dfs(N - 1, rgb, c, dp) + rgb[N][c];
            ret = min(ret, sum);
        }
        
        if (pre != -1)
            dp[N][pre] = ret;
        
        return ret;
    }

public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        vector<vector<int>> rgb(N);
        vector<vector<long long int>> dp(N, vector<long long int>(3, -1));
        
        for (int i = 0; i < N; ++i)
            rgb[i] = {r[i], g[i], b[i]};
            
        return dfs(N - 1, rgb, -1, dp);
    }
};
```

```cpp
class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        vector<vector<long long int>> dp(N + 1, vector<long long int>(3));
        vector<int*> rgb = {r, g, b};
            
        for (int i = 0; i < N; ++i)
            for (int c = 0; c < 3; ++c)
                dp[i + 1][c] = min(dp[i][(c + 1) % 3], dp[i][(c + 2) % 3]) + rgb[c][i];
        
        return min(dp[N][0], min(dp[N][1], dp[N][2]));
    }
};
```
