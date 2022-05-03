# Easy

Given an array **A[]** of positive integers of size **N**, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are **M** students, the task is to distribute chocolate packets among **M** students such that :

1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

```cpp
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin(), a.end());
        
        long long ret = LONG_MAX;
        
        for (int i = m - 1; i < n; ++i)
        {
            long long d = a[i] - a[i - (m - 1)];
            ret = min(ret, d);
        }
        
        return ret;
    }   
};
```
