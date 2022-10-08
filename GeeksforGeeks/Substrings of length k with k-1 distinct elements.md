# Medium

Given a String $S$ and an integer $K$. Find the count of all substrings of length $K$ which have exactly $K-1$ distinct characters.

```cpp
class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        int n = S.size();
        map<char, int> hit;
        int ret = 0;
        
        for (int i = 0; i < K - 1; ++i)
            ++ hit[S[i]];
            
        for (int i = K - 1; i < n; ++i)
        {
            ++ hit[S[i]];
            
            if (hit.size() == K - 1)
                ++ ret;
                
            if (-- hit[S[i - (K - 1)]] == 0)
                hit.erase(S[i - (K - 1)]);
        }
        
        return ret;
    }
};
```
