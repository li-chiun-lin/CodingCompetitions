# Easy

Given N friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
Note: Since answer can be very large, return your answer mod 10<sup>9</sup>+7.

```cpp
class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        int m = 1e9 + 7;
        vector<long long> dp(n + 1, 1);
        
        for (int i = 2; i <= n; ++i)
            dp[i] = (dp[i - 1] + (dp[i - 2] * (i - 1)) % m) % m;
        
        return dp[n];
    }
}; 
```
