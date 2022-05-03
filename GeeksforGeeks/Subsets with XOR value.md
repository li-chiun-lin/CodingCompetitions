# Medium

Given an array **arr** of **N** integers and an integer **K**, find the number of subsets of **arr** having XOR of elements as **K**.


```cpp
class Solution{
    int dfs(vector<int> &arr, int i, int K)
    {
        return i < 0 
            ? K == 0 
            : dfs(arr, i - 1, K) + dfs(arr, i - 1, K ^ arr[i]);
    }
public:
    int subsetXOR(vector<int> arr, int N, int K) {
        return dfs(arr, N - 1, K);
    }
};
```

```cpp
class Solution{
    int dfs(vector<int> &arr, int i, int K, vector<vector<int>> &dp)
    {
        if (i < 0)
            return K == 0;
            
        if (dp[i][K] != -1)
            return dp[i][K];
            
        return dp[i][K] = dfs(arr, i - 1, K, dp) + dfs(arr, i - 1, K ^ arr[i], dp);
    }
public:
    int subsetXOR(vector<int> arr, int N, int K) {
        vector<vector<int>> dp(N, vector<int>(128, -1));
        
        return dfs(arr, N - 1, K, dp);
    }
};
```

```cpp
class Solution{
public:
    int subsetXOR(vector<int> arr, int N, int K) {
        vector<vector<int>> dp(N + 1, vector<int>(128));
        
        dp[0][0] = 1;
        
        for (int i = 1; i <= N; ++i)
            for (int j = 0; j < 128; ++j)
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j ^ arr[i - 1]];
                
        return dp[N][K];   
    }
};
```
