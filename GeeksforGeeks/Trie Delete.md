# Medium

Trie is an efficient information retrieval data structure. This data structure is used to store Strings and search strings, String stored can also be deleted. Given a Trie $root$ for a larger string super and a string $key$, delete all the occurences of $key$ in the Trie.

```cpp
class Solution{
public:
    void deleteKey(trie_node_t *root, char key[])
    {
        int len = strlen(key);
        
        for (int i = 0; i < len; ++ i)
        {
            if (root->children[key[i] - 'a'])
                root = root->children[key[i] - 'a'];
            else 
                return ;
        }
        

        root->value = false;
    }
};
```
