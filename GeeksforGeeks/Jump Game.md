# Medium

Given an positive integer $N$ and a list of $N$ integers $A$. Each element in the array denotes the maximum length of jump you can cover. Find out if you can make it to the last index if you start at the first index of the list.

```cpp
class Solution {
  public:
    int canReach(int A[], int N) {
        vector<bool> dp(N);
        
        dp[N - 1] = true;
        
        for (int i = N - 2; i >= 0; --i)
            for (int j = 1; j <= A[i] && i + j < N && ! dp[i]; ++j)
                dp[i] = dp[i] || dp[i + j];
                
        return dp[0];
    }
};
```
