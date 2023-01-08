# Easy

Given a set of $N$ items, each with a weight and a value, represented by the array $wt$ and $val$ respectively. Also, a knapsack with weight limit $W$.

The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.

Note: Each item can be taken any number of times.

```cpp
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N + 1, vector<int>(W + 1));
        
        for (int i = 1; i <= N; ++i)
            for (int w = 1; w <= W; ++w)
            {
                dp[i][w] = dp[i - 1][w];
                
                if (wt[i - 1] <= w)
                {
                    dp[i][w] = max(
                        dp[i][w],
                        dp[i][w - wt[i - 1]] + val[i - 1]);
                }
            }
            
        return dp[N][W];
    }
};
```
