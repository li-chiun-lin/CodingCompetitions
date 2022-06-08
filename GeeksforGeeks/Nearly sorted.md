# Medium

Given an array of $n$ elements, where each element is at most $k$ away from its target position, you need to sort the array optimally.

```cpp
class Solution
{
public:
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int> ret;
        priority_queue<int, vector<int>, greater<>> pq;
        
        for (int i = 0; i < num; ++i)
        {
            pq.push(arr[i]);
            
            if (pq.size() > K)
            {
                ret.push_back(pq.top());
                pq.pop();
            }
        }
        
        while (pq.size())
        {
            ret.push_back(pq.top());
            pq.pop();
        }
        
        return ret;
    }
};
```
