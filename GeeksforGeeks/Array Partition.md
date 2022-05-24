# Hard

Given an array of $N$ integers, you have to find if it is possible to partition the array with following rules:

- Each element should belong to exactly one partition.
- Each partition should have atleast $K$ elements.
- Absolute difference between any pair of elements in the same partition should not exceed $M$.

```cpp
class Solution{
    bool dfs(int i, int k, int m, vector<int> a, vector<int> &dp)
    {
        // if we reach -1, it means all element from N to 0 has alreay been partitioned properly. 
        if (i < 0)
            return true;
            
        if (dp[i] != -1)
            return dp[i];
            
        // we presum elements i to elements i - k + 1, which have k elements, are already partitioned properly, 
        // and we check if from next element can also partition properly, 
        // if not, and the abs, a[i] - a[j], are still smaller than m, 
        // then we include this current element into the current partition, and check the next element that follows.
        for (int j = i - k + 1; j >= 0 && a[i] - a[j] <= m; --j)
            if (dfs(j - 1, k, m, a, dp))
                return dp[i] = true;
        
        // if eveything goes wrong, backtrack.
        return dp[i] = false;
    }
public:
    bool partitionArray(int N, int K, int M, vector<int> &A){
        // define dp[i] as: from 0 to i, is it possible to partition the array?
        vector<int> dp(N, -1);
        
        sort(begin(A), end(A));
        
        return dfs(N - 1, K, M, A, dp);
    }
};
```
