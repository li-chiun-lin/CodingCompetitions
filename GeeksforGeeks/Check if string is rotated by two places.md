# Easy

Given two strings **a** and **b**. The task is to find if the string **b** can be obtained by rotating another string **a** by exactly **2** places.

```cpp
class Solution
{
    public:
    bool check(string &s1, string &s2, int offset, int n)
    {
        bool same = true;
        for (int i = offset, j = 0; j < n && same; i = (i + 1) % n, ++j)
            same = s1[i] == s2[j];
            
        return same;
    }
    
    bool isRotated(string str1, string str2)
    {
        int n = str1.size();
        
        str1.push_back(str1[0]);
        str1.push_back(str1[1]);
        str2.push_back(str2[0]);
        str2.push_back(str2[1]);  
        
        return check(str1, str2, 2, n) || check(str2, str1, 2, n); 
    }
};
```
