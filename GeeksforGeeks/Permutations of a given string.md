# Medium

Given a string **S**. The task is to print all permutations of a given string in lexicographically sorted order.

```cpp
class Solution
{
    void dfs(string &s, string &t, vector<bool> &selected, vector<string> &ret)
    {
        if (s.size() == t.size())
        {
            ret.push_back(t);
            return ;
        }
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (selected[i])
                continue;
                
            selected[i] = true;
            t.push_back(s[i]);
            dfs(s, t, selected, ret);
            t.pop_back();
            selected[i] = false;
        }
    }
public:
    vector<string> find_permutation(string S)
    {
        int n = 0;
        vector<bool> selected(n);
        vector<string> ret;
        string t = "";
        
        dfs(S, t, selected, ret);
        
        sort(begin(ret), end(ret));
        
        return ret;
    }
};
```
