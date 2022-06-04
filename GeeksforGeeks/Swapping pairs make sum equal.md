# Easy

Given two arrays of integers $A[]$ and $B[]$ of size $N$ and $M$, the task is to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.

```cpp
class Solution{
public:
    int findSwapValues(int A[], int n, int B[], int m)
    {
        int sa = accumulate(A, A + n, 0);
        int sb = accumulate(B, B + m, 0);
        int d = sb - sa;
        
        if (d % 2)
            return -1;
            
        d /= 2;
        
        sort(A, A + n);
        sort(B, B + m);
        
        int i = 0;
        int j = 0;
        int dd = 0;
        
        while (i < n && j < m)
        {
            dd = B[j] - A[i];
            
            if (dd < d)
                ++ j;
            else if (dd > d)
                ++ i;
            else
                return 1;
        }
        
        return -1;
    }
};
```
