# Hard

Given a list of contacts $contact$ of length $n$ where each contact is a string which exist in a phone directory and a query string $s$.

The task is to implement a search query for the phone directory. Run a search query for each prefix $p$ of the query string $s$ that prints all the distinct contacts which have the same prefix as $p$ in lexicographical increasing order.

Note: If there is no match between query and contacts, print "$0$".

```cpp
class Solution{
    struct trie
    {
        bool eow;
        struct trie* next[26];
    };
    
    void insert(trie* obj, string& w)
    {
        for (char c : w)
        {
            int i = c - 'a';
            
            if (! obj->next[i])
                obj->next[i] = new trie();
                
            obj = obj->next[i];
        }
        
        obj->eow = true;
    }
    
    void dfs(trie* obj, string& s, vector<string>& ret)
    {
        if (! obj)
            return ;
            
        if (obj->eow)
            ret.push_back(s);
        
        for (int i = 0; i < 26; ++i)
        {
            if (obj->next[i])
            {
                s.push_back('a' + i);
                dfs(obj->next[i], s, ret);
                s.pop_back();
            }
        }
    }
    
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>> ret;
        trie* obj = new trie();
        string buf = "";
        
        for (int i = 0; i < n; ++i)
            insert(obj, contact[i]);
            
        for (char c : s)
        {
            int i = c - 'a';
            
            if (! obj->next[i])
            {
                while (ret.size() < s.size())
                    ret.push_back({"0"});
                
                return ret;
            }
            
            obj = obj->next[i];
            buf.push_back(c);
            ret.push_back({});
            
            dfs(obj, buf, ret.back());
        }
        
        return ret;
    }
};
```
