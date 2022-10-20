# Hard

Given three integers $x$, $y$, and $z$, the task is to find the sum of all the numbers formed by having $4$ at most $x$ times, having $5$ at most $y$ times, and having $6$ at most $z$ times as a digit.

Note: Output the sum modulo $10^9+7$.

```cpp
class Solution {
public:
    int getSum(int X, int Y, int Z) {
        vector<vector<vector<long long>>> cnt(X + 2, 
            vector<vector<long long>>(Y + 2, 
                vector<long long>(Z + 2)));
        vector<vector<vector<long long>>> sum(X + 2, 
            vector<vector<long long>>(Y + 2, 
                vector<long long>(Z + 2)));
        long long ret = 0;
        int mod = 1e9 + 7;
        
        cnt[1][1][1] = 1;
        
        for (int i = 0, i1 = 1; i <= X; ++i, ++i1)
            for (int j = 0, j1 = 1; j <= Y; ++j, ++j1)
                for (int k = 0, k1 = 1; k <= Z; ++k, ++k1)
                {
                    sum[i1][j1][k1] += (sum[i][j1][k1] * 10 + 4 * cnt[i][j1][k1]) % mod;
                    sum[i1][j1][k1] += (sum[i1][j][k1] * 10 + 5 * cnt[i1][j][k1]) % mod;
                    sum[i1][j1][k1] += (sum[i1][j1][k] * 10 + 6 * cnt[i1][j1][k]) % mod;
                    
                    cnt[i1][j1][k1] += cnt[i][j1][k1] % mod;
                    cnt[i1][j1][k1] += cnt[i1][j][k1] % mod;
                    cnt[i1][j1][k1] += cnt[i1][j1][k] % mod;
                    
                    ret = (ret + sum[i1][j1][k1]) % mod;
                }
                
        return ret;
    }
};
```
