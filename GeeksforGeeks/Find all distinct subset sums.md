# Medium

Given a set of integers, find all distinct sums that can be generated from the subsets of the given sets.

```cpp
class Solution {
    void dfs(vector<int>& nums, int i, int acc,vector<vector<bool>>& dp, unordered_set<int>& ss)
    {
        ss.insert(acc);
        
        if (i < 0 || dp[i][acc])
            return ;
        
        dfs(nums, i - 1, acc + nums[i], dp, ss);
        dfs(nums, i - 1, acc, dp, ss);
        
        dp[i][acc] = true;
    }
    
public:
    vector<int> DistinctSum(vector<int>nums){
        unordered_set<int> ss;
        int n = nums.size();
        int s = accumulate(begin(nums), end(nums), 0);
        vector<vector<bool>> dp(n, vector<bool>(s + 1));
        
        dfs(nums, n - 1, 0, dp, ss);

        vector<int> ret(begin(ss), end(ss));
        
        sort(begin(ret), end(ret));
        
        return ret;
    }
};
```
