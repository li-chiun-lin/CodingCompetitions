# Medium

Geek has a list $li$ containing (not necessarily distinct) $N$ words and $Q$ queries. Each query consists of a string $x$. For each query, find how many strings in the list $li$ has the string $x$ as its prefix.

```cpp
class Solution{
    struct trie
    {
        int cnt;
        trie* next[26];
    };
    
    void insert(trie* obj, string &s)
    {
        for (char c : s)
        {
            int i = c - 'a';
            
            if (! obj->next[i])
                obj->next[i] = new trie();
                
            obj = obj->next[i];
            ++ obj->cnt;
        }
    }
    
    int query(trie* obj, string& s)
    {
        for (char c : s)
        {
            int i = c - 'a';
            
            if (! obj->next[i])
                return 0;
                
            obj = obj->next[i];
        }
        
        return obj->cnt;
    }
    
public:
    vector<int> prefixCount(int N, int Q, string li[], string que[])
    {
        vector<int> ret;
        trie* obj = new trie();
        
        for (int i = 0; i < N; ++i)
            insert(obj, li[i]);
            
        for (int i = 0; i < Q; ++i)
            ret.push_back(query(obj, que[i]));
             
        return ret;
    }
};
```
