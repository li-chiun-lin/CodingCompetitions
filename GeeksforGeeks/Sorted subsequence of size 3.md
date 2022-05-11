# Easy

Given an array **A** of **N** integers, find any **3** elements in it such that **A[i] < A[j] < A[k]** and **i < j < k**.

```cpp
class Solution{
public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        vector<int> ret;
        vector<int> larger(N, -1);
        stack<pair<int, int>> sta;
        
        for (int i = N - 1; i >= 0; --i)
        {
            while (sta.size() && sta.top().first <= arr[i])
                sta.pop();
                
            if (sta.size())
                larger[i] = sta.top().second;
                
            sta.push({arr[i], i}); 
        }
        
        for (int i = 0; i < N; ++i)
            if (larger[i] != -1 && larger[larger[i]] != -1)
                return {arr[i], arr[larger[i]], arr[larger[larger[i]]]};
        
        return {};
    }
};
```

```cpp
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        stack<int> sta;
        
        for (int i = N - 1; i >= 0; --i)
        {
            while (sta.size() && sta.top() <= arr[i])
                sta.pop();
   
            sta.push(arr[i]); 
            
            if (sta.size() == 3)
            {
                vector<int> ret;
                
                while (sta.size())
                {
                    ret.push_back(sta.top());
                    sta.pop();
                }
                
                return ret;
            }
        }
        
        return {};
    }
};
```
