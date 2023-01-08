# Easy

Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.

```cpp
class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string, int> freq;
        
        for (int i = 0; i < n; ++i)
            ++ freq[arr[i]];
            
        vector<pair<int, string>> vec;
        
        for (auto& h : freq)
            vec.push_back({h.second, h.first});
            
        sort(begin(vec), end(vec), greater<>());
        
        return vec[1].second;
    }
};
```
