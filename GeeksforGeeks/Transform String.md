# Medium

Given two strings **A** and **B**. Find the minimum number of steps required to transform string **A** into string **B**.

The only allowed operation for the transformation is selecting a character from string **A** and inserting it in the beginning of string **A**.

```cpp
class Solution
{
    public:
    int transform (string A, string B)
    {
        map<char, int> hit;
        
        for (char c : A)
            ++ hit[c];
            
        for (char c : B)
            -- hit[c];
            
        for (auto &h : hit)
            if (h.second)
                return -1;
               
        int j = B.size() - 1;
        
        for (int i = A.size() - 1; i >= 0; --i)
            if (A[i] == B[j])
                -- j;
                
        return j + 1;
        
    }
};
```
