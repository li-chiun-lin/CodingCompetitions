# Easy

Given an array A containing **2 * N + 2** positive numbers, out of which **2 * N** numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers.

```cpp
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> ret;
        
        sort(begin(nums), end(nums));
        
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i - 1] != nums[i])
                ret.push_back(nums[i - 1]);
            else
                ++ i;
        }
        
        if (ret.size() < 2)
            ret.push_back(nums.back());
        
        return ret;
    }
};
```
