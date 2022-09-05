# Easy

Write a program that receives a number $n$ as input and prints it in the following format as shown below.

Like for $n = 2$ the pattern will be:

```text
1*2*5*6
--3*4
```

```cpp
class Solution{
public:
    vector<string> pattern(int n){
        vector<string> ret;
        int space = 0;
        int cnt = 1;
        
        while (n)
        {
            string s = string(space, '-') + to_string(cnt);
            int w = n;
            int p = n * n;
            
            for (int i = 1; i < w; ++i)
                s += "*" + to_string(cnt + i);
                
            for (int i = 0; i < w; ++i)
                s += "*" + to_string(p + cnt + i);
                
            ret.push_back(s);
            
            cnt += n;
            -- n;
            space += 2;
        }
        
        return ret;
    }
};
```
