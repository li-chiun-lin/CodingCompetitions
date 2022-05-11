# Easy

Given an array of integers (**A[]**)  and a number **x**, find the smallest subarray with sum greater than the given value.

```cpp
class Solution{
public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
        int sum = 0;
        int i = 0;
        int j = 0;
        int r = INT_MAX;
        
        while (i < n)
        {
            if (sum <= x)
                sum += arr[i ++];
            else 
            {
                r = min(r, i - j);
                sum -= arr[j ++];
            }
        }
        
        while (sum > x)
        {
            r = min(r, n - j);
            sum -= arr[j ++];
        }
        
        return r;
    }
};
```

```cpp
class Solution{
public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
        int sum = 0;
        int i = 0;
        int j = 0;
        int r = INT_MAX;
        
        while (i < n)
        {
            sum += arr[i ++];
            
            while (sum > x) 
            {
                r = min(r, i - j);
                sum -= arr[j ++];
            }
        }
        
        return r;
    }
};
```
