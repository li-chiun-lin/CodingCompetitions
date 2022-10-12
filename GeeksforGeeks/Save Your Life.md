# Medium

Given a string $w$, integer array $b$, character array $x$ and an integer $n$. $n$ is the size of array $b$ and array $x$. Find a substring which has the sum of the ASCII values of its every character, as maximum. ASCII values of some characters are redefined.

Note: Uppercase and lowercase both will be present in the string $w$. Array $b$ and Array $x$ contain corresponding redefined ASCII values. For each $i$, $b[i]$ contain redefined ASCII value of character $x[i]$.

```cpp
class Solution{
public:
    string maxSum(string w, char x[], int b[], int n){
        map<char, int> val;
        
        for (int i = 0; i < 26; ++i)
        {
            val[i + 'a'] = i + 'a';
            val[i + 'A'] = i + 'A';
        }
            
        for (int i = 0; i < n; ++i)
            val[x[i]] = b[i];
            
        int loc = 0;
        int glo = INT_MIN;
        string sub = "";
        string ret = "";
        
        for (char c : w)
        {
            if (loc + val[c] > val[c])
            {
                loc += val[c];
                sub.push_back(c);
            }
            else
            {
                loc = val[c];
                sub = {c};
            }
            
            if (glo < loc)
            {
                glo = loc;
                ret = sub;
            }
        }
        
        return ret;
      }
};
```
