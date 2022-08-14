# Medium

Given a string $S$ consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the $i$-th place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

```cpp
class Solution
{
public:
    string caseSort(string str, int n)
    {
        map<char, int> hit;
        
        for (char c : str)
            ++ hit[c];
            
        char u = 'A';
        char l = 'a';
        
        for (int i = 0; i < n; ++i)
        {
            if (isupper(str[i]))
            {
                while (hit[u] == 0)
                    ++ u;
                    
                str[i] = u;
                -- hit[u];
            }
            else
            {
                while (hit[l] == 0)
                    ++ l;
                    
                str[i] = l;
                -- hit[l];
            }
        }
        
        return str;
    }
};
```
