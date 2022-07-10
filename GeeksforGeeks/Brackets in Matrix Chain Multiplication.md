# Hard

Given an array $p$ of length $n$ used to denote the dimensions of a series of matrices such that dimension of $i$-th matrix is $p[i] * p[i+1]$. There are a total of $n-1$ matrices. Find the most efficient way to multiply these matrices together.

The problem is not actually to perform the multiplications, but merely to decide in which order to perform the multiplications such that you need to perform minimum number of multiplications. There are many options to multiply a chain of matrices because matrix multiplication is associative i.e. no matter how one parenthesize the product, the result will be the same.

```cpp
class Solution{
    pair<int, string> dfs(int p[], int i, int j, vector<vector<pair<int, string>>> &dp)
    {
        if (i == j)
            return {0, string(1, 'A' + i - 1)};
            
        if (dp[i][j].second.size())
            return dp[i][j];
            
        int m = INT_MAX;
        string ret = "";
        
        for (int k = i; k < j; ++k)
        {
            auto l = dfs(p, i, k, dp);
            auto r = dfs(p, k + 1, j, dp);
            int s = p[i - 1] * p[k] * p[j]
                + l.first + r.first;
                
            if (m > s)
            {
                m = s;
                ret = "(" + l.second + r.second + ")";
            }
        }
        
        return dp[i][j] = {m, ret};
    }
public:
    string matrixChainOrder(int p[], int n){
        vector<vector<pair<int, string>>> dp(n, vector<pair<int, string>>(n));
        
        return dfs(p, 1, n - 1, dp).second;
    }
};
```
