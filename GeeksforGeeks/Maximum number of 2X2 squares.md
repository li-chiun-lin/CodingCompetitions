# Easy

Given the base (in units) of a right-angled isoceles traingle, find the maximum number of $2\times2$ squares that can fit in the triangle with given base.

```cpp
class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        auto n = base / 2 - 1;
        return n * (n + 1) / 2;
    }
};
```
