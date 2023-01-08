# Easy

Given an unsorted array of size $N$. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

```cpp
int findElement(int arr[], int n) {
    vector<int> left(n), right(n);
    
    left[0] = arr[0];
    
    for (int i = 1; i < n; ++i)
        left[i] = max(arr[i], left[i - 1]);
        
    right[n - 1] = arr[n - 1];
    
    for (int i = n - 2; i >= 0; --i)
        right[i] = min(arr[i], right[i + 1]);
        
    for (int i = 1; i < n - 1; ++i)
        if (left[i - 1] <= arr[i] && arr[i] <= right[i + 1])
            return arr[i];
            
    return -1;
}
```
