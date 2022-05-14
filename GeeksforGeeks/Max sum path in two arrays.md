# Easy

Given two sorted arrays **A** and **B** of size **M** and **N** respectively. Each array may have some elements in common with the other array. 

Find the maximum sum of a path from the beginning of any array to the end of any of the two arrays. We can switch from one array to another array only at the common elements.Both the arrays are sorted.

Note: Only one repeated value is considered in the valid path sum.

```cpp
class Solution{
public:
    int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int r = 0;
        int a1 = 0;
        int a2 = 0;
        
        int i = 0;
        int j = 0;
        
        while (i < l1 && j < l2)
        {
            if (A[i] < B[j])
                a1 += A[i ++];
            else if (A[i] > B[j])
                a2 += B[j ++];
            else
            {
                r += max(a1, a2);
                
                a1 = A[i ++];
                a2 = B[j ++];
            }
        }
        
        while (i < l1)
            a1 += A[i ++];
            
        while (j < l2)
            a2 += B[j ++];
        
        return r + max(a1, a2);
    }
};
```
