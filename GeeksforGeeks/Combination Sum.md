# Medium

Given an array of integers $A$ and a sum $B$, find all unique combinations in the array where the sum is equal to $B$. The same number may be chosen from the array any number of times to make $B$.

```cpp
class Solution {
    void dfs(vector<int>& arr, int i, int sum, vector<int>& tmp, vector<vector<int>>& ret)
    {
        if (sum == 0)
        {
            ret.push_back(tmp);
            return ;
        }
        
        if (i >= arr.size() || sum < 0)
            return ;
            
        if (arr[i] <= sum)
        {
            tmp.push_back(arr[i]);
            dfs(arr, i, sum - arr[i], tmp, ret);
            tmp.pop_back();
        }
        
        dfs(arr, i + 1, sum, tmp, ret);
    }
    
public:
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        set<int> ss(begin(A), end(A));
        vector<int> arr(begin(ss), end(ss));
        vector<int> tmp;
        vector<vector<int>> ret;
        
        dfs(arr, 0, B, tmp, ret);
        
        return ret;
    }
};
```
