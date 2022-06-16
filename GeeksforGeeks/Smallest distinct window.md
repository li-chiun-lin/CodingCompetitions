# Medium

Given a string $s$. The task is to find the smallest window length that contains all the characters of the given string at least one time.

```cpp
class Solution{
    public:
    int findSubString(string str)
    {
        map<char, int> hit, hit2;
        
        for (char c : str)
            ++ hit[c];
            
        int n = str.size();
        int j = 0;
        int ret = INT_MAX;
        
        for (int i = 0; i < n; ++i)
        {
            ++ hit2[str[i]];
            
            while (hit2.size() == hit.size())
            {
                ret = min(ret, i - j + 1);
                
                if (-- hit2[str[j]] == 0)
                    hit2.erase(str[j]);
                
                ++ j;
            }
        }
        
        return ret;
    }
};
```
