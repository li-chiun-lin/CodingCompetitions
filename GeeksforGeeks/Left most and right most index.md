# Easy

Given a sorted array with possibly duplicate elements. The task is to find indexes of first and last occurrences of an element $X$ in the given array. If the element is not present in the array return ${-1,-1}$ as pair.

```cpp
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long long l = 0;
        long long r = v.size() - 1;
        long long m = 0;
        long long ret1 = -1;
        long long ret2 = -1;
        
        while (l <= r)
        {
            m = l + (r - l) / 2;
            
            if (v[m] < x)
                l = m + 1;
            else if (v[m] > x)
                r = m - 1; 
            else
            {
                ret1 = m;
                r = m - 1;
            }
        }
        
        l = 0;
        r = v.size() - 1;
        
        while (l <= r)
        {
            m = l + (r - l) / 2;
            
            if (v[m] < x)
                l = m + 1;
            else if (v[m] > x)
                r = m - 1;
            else
            {
                ret2 = m;
                l = m + 1;
            }
        }
        
        return {ret1, ret2};
    }
};
```
