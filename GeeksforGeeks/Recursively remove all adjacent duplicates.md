# Medium

Given a string **s**, remove all its adjacent duplicate characters recursively.

```cpp
class Solution{
public:
    string remove(string s){
        string ret = "";
        int n = s.size();
        
        for (int i = 0; i < n; ++i)
        {
            if (ret.size() && ret.back() == s[i])
            {
                while (i < n && ret.back() == s[i])
                    ++ i;
                   
                if (i < n) 
                    ret.back() = s[i];
                else
                    ret.pop_back();
            }
            else
            {
                ret.push_back(s[i]);
            }
        }
        
        return ret.size() == n ? ret : remove(ret);
    }
};
```
