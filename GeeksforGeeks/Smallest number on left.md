# Medium

Given an array $a$ of integers of length $n$, find the nearest smaller number for every element such that the smaller element is on left side. If no small element present on the left print $-1$.

```cpp
class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector<int> ret(n, -1);
        stack<int> sta;
        
        for (int i = 0; i < n; ++i)
        {
            while (sta.size() && sta.top() >= a[i])
                sta.pop();
                
            if (sta.size())
                ret[i] = sta.top();
                
            sta.push(a[i]);
        }
        
        return ret;
    }
};
```
