# Easy

Given a string $S$, find length of the longest substring with all distinct characters.

```cpp
int longestSubstrDistinctChars (string S)
{
    map<char, bool> hit;
    int ret = 0;
    int j = 0;
    int i = 0;
    int n = S.size();
    
    while (i < n)
    {
        while (hit[S[i]])
            hit[S[j ++]] = false;
        
        ret = max(ret, i - j + 1);
        
        hit[S[i ++]] = true;
    }
    
    return ret;
}
```
