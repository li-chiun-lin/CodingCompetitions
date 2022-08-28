# Easy

Given two unsorted arrays $arr1$ and $arr2$. They may contain duplicates. For each element in $arr1$ count elements less than or equal to it in array $arr2$.

```cpp
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
    {
        sort(arr2, arr2 + n);
        
        vector<int> ret(m);
        
        for (int i = 0; i < m; ++i)
            ret[i] = upper_bound(arr2, arr2 + n, arr1[i]) - arr2;
        
        return ret;
    }
};
```
