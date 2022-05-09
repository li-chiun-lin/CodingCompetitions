# Medium

Given an **NxN** chessboard and a Knight at position **(x, y)**. The Knight has to take exactly **K** steps, where at each step it chooses any of the **8** directions uniformly at random.

Find the probability that the Knight remains in the chessboard after taking **K** steps, with the condition that it cant enter the board again once it leaves it.

```cpp
class Solution{
    int dx[8] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[8] = {2, -2, 2, -2, 1, -1, 1, -1};
    
    double dfs(int N, int i, int j, int k, vector<vector<vector<double>>> &dp)
    {
        if (k == 0)
            return 1;
            
        if (dp[i][j][k])
            return dp[i][j][k];
           
        double cnt = 0;
        
        for (int d = 0; d < 8; ++d)
        {
            int ii = i + dx[d];
            int jj = j + dy[d];
            
            if (0 <= ii && ii < N && 0 <= jj && jj < N)
                cnt += dfs(N, ii, jj, k - 1, dp);
        }
        
        return dp[i][j][k] = cnt;
    }
    
public:
    double findProb(int N,int start_x, int start_y, int steps)
    {
        vector<vector<vector<double>>> dp(N, vector<vector<double>>(N, vector<double>(steps + 1)));
        
        double cnt = dfs(N, start_x, start_y, steps, dp);
        
        return cnt / pow(8, steps);
    }
};
```

```cpp
class Solution{
    int dx[8] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[8] = {2, -2, 2, -2, 1, -1, 1, -1};
    
public:
    double findProb(int N,int start_x, int start_y, int steps)
    {
        vector<vector<vector<double>>> dp(2, vector<vector<double>>(N, vector<double>(N)));
        
        int prv = 0;
        int cur = 1 - prv;
        
        dp[prv][start_x][start_y] = 1;
        
        while (steps --)
        {
            for (int i = 0; i < N; ++i)
            {
                for (int j = 0; j < N; ++j)
                {
                    //if (dp[prv][i][j] == 0)
                    //    continue;
                        
                    for (int d = 0; d < 8; ++d)
                    {
                        int ii = i + dx[d];
                        int jj = j + dy[d];
                        
                        if (0 <= ii && ii < N && 0 <= jj && jj < N)
                            dp[cur][ii][jj] += dp[prv][i][j] / 8;
                    }
                    
                    dp[prv][i][j] = 0;
                }
            }
            
            prv = cur;
            cur = 1 - prv;
        }
        
        double ret = 0;
        
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                ret += dp[prv][i][j];
                
        return ret;
    }
};
```
