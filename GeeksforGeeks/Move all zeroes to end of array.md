# Easy

Given an array $arr$ of $N$ positive integers. Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.

```cpp
class Solution{
public:
    void pushZerosToEnd(int arr[], int n) {
        int i = 0;
        int zero = 0;
        
        while (i + zero < n)
        {
            if (arr[i + zero])
            {
                arr[i] = arr[i + zero];
                ++ i;
            }
            else
                ++ zero;
        }
        
        while (i < n)
            arr[i ++] = 0;
    }
};
```
