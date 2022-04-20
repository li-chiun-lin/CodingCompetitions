# Medium

Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. \
For simplicity, assume that all bars have the same width and the width is 1 unit, there will be **N** bars height of each bar will be given by the array **arr**.

```cpp
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int> sta;
        long long area = 0;
        long long ret = 0;
        
        sta.push(-1);
        
        for (int i = 0; i < n; ++i)
        {
            while (sta.size() > 1 && arr[sta.top()] >= arr[i])
            {
                int t = sta.top();
                sta.pop();
                area = arr[t] * (i - sta.top() - 1);
                ret = max(ret, area);
            }
            
            sta.push(i);
        }
        
        while (sta.size() > 1)
        {
            int t = sta.top();
            sta.pop();
            area = arr[t] * (n - sta.top() - 1);
            ret = max(ret, area);
        }
        
        return ret;
    }
};
```
