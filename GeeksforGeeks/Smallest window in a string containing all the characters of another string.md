# Medium

Given two strings **S** and **P**. Find the smallest window in the string **S** consisting of all the characters(including duplicates) of the string **P**.  Return **"-1"** in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index.

```cpp
class Solution
{
    public:
    string smallestWindow (string s, string p)
    {
        int n = s.size();
        int m = p.size();
        map<char, int> hit;
        
        for (char c : p)
            ++ hit[c];
            
        int mm = hit.size();
        int j = 0;
        int cnt = 0;
        int len = INT_MAX;
        int begin = 0;
        
        for (int i = 0; i < n; ++i)
        {
            if (-- hit[s[i]] == 0)
            {
                if (++ cnt == mm)
                {
                    while (hit[s[j]] < 0)
                        ++ hit[s[j ++]];
                    
                    int l = i - j + 1;
                    
                    if (len > l)
                    {
                        len = l;
                        begin = j;
                    }
                    
                    ++ hit[s[j ++]];
                    -- cnt;
                }
            }
        }
        
        return len == INT_MAX ? "-1" : s.substr(begin, len);
    }
};
```
