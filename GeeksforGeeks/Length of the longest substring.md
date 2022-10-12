# Medium

Given a string $S$, find the length of the longest substring without repeating characters.

```cpp
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        int ret = 0;
        int j = 0;
        int mask = 0;
        
        for (int i = 0; i < S.size(); ++i)
        {
            while (mask & 1 << (S[i] - 'a'))
                mask ^= 1 << (S[j ++] - 'a');
            
            mask |= 1 << (S[i] - 'a');
                
            ret = max(ret, i - j + 1);
        }
        
        return ret;
    }
};
```
