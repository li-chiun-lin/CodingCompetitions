# Medium

Given two sorted arrays **arr1** and **arr2** of size **N** and **M** respectively and an element **K**. The task is to find the element that would be at the **k**-th position of the final sorted array.

```cpp
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0;
        int j = 0;
        
        while (i < n && j < m && -- k)
        {
            if (arr1[i] < arr2[j])
                ++ i;
            else
                ++ j;
        }
        
        if (i < n && j < m && k == 0)
            return min(arr1[i], arr2[j]);
        
        -- k;
        
        if (i < n)
            return arr1[i + k];
        else
            return arr2[j + k];
    }
};
```
