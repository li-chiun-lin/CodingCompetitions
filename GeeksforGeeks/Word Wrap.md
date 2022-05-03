# Hard

Given an array **nums[]** of size **n**, where **nums[i]** denotes the number of characters in one word. Let **K** be the limit on the number of characters that can be put in one line (line width). Put line breaks in the given sequence such that the lines are printed neatly.
Assume that the length of each word is smaller than the line width. When line breaks are inserted there is a possibility that extra spaces are present in each line. The extra spaces include spaces put at the end of every line except the last one.

You have to **minimize** the following total cost where **total cost** = **Sum of cost of all lines**, where **cost of line** is = (**Number of extra spaces in the line**)**<sup>2</sup>**.

```cpp
class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(k + 1, 0));
        
        for (int i = 0; i <= nums.back(); ++i)
            dp[n - 1][i] = i * i;
            
        for (int i = n - 2; i >= 0; --i)
        {
            for (int j = 0; j <= k; ++j)
            {
                int r = INT_MAX;
                if (nums[i] < j)
                    r = min(r, dp[i + 1][j == k ? j - nums[i] : j - nums[i] - 1]);
                
                dp[i][j] = min(r, j * j + dp[i + 1][k - nums[i]]);
            }
        }
        
        return dp[0][k];
    }
};
```
