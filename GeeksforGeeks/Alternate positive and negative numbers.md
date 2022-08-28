# Easy

Given an unsorted array $Arr$ of $N$ positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.

Note: Array should start with positive number.

```cpp
class Solution{
public:
    void rearrange(int arr[], int n) {
        queue<int> pos, neg;
        
        for (int i = 0; i < n; ++i)
            if (arr[i] >= 0)
                pos.push(arr[i]);
            else
                neg.push(arr[i]);
            
            
        int j = 0;  
        while (pos.size() && neg.size())
        {
            arr[j++] = pos.front();
            arr[j++] = neg.front();
            pos.pop();
            neg.pop();
        }
        
        while (pos.size())
        {
            arr[j++] = pos.front();
            pos.pop();
        }
        
        while (neg.size())
        {
            arr[j++] = neg.front();
            neg.pop();
        }
    }
};
```
