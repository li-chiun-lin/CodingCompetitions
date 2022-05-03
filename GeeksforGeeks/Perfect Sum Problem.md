# Medium

Given an array **arr[]** of integers and an integer **sum**, the task is to count all subsets of the given array with a sum equal to a given **sum**.

Note: Answer can be very large, so, output answer modulo **$10^9+7$**

```cpp
class Solution{
    int m = 1e9 + 7;
public:
    int dfs(int arr[], int n, int sum, vector<vector<int>> &dp)
    {
        if (n <= 0)
            return sum == 0;

        if (sum < 0)
            return 0;
            
        if (dp[n][sum] != -1)
            return dp[n][sum];
            
        return dp[n][sum] = (dfs(arr, n - 1, sum, dp) + dfs(arr, n - 1, sum - arr[n - 1], dp)) % m;
    }
    
    int perfectSum(int arr[], int n, int sum)
    {
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
        
        return dfs(arr, n, sum, dp);
    }
};
```
