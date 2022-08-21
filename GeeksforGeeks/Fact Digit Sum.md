# Easy

$A(X)$ for positive integer $X$ is the sum of factorials of its digits.

Given a number $N$, find the minimum number $X$ such that $A(X) = N$. You have to return a list of digits which represent the number $X$.

```cpp
class Solution{
public:
    vector<int> FactDigit(int N)
    {
        vector<int> fac(10);
        
        fac[0] = 1;
        fac[1] = 1;
        
        for (int i = 2; i <= 9; ++i)
            fac[i] = fac[i - 1] * i;
            
        vector<int> ret;
        
        for (int d = 9; d >= 0; --d)
        {
            while (N >= fac[d])
            {
                ret.push_back(d);
                N -= fac[d];
            }
        }
        
        sort(begin(ret), end(ret));
        
        return ret;
    }
};
```
