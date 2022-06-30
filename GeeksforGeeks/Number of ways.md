# Medium

Given a value $N$. In how many ways you can construct a grid of size $N \times 4$ using tiles of size $1 \times 4$.

```cpp
class Solution{
public:
    long long int arrangeTiles(int N){
        vector<long long> dp(N + 5);
        
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        dp[4] = 2;
        
        for (int i = 5; i <= N; ++i)
            dp[i] = dp[i - 1] + dp[i - 4];
            
        return dp[N];
    }
};
```
