# Easy

Given an array **Arr[]** of size **L** and a number **N**, you need to write a program to find if there exists a pair of elements in the array whose difference is **N**.

```cpp
bool findPair(int arr[], int size, int n){
    map<int, int> hit;
    
    for (int i = 0; i < size; ++i)
        ++ hit[arr[i]];
        
    if (n == 0)
    {
        for (int i = 0; i < size; ++i)
            if (hit[arr[i]] > 1)
                return true;
    }
    else
    {
        for (int i = 0; i < size; ++i)
            if (hit[arr[i] + n])
                return true;
    }
        
    return false;
}
```
