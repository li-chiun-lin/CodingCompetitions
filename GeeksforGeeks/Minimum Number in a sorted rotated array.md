# Easy

Given an array of distinct elements which was initially sorted. This array is rotated at some unknown point. The task is to find the minimum element in the given sorted and rotated array.

```cpp
class Solution
{
public:
    int minNumber(int arr[], int low, int high)
    {
        if (low >= high)
            return arr[low];
            
        int mid = low + (high - low) / 2;
        
        if (arr[high] < arr[mid])
            return minNumber(arr, mid + 1, high);
        else
            return minNumber(arr, low, mid);
    }
};
```

```cpp
class Solution
{
public:
    int minNumber(int arr[], int low, int high)
    {
        if (low < high)
        {
            int mid = low + (high - low) / 2;
            
            if (arr[low] < arr[mid] && arr[high] < arr[mid])
                return minNumber(arr, mid + 1, high);
            
            if (arr[low] <= arr[mid] && arr[mid] <= arr[high])
                return arr[low];
                
            if (arr[mid] < arr[low] && arr[mid] < arr[high])
                return minNumber(arr, low, mid);
        }
        
        return min(arr[low], arr[high]);
    }
};
```
