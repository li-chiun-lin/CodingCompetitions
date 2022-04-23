# Easy

Given a positive integer **n**, find the **n**-th fibonacci number. Since the answer can be very large, return the answer modulo **1000000007**.

```cpp
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        if (n <= 2)
            return 1;
            
        int m = 1e9 + 7;
            
        long long int f_2 = 1;
        long long int f_1 = 1;
        long long int f_0 = 2;
        
        while (n -- > 2)
        {
            f_0 = (f_2 + f_1) % m;
            f_2 = f_1;
            f_1 = f_0;
        }
        
        return f_0;
    }
};
```
