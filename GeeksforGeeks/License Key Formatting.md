# Medium

Given a string $S$ that consists of only alphanumeric characters and dashes. The string is separated into $N + 1$ groups by $N$ dashes. Also given an integer $K$.

We want to reformat the string $S$, such that each group contains exactly $K$ characters, except for the first group, which could be shorter than $K$ but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.

Return the reformatted string.

```cpp
class Solution
{
   public:
    string ReFormatString(string s, int k){
        string ret = "";
        int j = 0;
        
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] == '-')
                continue;
            
            ret.push_back(toupper(s[i]));
            
            if (++ j % k == 0)
                ret.push_back('-');
        }
        
        if (ret.size() && ret.back() == '-')
            ret.pop_back();
        
        reverse(begin(ret), end(ret));
        
        return ret;
    }
};
```
