# Easy

Given a string in roman number format ($s$), your task is to convert it to an integer. Various symbols and their values are given below.

```text
    I 1
    V 5
    X 10
    L 50
    C 100
    D 500
    M 1000
```

```cpp
class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char, int> v = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10},
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000},
        };
        int sum = 0;
        
        for (int i = 0; i < str.size() - 1; ++i)
        {
            int c = v[str[i]];
            int n = v[str[i + 1]];
            
            if (c < n)
                sum -= c;
            else
                sum += c;
        }
        
        return sum + v[str.back()];
    }
};
```
