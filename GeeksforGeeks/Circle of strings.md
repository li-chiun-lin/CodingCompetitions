# Medium

Given an array of lowercase strings $A[]$ of size $N$, determine if the strings can be chained together to form a circle.

A string $X$ can be chained together with another string $Y$ if the last character of $X$ is same as first
character of $Y$. If every string of the array can be chained, it will form a circle.

```cpp
class Solution
{
public:
    int isCircle(int N, vector<string> A)
    {
        map<char, int> front, back, same;
        
        for (string &s : A)
        {
            ++ front[s.front()];
            ++ back[s.back()];
            
            if (s.front() == s.back())
                ++ same[s.front()];
        }
        
        if (front.size() != back.size())
            return 0;
                
        for (auto &h : front)
        {
            if (h.second != back[h.first])
                return 0;
                
            if (h.second == same[h.first] && h.second != N)
                return 0;
        }
        
        return 1;
    }
};
```
