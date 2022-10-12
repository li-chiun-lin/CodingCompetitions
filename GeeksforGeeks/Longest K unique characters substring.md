# Medium

Given a string you need to print the size of the longest possible substring that has exactly $K$ unique characters. If there is no possible substring then print $-1$.

```cpp
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int ret = -1;
        int j = 0;
        map<char, int> hit;
        
        for (int i = 0; i < s.size(); ++i)
        {
            ++ hit[s[i]];
            
            while (hit.size() > k)
            {
                if (-- hit[s[j]] == 0)
                    hit.erase(s[j]);
                    
                ++ j;
            }
            
            if (hit.size() == k)
                ret = max(ret, i - j + 1);
        }
        
        return ret;
    }
};
```
