# Easy

Given a string **str**, find the length of the longest repeating subsequence such that it can be found twice in the given string.

The two identified subsequences **A** and **B** can use the same **i**-th character from string **str** if and only if that **i**-th character has different indices in **A** and **B**.

```cpp
class Solution {
public:
    int LongestRepeatingSubsequence(string str){
        int n = str.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1));
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                dp[i + 1][j + 1] = (str[i] == str[j] && i != j) 
                    ? dp[i][j] + 1
                    : max(dp[i][j + 1], dp[i + 1][j]);
            
        return dp[n][n];
    }
};
```
