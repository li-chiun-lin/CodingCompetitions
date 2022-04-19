# Medium

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stocks price for all **n** days. \
The span **S<sub>i</sub>** of the stocks price on a given day **i** is defined as the **maximum number of consecutive days** just before the given day, for which the price of the stock on the current day is **less than or equal to** its price on the given day. \
For example, if an array of **7** days prices is given as {**100, 80, 60, 70, 60, 75, 85**}, then the span values for corresponding 7 days are {**1, 1, 1, 2, 1, 4, 6**}.

```cpp
class Solution
{
public:
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ret(n, 1);
       
       for (int i = 1; i < n; ++i)
       {
           int j = i - ret[i];
           
           while (j >= 0 && price[j] <= price[i])
               j -= ret[j];
           
           ret[i] = i - j;
       }
       
       return ret;
    }
};
```
