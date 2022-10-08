# Medium

Given an integer $N$ denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either $x$, $y$ or $z$. Here $x$, $y$, and $z$ are integers.

After performing all the cut operations, your total number of cut segments must be maximum.

```cpp
class Solution
{
public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int m = max(x, max(y, z));
        vector<int> dp(n + m + 1, INT_MIN);
        dp[m] = 0;
        
        for (int i = 1; i <= n; ++i)
        {
            dp[i + m] = max(dp[i + m], dp[i - x + m] + 1);
            dp[i + m] = max(dp[i + m], dp[i - y + m] + 1);
            dp[i + m] = max(dp[i + m], dp[i - z + m] + 1);
        }
        
        return dp[n + m] < 0 ? 0 : dp[n + m];
    }
};
```
