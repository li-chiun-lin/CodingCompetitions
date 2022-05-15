# Medium

Given an array **arr[]** of integers of size **N** that might contain duplicates, the task is to find all possible unique subsets.

Note: Each subset should be sorted.

```cpp
class Solution
{
    void dfs(vector<int> &arr, int i, vector<int> &buf, set<vector<int>> &ss)
    {
        if (i < 0)
        {
            ss.insert(buf);
            return ;
        }
        
        dfs(arr, i - 1, buf, ss);
        
        buf.push_back(arr[i]);
        dfs(arr, i - 1, buf, ss);
        buf.pop_back();
    }
    
public:

    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        set<vector<int>> ss;
        vector<int> buf;
        
        sort(arr.begin(), arr.end(), greater<int>());
        
        dfs(arr, n - 1, buf, ss);
        
        return vector<vector<int>> (ss.begin(), ss.end());;
    }
};
```
