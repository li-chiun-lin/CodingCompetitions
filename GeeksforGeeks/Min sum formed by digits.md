# Easy

Given an array of digits (values are from $0$ to $9$), find the minimum possible sum of two numbers formed from digits of the array. All digits of given array must be used to form the two numbers.

```cpp
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        sort(arr, arr + n);
        
        long long a = 0;
        long long b = 0;
        int i = 0;
        
        while (i + 1 < n)
        {
            a *= 10;
            b *= 10;
            
            a += arr[i];
            b += arr[i + 1];
            
            i += 2;
        }
        
        if (i < n)
        {
            a *= 10;
            a += arr[i ++];
        }
        
        return a + b;
    }
};
```
