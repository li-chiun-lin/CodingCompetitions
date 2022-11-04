# Medium

Given a number $n$ and number of digits $m$ to represent the number, we have to check if we can represent $n$ using exactly $m$ digits in any base from $2$ to $32$.

```cpp
class Solution {
public:
    string baseEquiv(int n, int m){
        double ln = log(n);
        
        for (int i = 2; i < 32; ++i)
            if (floor(ln / log(i)) == m - 1)
                return "Yes";
        
        return "No";
    }
};
```
