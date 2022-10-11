# Medium

Design a data structure that works like a LRU Cache. Here $cap$ denotes the capacity of the cache and $Q$ denotes the number of queries. Query can be of two types:

- SET $x$ $y$ : sets the value of the key $x$ with value $y$.
- GET $x$ : gets the key of $x$ if present else returns $-1$.

The LRUCache class has two methods **get()** and **set()** which are defined as follows.

- **get(key)** : returns the value of the $key$ if it already exists in the cache otherwise returns $-1$.
- **set(key, value)** : if the $key$ is already present, update its $value$. If not present, add the key-value pair to the cache. If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.
- In the constructor of the class the capacity of the cache should be intitialized.

```cpp
class LRUCache {
    int size;
    unordered_map<int, list<pair<int, int>>::iterator> mm;
    list<pair<int, int>> lst;
    
public:
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if (mm.find(key) == mm.end())
            return -1;
        
        lst.splice(lst.begin(), lst, mm[key]);
        return mm[key]->second;
    }
    
    void set(int key, int value) {
        if (mm.find(key) != mm.end())
        {
            lst.splice(lst.begin(), lst, mm[key]);
            mm[key]->second = value;
            return;
        }
        
        if (mm.size() == size)
        {
            int k = lst.back().first;
            lst.pop_back();
            mm.erase(k);
        }
        
        lst.push_front({key, value});
        mm[key] = lst.begin();
    }
};
```
