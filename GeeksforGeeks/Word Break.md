# Medium

Given a string $A$ and a dictionary of $n$ words $B$, find out if $A$ can be segmented into a space-separated sequence of dictionary words.

Note: From the dictionary $B$ each word can be taken any number of times and in any order.

```cpp
class Solution
{
    bool eq(string &s, string &w)
    {
        if (s.size() < w.size())
            return false;
        
        for (int i = 0; i < w.size(); ++i)
            if (s[i] != w[i])
                return false;
        
        return true;
    }
    
    bool rec(string s, vector<string>& wordDict, map<string, bool> &dp) {
        
        if (dp.find(s) != dp.end())
            return dp[s];
        
        for (string &w : wordDict)
            if (eq(s, w))
                if (s.size() == w.size() || rec(s.substr(w.size()), wordDict, dp))
                    return dp[s] = true;

        return dp[s] = false;
    }
    
public:
    int wordBreak(string A, vector<string> &B) {
        map<string, bool> dp;
        
        return rec(A, B, dp);
    }
};
```

```cpp
class Solution
{
    bool eq(string& s, int i, string& w)
    {
        for (char c : w)
            if (i == s.size() || s[i ++] != c)
                return false;
                
        return true;
    }
    
    int dfs(string& s, int i, vector<string>& wd, vector<int>& dp)
    {
        if (dp[i] != -1)
            return dp[i];
            
        for (auto& w : wd)
        {
            if (eq(s, i, w))
            {
                if (s.size() - i == w.size() || dfs(s, i + w.size(), wd, dp))
                    return dp[i] = 1;
            }
        }
        
        return dp[i] = 0;
    }
    
public:
    int wordBreak(string A, vector<string> &B) {
        vector<int> dp(A.size(), -1);
        
        return dfs(A, 0, B, dp);
    }
};
```
