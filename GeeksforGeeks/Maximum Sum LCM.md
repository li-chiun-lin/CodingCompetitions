# Easy

Given a positive number $n$. You need to write a program to find the maximum sum of distinct numbers such that the LCM of all these numbers is equal to $n$.

```cpp
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        long long ret;
        
        for (long long i = 1; i * i <= n; ++i)
        {
            if (n % i)
                continue;
                
            ret += i;
            
            if (n / i != i)
                ret += n / i;
        }
        
        return ret;
    }
};
```
