# Medium

Given a string $S$ consisting of only lowercase characters. Find the lexicographically smallest string after removing exactly $k$ characters from the string. But you have to correct the value of $k$. If the length of the string is a power of $2$, reduce $k$ by half, else multiply $k$ by $2$. You can remove any $k$ character.

NOTE: If it is not possible to remove $k$ characters or if the resulting string is empty return $-1$.

```cpp
class Solution {
  public:
    string lexicographicallySmallest(string S, int k) {
        int n = S.size();
        
        if (n & (n - 1))
            k *= 2;
        else 
            k /= 2;
            
        string ret = "";
        
        for (char c : S)
        {
            while (k && ret.size() && ret.back() > c)
            {
                ret.pop_back();
                -- k;
            }
            
            ret.push_back(c);
        }
        
        while (k && ret.size())
        {
            ret.pop_back();
            -- k;
        }
        
        return k == 0 && ret.size() ? ret : "-1";
    }
};
```
