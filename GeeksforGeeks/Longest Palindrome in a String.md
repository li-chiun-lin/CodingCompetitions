# Medium

Given a string **S**, find the longest palindromic substring in **S**.

Substring of string **S**: **S[ i . . . . j ]** where **0 ≤ i ≤ j < len(S)**. \
Palindrome string: A string which reads the same backwards. More formally, **S** is palindrome if **reverse(S) = S**. \
Incase of conflict, return the substring which occurs first ( with the least starting index).

```cpp
class Solution {
  public:
    void check(string &S, int s, int e, int &max_len, int &first_idx)
    {
        int len = e - s + 1;
            
        while (0 <= s && e < S.size() && S[s] == S[e])
        {
            if (max_len <= len)
            {
                max_len = len;
                first_idx = s;
            }
            
            len += 2;
            -- s;
            ++ e;
        }
    }
    
    string longestPalin (string S) {
        int max_len = 0;
        int first_idx = INT_MAX;
        int n = S.size();
        
        for (int i = n - 1; i >= 0; --i)
        {
            // chevk even length
            check(S, i, i + 1, max_len, first_idx);
            
            // check odd length
            check(S, i, i, max_len, first_idx);
        }
        
        return S.substr(first_idx, max_len);
    }
};
```

```cpp
class Solution {
  public:
    string longestPalin (string S) {
        int n = S.size();
        vector<vector<int>> dp(n, vector<int>(n));
        
        for (int i = 0; i < n; ++i)
            dp[i][i] = 1;
            
        for (int i = 1; i < n; ++i)
            if (S[i - 1] == S[i])
                dp[i - 1][i] = 2;
                
        int max_len = 1;
        int first_idx = 0;
        
        for (int len = 2; len < n; ++len)
            for (int i = 0; i + len < n; ++i)
                if (S[i] == S[i + len] && dp[i + 1][i + len - 1] > 0)
                    dp[i][i + len] = dp[i + 1][i + len - 1] + 2;
                
        for (int i = 0; i < n; ++i)
            for (int j = i; j < n; ++j)
                if (max_len < dp[i][j])
                {
                    max_len = dp[i][j];
                    first_idx = i;
                }
                
                
        return S.substr(first_idx, max_len);
    }
};
```
