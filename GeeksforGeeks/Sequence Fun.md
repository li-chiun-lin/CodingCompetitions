# Easy

You have a sequence $2,5,16,65, \dots $

Given an integer $n$ as input. You have to find the value at the nth position in the sequence.

```cpp
class Solution {
public:
    int NthTerm(int n){
        long long v = 1;
        int m = 1e9 + 7;
        
        for (int i = 1; i <= n; ++i)
            v = (v * i + 1) % m;
        
        return v;
    }
};
```
