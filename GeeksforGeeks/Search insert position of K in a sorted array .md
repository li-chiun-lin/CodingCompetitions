# Easy

Given a sorted array **Arr[]**(0-index based) consisting of **N** distinct integers and an integer **k**, the task is to find the index of **k**, if it’s present in the array **Arr[]**. Otherwise, find the index where **k** must be inserted to keep the array sorted.

```cpp
class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        return lower_bound(Arr.begin(), Arr.end(), k) - Arr.begin();
    }
};
```
