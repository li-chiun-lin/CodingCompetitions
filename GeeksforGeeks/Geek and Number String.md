# Medium

Geek has a string $S$ of size $N$ consisting of characters from **'0'** to **'9'**. He wants to minimise the length of the string. In each minimising operation, geek can remove any two consecutive characters if they are of the form **{"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"}**.
Find the minimum possible length of the string after applying minimising operations.

```cpp
class Solution{
public:
    int minLength(string s, int n) {
        stack<int> sta;
        
        for (char c : s)
        {
            int i = c - '0';
            
            if (sta.empty())
                sta.push(i);
            else
            {
                if (abs(sta.top() - i) == 9)
                    sta.pop();
                else if (sta.top() % 2 != 0 && sta.top() == i - 1)
                    sta.pop();
                else if (sta.top() % 2 == 0 && sta.top() == i + 1)
                    sta.pop();
                else
                    sta.push(i);
            }
        }
        
        return sta.size();
    } 
};
```
