# Medium

Given an array $A$ of $N$ positive integers. The task is to find the maximum of $j - i$ subjected to the constraint of $A[i] < A[j]$ and $i < j$.

```cpp
class Solution{
public:
    int maxIndexDiff(int A[], int N) 
    { 
        int ret = 0;
        
        for (int i = 0; i < N; ++i)
        {
            int j = N - 1;
            
            while (i < j && A[i] > A[j])
                -- j;
                
            ret = max(ret, j - i);
        }
        
        return ret;
    }
};
```

```cpp
class Solution{
public:
    int maxIndexDiff(int A[], int N) 
    { 
        vector<int> left(N), right(N);
        
        left[0] = A[0];
        right[N - 1] = A[N - 1];
        
        for (int i = 1; i < N; ++i)
            left[i] = min(left[i - 1], A[i]);
            
        for (int i = N - 2; i >= 0; --i)
            right[i] = max(right[i + 1], A[i]);
            
        int i = 0;
        int j = 0;
        int ret = 0;
        
        while (i < N && j < N)
        {
            if (left[i] <= right[j])
            {
                ret = max(ret, j - i);
                ++ j;
            }
            else
            {
                ++ i;
            }
        }
        
        return ret;
    }
};
```
