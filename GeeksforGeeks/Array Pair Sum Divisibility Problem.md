# Easy

Given an array of integers and a number $k$, write a function that returns $true$ if given array can be divided into pairs such that sum of every pair is divisible by $k$.

```cpp
class Solution {
public:
    bool canPair(vector<int> nums, int k) {
        vector<int> rem(k);
        
        for (int x : nums)
            ++ rem[x % k];
            
        if (rem[0] % 2)
            return false;
            
        for (int i = 1; i < k; ++i)
            if (rem[i] != rem[k - i])
                return false;
                
        return true;
    }
};
```
