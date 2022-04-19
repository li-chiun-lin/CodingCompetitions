# Easy

Given an array of **0**s and **1**s. Find the length of the **largest subarray** with **equal** number of **0**s and **1**s.

```cpp
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        map<int, set<int>> ss;
        int c = 0;
        
        ss[0].insert(0);
        
        for (int i = 0; i < N; ++i)
        {
            c += arr[i] ? 1 : -1;
            ss[c].insert(i + 1);
        }
        
        int m = 0;
        
        for (auto &h : ss)
            m = max(m, *h.second.rbegin() - *h.second.begin());
        
        return m;
    }
};
```

```cpp
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        map<int, int> ss;
        ss[0] = -1;
        
        int r = 0;
        int c = 0;
        
        for (int i = 0; i < N; ++i)
        {
            c += arr[i] ? 1 : -1;
            
            if (ss.find(c) != ss.end())
                r = max(r, i - ss[c]);
            else
                ss[c] = i;
        }
        
        return r;
    }
};
```
