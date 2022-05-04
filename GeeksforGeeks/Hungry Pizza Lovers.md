# Easy

Dominos Pizza has hungry customers waiting in the queue. Each unique order is placed by a customer at time **x[i]**, and the order takes **y[i]** units of time to complete.

You have information on all **n** orders, Find the order in which all customers will receive their pizza and return it. If two or more orders are completed at the same time then sort them by non-decreasing order number.

```cpp
vector<int> permute(vector<vector<int>> &arr, int n)
{
    vector<vector<int>> vec(n);
    vector<int> ret(n);
    
    for (int i = 0; i < n; ++i)
        vec[i] = {arr[i][0] + arr[i][1], i + 1};
        
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; ++i)
        ret[i] = vec[i][1];
        
    return ret;
}
```
