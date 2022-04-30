# Medium

There are Infinite People Standing in a row, indexed from **1**.
A person having index **'i'** has strength of **(i*i)**.
You have Strength **'P'**. You need to tell what is the maximum number of People You can Kill With your Strength **P**.
You can only Kill a person with strength **'X'** if **P >= 'X'** and after killing him, Your Strength decreases by **'X'**.

```cpp
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        long long i = 0;
        long long ii = 0;
        
        while (n >= 0)
        {
            ++i;
            ii = i * i;
            n -= ii;
        }
        
        return i - 1;
    }
};
```
