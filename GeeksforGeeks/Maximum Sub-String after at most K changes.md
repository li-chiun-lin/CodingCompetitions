# Medium

We have a string $s$ of length $n$, which contains only UPPERCASE characters and we have a number $k$ (always less than $n$). We can make at most $k$ changes in our string. In one change, you can replace any $s[i], 0 \leq i < n$ with any uppercase character (from 'A' to 'Z'). After $k$ changes, find the maximum possible length of the sub-string which have all same characters.

```cpp
class Solution {
public:
    int characterReplacement(string s, int k){
        int n = s.size();
        int ret = 1;
        
        for (char c = 'A'; c <= 'Z'; ++c)
        {
            for (int i = 0, j = 0, kk = k; i < n && kk >= 0; ++ i)
            {
                if (s[i] == c)
                    ;
                else if (kk)
                    -- kk;
                else
                    while (s[j ++] == c);
                
                ret = max(ret, i - j + 1);
            }
        }
        
        return ret;
    }
};
```
