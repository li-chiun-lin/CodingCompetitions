# Medium

Given a string $S$, the task is to count number of subsequences of the form $a^i b^j c^k$, where $i >= 1, j >=1$ and $k >= 1$.

Note:

1. Two subsequences are considered different if the set of array indexes picked for the 2 subsequences are different.
2. For large test cases, the output value will be too large, return the answer MODULO $10^9+7$.

```cpp
class Solution{
  public:
    int fun(string &s) {
        map<char, long long> hit;
        int m = 1e9 + 7;
        hit['a' - 1] = 1;
        
        for (char c : s)
            hit[c] = (hit[c] * 2 + hit[c - 1]) % m;
            
        return hit['c'];
    }
};
```
