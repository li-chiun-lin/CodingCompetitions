# Easy

Given two sorted arrays **A** and **B** of length **L1** and **L2**, we can get a set of sums(add one element from the first and one from second). Find the **N**-th element in the set considered in sorted order.

```cpp
class Solution{
public:
    int nthItem(int L1, int L2, int A[], int B[], int N)
    {
        set<int> ss;

        for (int i = 0; i < L1; ++i)
            for (int j = 0; j < L2; ++j)
                ss.insert(A[i] + B[j]);
                
        if (ss.size() < N)
            return -1;

        auto it = ss.begin();

        for (int i = 1; i < N; ++i)
            ++ it;
            
        return *it;
    }
};
```
