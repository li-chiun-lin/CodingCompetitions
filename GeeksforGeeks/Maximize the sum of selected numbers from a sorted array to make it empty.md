# Medium

Given a array of $N$ numbers, we need to maximize the sum of selected numbers. At each step, you need to select a number $A_i$, delete one occurrence of $A_i-1$ (if exists), and $A_i$ each from the array. Repeat these steps until the array gets empty. The problem is to maximize the sum of the selected numbers.

Note: Numbers need to be selected from maximum to minimum.

```cpp
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        int ret = 0;
        map<int, int> freq;
        
        for (int i = 0; i < n; ++i)
            ++ freq[a[i]];
            
        sort(a, a + n);
        
        for (int i = n - 1; i >= 0; --i)
        {
            if (freq[a[i]])
            {
                ret += a[i] * freq[a[i]];
                freq[a[i] - 1] = max(0, freq[a[i] - 1] - freq[a[i]]);
                freq[a[i]] = 0;
            }
        }
        
        return ret;
    }
};
```
