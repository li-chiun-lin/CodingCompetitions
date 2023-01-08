# Easy

Given two numbers $N$ and $S$ , find the largest number that can be formed with $N$ digits and whose sum of digits should be equals to $S$.

```cpp
class Solution{
public:
    string findLargest(int N, int S){
        string ret(N, '0');
        
        for (int i = 0; i < N && S; ++i)
        {
            int d = min(9, S);
            S -= d;
            ret[i] += d;
        }
        
        return S || (ret[0] == '0' && N != 1) ? "-1" : ret;
    }
};
```
