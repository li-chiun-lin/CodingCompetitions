# Easy

Geek's Paint Shop is one of the famous shop in Geekland, but 2014 Earthquake caused disarrangement of the items in his shop. Each item in his shop is a 40-digit alpha numeric code .
Now Chunky wants to retain the reputation of his shop, for that he has to arrange all the distinct items in lexicographical order.
Your task is to arrange the all the distinct items in lexicographical ascending order and print them along with their count.

```cpp
struct alphanumeric {
    string name;
    int count;
};

class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        vector<alphanumeric> ret;
        map<string, int> freq;
        
        for (auto& a : A)
            ++ freq[a];
            
        for (auto& f : freq)
            ret.push_back({f.first, f.second});
            
        return ret;
    }
};
```
