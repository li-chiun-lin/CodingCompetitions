# Medium

Given an array of positive integers. Find the maximum length of Bitonic subsequence.

A subsequence of array is called Bitonic if it is first strictly increasing, then strictly decreasing.

```cpp
class Solution{
public:
    int LongestBitonicSequence(vector<int>nums)
    {
        int n = nums.size();
        vector<int> left(n), right(n);
        
        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] > nums[j])
                    right[i] = max(right[i], right[j]);
            }
            
            ++ right[i];
        }
        
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (nums[j] < nums[i])
                    left[i] = max(left[i], left[j]);
            }
            
            ++ left[i];
        }
        
        int ret = 0;
        
        for (int i = 0; i < n; ++i)
            ret = max(ret, left[i] + right[i] - 1);
        
        return ret;
    }
};
```
