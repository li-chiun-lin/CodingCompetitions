# Easy

Given an unsorted array **arr[]** of size **N** having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

```cpp
class Solution{
    public:
    void segregateElements(int arr[],int N)
    {
        vector<int> p, n;
        
        for (int i = 0; i < N; ++i)
            if (arr[i] >= 0)
                p.push_back(arr[i]);
            else
                n.push_back(arr[i]);
                
        int j = 0;
        
        for (int x : p)
            arr[j ++] = x;
            
        for (int x : n)
            arr[j ++] = x;
    }
};
```
