# Medium

Given an array **Arr[]** of size **N**. For every element in the array, the task is to find the index of the farthest element in the array to the right which is smaller than the current element. If no such number exists then print **-1**.

```cpp
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        vector<int> ret(N, -1), val(N);
        
        val[N - 1] = Arr[N - 1];
        
        for (int i = N - 2; i >= 0; --i)
        {
            auto it = lower_bound(val.begin() + i + 1, val.end(), Arr[i]);
            ret[i] = it == val.begin() + i + 1 ? -1 : it - val.begin() - 1;
            val[i] = min(val[i + 1], Arr[i]);
        }
        
        return ret;
    }
};
```
