# Medium

Given an array containing **N** integers and a positive integer **K**, find the length of the longest sub array with sum of the elements divisible by the given value **K**.

```cpp
class Solution{
public:
    int longSubarrWthSumDivByK(int arr[], int n, int k)
    {
        vector<int> acc(n + 1);
        
        for (int i = 0; i < n; ++i)
            acc[i + 1] = acc[i] + arr[i];
            
        int ret = 0;
        
        for (int i = 0; i + ret <= n; ++i)
        {
            for (int j = n; j > i; --j)
            {
                if ((acc[j] - acc[i]) % k == 0)
                {
                    ret = max(ret, j - i);
                    break;
                }
            }
        }
        
        return ret;
    }
};
```

```cpp
class Solution{
public:
    int longSubarrWthSumDivByK(int arr[], int n, int k)
    {
        map<int, int> rem;
        rem[0] = -1;
        
        int sum = 0;
        int ret = 0;
        int r = 0;
        
        for (int i = 0; i < n; ++i)
        {
            sum += arr[i];
            r = (sum % k + k) % k;
            
            if (rem.count(r))
                ret = max(ret, i - rem[r]);
            else
                rem[r] = i;
        }
        
        return ret;
    }
};
```
