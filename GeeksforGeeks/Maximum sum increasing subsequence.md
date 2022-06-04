# Medium

Given an array of $n$ positive integers. Find the sum of the maximum sum subsequence of the given array such that the integers in the subsequence are sorted in increasing order.

```cpp
class Solution {
public:
    int maxSumIS(int arr[], int n)  
    {  
        vector<int> dp(n);
        dp[0] = arr[0];
        
        for (int i = 1; i < n; ++i)
            for (int j = 0; j < i; ++j)
            {
                if (arr[j] < arr[i])
                    dp[i] = max(dp[i], dp[j] + arr[i]);
                else
                    dp[i] = max(dp[i], arr[i]);
            }
            
        
        return *max_element(begin(dp), end(dp));    
    }  
};
```
