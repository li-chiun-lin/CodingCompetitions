# Hard

Given a string $s$ and a dictionary of words $dict$ of length $n$, add spaces in s to construct a sentence where each word is a valid dictionary word. Each dictionary word can be used more than once. Return all such possible sentences.

```cpp
class Solution{
    void dfs(const string &s, int i, string buf, set<string> &ss, vector<string> &ret)
    {
        string tok = "";
        
        while (i < s.size())
        {
            tok.push_back(s[i]);
            
            if (ss.count(tok))
            {
                if (i == s.size() - 1)
                    ret.push_back(buf + tok);
                else
                    dfs(s, i + 1, buf + tok + " ", ss, ret);
            }
            
            ++ i;
        }
    }
    
public:
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        vector<string> ret;
        set<string> ss(begin(dict), end(dict));
        
        dfs(s, 0, "", ss, ret);
        
        return ret;
    }
};
```
