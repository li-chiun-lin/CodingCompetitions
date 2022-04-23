# Medium

Given an array of non-negative integers, and a value **sum**, determine if there is a subset of the given set with sum equal to given **sum**.

```cpp
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
        
        for (int i = 0; i <= n; ++i)
            dp[i][0] = 1;
            
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= sum; ++j)
                dp[i][j] = dp[i - 1][j] || (arr[i - 1] <= j && dp[i - 1][j - arr[i - 1]]);
        
        return dp[n][sum];
    }
};
```
