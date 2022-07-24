# Hard

Given an array $Arr$ of size $N$ containing positive integers. Count number of smaller elements on right side of each array.

```cpp
class Solution{
public:
    vector<int> constructLowerArray(int *arr, int n) {
        vector<int> ret(n);
        vector<int> ss;
        
        ss.push_back(arr[n - 1]);
        
        for (int i = n - 2; i >= 0; --i)
        {
            int j = lower_bound(begin(ss), end(ss), arr[i]) - begin(ss);
            ss.insert(begin(ss) + j, arr[i]);
            ret[i] = j;
        }
        
        return ret;
    }
};
```
