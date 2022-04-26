# Easy

Given an array **Arr** of **N** positive integers and another number **X**. Determine whether or not there exist two elements in **Arr** whose sum is exactly **X**.

```cpp
class Solution{
public:
    bool hasArrayTwoCandidates(int arr[], int n, int x) {
        unordered_map<int, int> hit;
        
        for (int i = 0; i < n; ++i)
            ++ hit[arr[i]];
            
        for (int i = 0; i < n; ++i)
            if (hit[x - arr[i]])
            {
                if (x - arr[i] == arr[i])
                {
                    if (hit[x - arr[i]] > 1)
                        return true;
                }
                else
                    return true;
            }
        
        return false;
    }
};
```
