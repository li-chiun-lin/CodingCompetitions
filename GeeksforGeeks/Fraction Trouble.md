# Easy

Consider the set of irreducible fractions $A = \{n/d | n≤d \text{ and } d ≤ 10000 \text{ and } gcd(n,d) = 1\}$. You are given a member of this set and your task is to find the largest fraction in this set less than the given fraction.

```cpp
class Solution {
  public:
    vector<int> numAndDen(int n, int d) {
        int nu = -1;
        int de = 1;
        
        for (int j = d + 1; j <= 10000; ++j)
        {
            int i = n * j / d;
            
            if (__gcd(i, j) == 1 && i * de > j * nu)
            {
                nu = i;
                de = j;
            }
        }
        
        return {nu, de};
    }
};
```
