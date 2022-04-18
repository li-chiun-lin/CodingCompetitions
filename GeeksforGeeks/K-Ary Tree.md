# Easy

Find the number of leaf nodes in a full k-ary tree of height m. <br>
Note: You have to return the answer module 10<sup>9</sup>+7.

```cpp
class Solution {
  public:
    long long karyTree(int k, int m) {
        int mod = 1e9 + 7;
        long long a = k;
        long long x = 1;
        
        while (m)
        {
            if (m & 1)
                x = (x * a) % mod;
                
            a = (a * a) % mod;
            m >>= 1;
        }
        
        return x;
    }
};
```
