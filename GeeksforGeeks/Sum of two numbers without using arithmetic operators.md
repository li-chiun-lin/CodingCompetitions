# Easy

Given two integers **a** and **b**. Find the **sum** of two numbers **without using arithmetic operators**.

```cpp
class Solution
{
    public:
    int sum(int a , int b)
    {
        int car = 0;
        int sum = 0;
        int mask = 0x01;
        
        while (a || b || car)
        {
            int bit1 = a & 1;
            int bit2 = b & 1;
            
            if (bit1 && bit2)
            {
                if (car)
                    sum |= mask;
                else
                    car = 1;
            }
            else if (bit1 || bit2)
            {
                if (! car)
                    sum |= mask;
            }
            else
            {
                if (car)
                    sum |= mask;
                
                car = 0;
            }
            
            a >>= 1;
            b >>= 1;
            
            mask <<= 1;
        }
        
        return sum;
    }
};
```
