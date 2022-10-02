# Hard

Given string $str$ of length $N$. The task is to find the minimum characters to be added at the front to make string palindrome.

```cpp
class Solution {
public:
    int minChar(string str){
        int n = str.size();
        
        for (int pivot = n; pivot > 0; -- pivot)
        {
            bool valid = true;
            
            for (int i = 0, j = pivot - 1; i < j && valid; ++i, --j)
                if (str[i] != str[j])
                    valid = false;
                    
            if (valid)
                return n - pivot;
        }
        
        return n - 1;
    }
};
```
