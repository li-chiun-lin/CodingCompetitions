# Medium

Given a list of non negative integers, arrange them in such a manner that they form the largest number possible. The result is going to be very large, hence return the result in the form of a string.

```cpp
class cmp
{
public:
    bool operator()(string &a, string &b)
    {
        return a + b > b + a;
    }
};

class Solution{
public:
    string printLargest(vector<string> &arr) {
        sort(begin(arr), end(arr), cmp());
        
        string ret = "";
        
        for (string &s : arr)
            ret += s;
            
        return ret;
    }
};
```
