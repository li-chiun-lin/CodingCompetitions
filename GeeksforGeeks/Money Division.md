# Easy

Given an array where each element is the money a person have and there is only **Rs. 3 note**. We need to check whether it is possible to divide the money equally among all the persons or not. If it is possible then find minimum number of transactions needed.

```cpp
class Solution{
public:
    int MinimumTransaction(vector<int>nums) {
        int n = nums.size();
        int sum = accumulate(begin(nums), end(nums), 0);
        
        if (sum % n)
            return -1;
            
        int a = sum / n;
        int t = 0;

        for (int x  : nums)
        {
            if ((x - a) % 3)
                return -1;

            if (x > a)
                t += (x - a) / 3;
        }

        return t;
    }
};
```
