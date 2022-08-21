# Medium

Given two strings denoting non-negative numbers $X$ and $Y$. Calculate the sum of $X$ and $Y$.

```cpp
class Solution {
  public:
    string findSum(string X, string Y) {
        int i = X.size() - 1;
        int j = Y.size() - 1;
        string ret = "";
        int c = 0;
        
        while (i >= 0 || j >= 0 || c)
        {
            int v = (i >= 0 ? (X[i --] - '0') : 0)
                  + (j >= 0 ? (Y[j --] - '0') : 0)
                  + c;
                  
            c = v / 10;
            ret.push_back((v % 10) + '0');
        }
        
        while (ret.size() > 1 && ret.back() == '0')
            ret.pop_back();
        
        reverse(begin(ret), end(ret));
        
        return ret;
    }
};
```
