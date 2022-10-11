# Easy

Given a sorted and rotated array $A$ of $N$ distinct elements which is rotated at some point, and given an element $key$. The task is to find the index of the given element $key$ in the array $A$.

```cpp
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        int m = l + (h - l) / 2;
        
        if (l > h)
            return -1;
        
        if (A[m] == key)
            return m;
            
        // [l, ..., m] is sorted.
        if (A[l] <= A[m])
        {
            if (A[l] <= key && key <= A[m])
                return search(A, l, m - 1, key);
            else
                return search(A, m + 1, h, key);
        }
        // [m, ..., h] is sorted.
        else
        {
            if (A[m] <= key && key <= A[h])
                return search(A, m + 1, h, key);
            else
                return search(A, l, m - 1, key);
        }
    }
};
```
