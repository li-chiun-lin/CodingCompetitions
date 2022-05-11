# Easy

Geek lost the password of his super locker. He remembers the number of digits **N** as well as the sum **S** of all the digits of his password. He know that his password is the largest number of **N** digits that can be made with given sum **S**. As he is busy doing his homework, help him retrieving his password.

```cpp
class Solution
{
public:
    string largestNumber(int n, int sum)
    {
        string ret(n, '0');
        int i = 0;
        
        while (sum > 0 && i < n)
        {
            int d = min(9, sum);
            sum -= d;
            ret[i ++] += d;
        }
        
        return sum ? "-1" : ret;
    }
};
```
