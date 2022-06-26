# Medium

Given $N$, the number of plots on either sides of the road. Find the total ways to construct buildings in the plots such that there is a space between any $2$ buildings. All plots on one side of the road are continuous.
Lets suppose __*__ represents a plot, then for $N=3$, the plots can be represented as __* * * | | * * *__, where __| |__ represents the road.

Note: As the answer can be very large, print it mod $1000000007$.

```cpp
class Solution{
public:
    int TotalWays(int N)
    {
        vector<long long> dp(N + 1);
        int m = 1e9 + 7;
        
        dp[0] = 1;
        dp[1] = 2;
        
        for (int i = 2; i <= N; ++i)
            dp[i] = (dp[i - 2] + dp[i - 1]) % m;
            
        return (dp[N] * dp[N]) % m;
    }
};
```
