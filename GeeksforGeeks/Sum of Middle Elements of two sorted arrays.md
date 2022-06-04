# Medium

Given 2 sorted arrays $Ar1$ and $Ar2$ of size $N$ each. Merge the given arrays and find the sum of the two middle elements of the merged array.

```cpp
class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
        int i = 0;
        int j = 0;
        int pre = 0;
        int cur = 0;
        
        while (i < n && j < n && i + j <= n)
        {
            pre = cur;
            if (ar1[i] < ar2[j])
                cur = ar1[i ++];
            else 
                cur = ar2[j ++];
        }
        
        while (i < n && i + j <= n)
        {
            pre = cur;
            cur = ar1[i ++];
        }
        
        while (j < n && i + j <= n)
        {
            pre = cur;
            cur = ar2[j ++];
        }
        
        return pre + cur;
    }
};
```
