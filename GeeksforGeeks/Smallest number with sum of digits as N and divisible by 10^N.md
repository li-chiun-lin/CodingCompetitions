# Easy

Find the smallest number such that the sum of its digits is $N$ and it is divisible by $10^N$.

```cpp
class Solution{
    public:
    string digitsNum(int N)
    {
        int nine = N / 9;
        int mod = N % 9;
        
        string str = string(nine, '9');
        
        if (mod)
            str += to_string(mod);
        
        reverse(begin(str), end(str));
        
        return str + string(N, '0');
    }
};
```
