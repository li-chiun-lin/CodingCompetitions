# Medium

You are given an array $arr[]$ of size $n$. Find the total count of sub-arrays having their sum equal to $0$.

```cpp
class Solution{
public:
    ll findSubarray(vector<ll> arr, int n ) {
        ll sum = 0;
        map<ll, ll> idx;
        idx[0] = 1;
        
        for (int i = 0; i < n; ++i)
            ++ idx[sum += arr[i]];
            
        ll cnt = 0;
        
        for (auto &h : idx)
            cnt += h.second * (h.second - 1) / 2;
            
        return cnt;
    }
};
```
