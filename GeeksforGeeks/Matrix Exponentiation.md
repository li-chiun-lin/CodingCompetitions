# Medium

Given an equation of the form $f(n) = f(n-1) + f(n-2)$ where $f(0) = 1$, $F(1) = 1$, the task is to find the $n$-th term of this sequence.

```cpp
class Solution {
    int m = 1e9 + 7;
    
    vector<long long> mul(vector<long long> &a, vector<long long> &b)
    {
        return {
            (a[0] * b[0] + a[1] * b[2]) % m,
            (a[0] * b[1] + a[1] * b[3]) % m,
            (a[2] * b[0] + a[3] * b[2]) % m,
            (a[2] * b[1] + a[3] * b[3]) % m,
        };
    }
    
public:
    int FindNthTerm(long long int n) {
        vector<long long> x = {1, 1, 1, 0};
        vector<long long> r = {1, 0, 0, 1};
        
        while (n)
        {
            if (n & 1)
                r = mul(r, x);
                
            x = mul(x, x);
            n /= 2;
        }
        
        return r[0];
    }
};
```
