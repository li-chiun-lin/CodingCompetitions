# Medium

An encoded string $s$ is given, the task is to decode it. The encoding pattern is that the occurance of the string is given at the starting of the string and each string is enclosed by square brackets.

```cpp
class Solution{
    string dfs(string& s, int &i)
    {
        string ret = "";
        
        while (i < s.size() && s[i] != ']')
        {
            // find a begin of encoding
            if (isdigit(s[i]))
            {
                int cnt = 0;
                
                // compose the counter
                while (i < s.size() && isdigit(s[i]))
                    cnt = cnt * 10 + s[i ++] - '0';
                   
                // skip the '[' 
                ++ i;
                
                // nested encoding
                string r = dfs(s, i);
                
                // decode
                while (cnt --)
                    ret += r;
                    
                // skip the ']'
                ++ i;
            }
            else
                // normal case
                ret.push_back(s[i ++]);
        }
        
        return ret;
    }
    
public:
    string decodedString(string s){
        string ret = "";
        int i = 0;
        
        return dfs(s, i);
    }
};
```
