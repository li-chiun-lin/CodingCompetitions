# Medium

Given a Bucket having a capacity of $N$ litres and the task is to determine that by how many ways you can fill it using two bottles of capacity of $1$ Litre and $2$ Litre only. Find the answer modulo $10^8$.

```cpp
class Solution {
public:
    int fillingBucket(int N) {
        int mod = 1e8;
        vector<int> dp(N + 1);
    
        dp[1] = 1;
        dp[2] = 2;
        
        for (int i = 3; i <= N; ++i)
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        
        return dp[N];
    }
};
```
