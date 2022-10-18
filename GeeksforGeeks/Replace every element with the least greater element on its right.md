# Medium

Given an array $arr$ of $N$ integers and replace every element with the least greater element on its right side in the array. If there are no greater elements on the right side, replace it with $-1$.

```cpp
class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        set<int> ss;
        vector<int> ret(n, -1);
        set<int>::iterator it;
        
        for (int i = n - 1; i >= 0; --i)
        {
            if (ss.size() && (it = ss.upper_bound(arr[i])) != end(ss))
                ret[i] = *it;
            
            ss.insert(arr[i]);
        }
        
        return ret;
    }
};
```
