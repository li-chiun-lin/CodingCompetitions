# Easy

Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. The output should be printed in sorted increasing order of strings.

```cpp
class Solution{
    void dfs(string &s, int i, string &buf, vector<string> &ret)
    {
        if (i == s.size() - 1)
        {
            buf.push_back(s[i]);
            ret.push_back(buf);
            buf.pop_back();
            
            return ;
        }
        
        buf.push_back(s[i]);
        buf.push_back(' ');
        dfs(s, i + 1, buf, ret);
        buf.pop_back();
        
        dfs(s, i + 1, buf, ret);
        
        buf.pop_back();
    }
public:

    vector<string> permutation(string S){
        vector<string> ret;
        string buf = "";
        
        dfs(S, 0, buf, ret);
        
        sort(begin(ret), end(ret));
        
        return ret;
    }
};
```
