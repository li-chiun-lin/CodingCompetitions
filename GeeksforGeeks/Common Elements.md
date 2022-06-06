# Easy

Given two lists $V1$ and $V2$ of sizes $n$ and $m$ respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.

```cpp
class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        vector<int> ret;
        
        sort(begin(v1), end(v1));
        sort(begin(v2), end(v2));
        
        int n = v1.size();
        int m = v2.size();
        int i = 0;
        int j = 0;
        
        while (i < n && j < m)
        {
            if (v1[i] > v2[j])
                ++ j;
            else if (v1[i] < v2[j])
                ++ i;
            else
            {
                ret.push_back(v1[i]);
                ++ i;
                ++ j;
            }
        }
        
        return ret;
    }
};
```
