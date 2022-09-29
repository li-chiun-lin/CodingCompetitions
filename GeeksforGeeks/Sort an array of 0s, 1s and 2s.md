# Easy

Given an array of size $N$ containing only 0s, 1s, and 2s; sort the array in ascending order.

```cpp
class Solution
{
public:
    void sort012(int a[], int n)
    {
        vector<int> cnt(3);
        
        for (int i = 0; i < n; ++i)
            ++ cnt[a[i]];
            
        int idx = 0;
        while (--cnt[0] >= 0)
            a[idx ++] = 0;
            
        while (--cnt[1] >= 0)
            a[idx ++] = 1;
            
        while (--cnt[2] >= 0)
            a[idx ++] = 2;
    }
};
```
