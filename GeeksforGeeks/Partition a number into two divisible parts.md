# Medium

Given a number (as string) and two integers **a** and **b**, divide the string in two non-empty parts such that the first part is divisible by **a** and the second part is divisible by **b**.

In case multiple answers exist, return the string such that the first non-empty part has minimum length.

```cpp
class Solution{   
public:
    string stringPartition(string S, int a, int b){
        int n = S.size();
        long long first = 0;
        long long second = 0;
        
        for (int i = 0; i < n - 1; ++i)
        {
            first *= 10;
            first += S[i] - '0';
            
            if (first % a == 0)
            {
                string sub = S.substr(i + 1, n - i - 1);
                second = stol(sub);
                
                if (second % b == 0)
                    return to_string(first) + " " + sub; 
            }
        }
        
        return "-1";
    }
};
```
