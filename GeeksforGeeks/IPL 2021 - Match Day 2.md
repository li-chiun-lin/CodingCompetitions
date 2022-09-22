# Medium

Due to the rise of covid-19 cases in India, this year BCCI decided to organize knock-out matches in IPL rather than a league.

Today is matchday 2 and it is between the most loved team Chennai Super Kings and the most underrated team - Punjab Kings. Stephen Fleming, the head coach of CSK, analyzing the batting stats of Punjab. He has stats of runs scored by all $N$ players in the previous season and he wants to find the maximum score for each and every contiguous sub-list of size $K$ to strategize for the game.

```cpp
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        vector<int> ret;
        deque<int> dq;
        
        for (int i = 0; i < k - 1; ++i)
        {
            while (dq.size() && arr[dq.back()] < arr[i])
                dq.pop_back();
                
            dq.push_back(i);
        }
        
        for (int i = k - 1; i < n; ++i)
        {
            if (dq.size() && dq.front() == i - k)
                dq.pop_front();
                
            while (dq.size() && arr[dq.back()] < arr[i])
                dq.pop_back();
                
            dq.push_back(i);
            ret.push_back(arr[dq.front()]);
        }
        
        return ret;
    }
};
```
