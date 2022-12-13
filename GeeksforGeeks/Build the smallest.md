# Medium

Given a number $k$ and string $num$ of digits ($0$ to $9$) denoting a positive integer. Find a string denoting the lowest integer number possible by removing $k$ digits from $num$, without changing their order.

Note: $num$ will not contain any leading zero.

```cpp
string buildLowestNumber(string num, int k)
{
    deque<char> sta;
    
    for (char c : num)
    {
        while (k && sta.size() && sta.back() > c)
        {
            -- k;
            sta.pop_back();
        }
        
        sta.push_back(c);
    }
    
    while (k && sta.size())
    {
        -- k;
        sta.pop_back();
    }
    
    while (sta.size() && sta.front() == '0')
        sta.pop_front();
    
    if (sta.empty())
        return "0";
        
    return string(begin(sta), end(sta));
}
```
