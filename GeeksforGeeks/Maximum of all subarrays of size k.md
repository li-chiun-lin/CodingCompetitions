# Medium

Given an array $arr$ of size $N$ and an integer $K$. Find the maximum for each and every contiguous subarray of size $K$.

```cpp
class Solution
{
    void pb(deque<int>& dq, int v)
    {
        while (dq.size() && dq.back() < v)
            dq.pop_back();
            
        dq.push_back(v);
    }
    
 public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ret;
        deque<int> dq;
        
        for (int i = 0; i < k - 1; ++i)
            pb(dq, arr[i]);
            
        for (int i = k - 1; i < n; ++i)
        {
            pb(dq, arr[i]);
            
            ret.push_back(dq.front());
            
            if (dq.front() == arr[i - k + 1])
                dq.pop_front();
        }
        
        return ret;
    }
};
```
