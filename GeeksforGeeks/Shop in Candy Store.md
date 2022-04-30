# Easy

In a candy store, there are **N** different types of candies available and the prices of all the **N** different types of candies are provided to you.\
You are now provided with an attractive offer.
You can buy a single candy from the store and get at most **K** other candies (all are different types) for free.

Now you have to answer two questions. \
Firstly, you have to find what is the **minimum** amount of money you have to spend to buy all the **N** different candies. \
Secondly, you have to find what is the **maximum** amount of money you have to spend to buy all the N different candies.
In both the cases you must utilize the offer i.e. you buy one candy and get **K** other candies for free.

```cpp
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        int b = ceil((float)N / (K + 1));
        vector<int> ret(2);
        
        sort(candies, candies + N);
        
        for (int i = 0; i < b; ++i)
        {
            ret[0] += candies[i];
            ret[1] += candies[N - 1 - i];
        }
        
        return ret;
    }
};
```
