# Medium

Given an array containing $N$ integers and an integer $K$, your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value $K$.

```cpp
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    {
        unordered_map<int, int> hit;
        int sum = 0;
        int ret = 0;
        
        for (int i = 0; i < N; ++i)
        {
            sum += A[i];
            
            if (hit[sum] == 0)
                hit[sum] = i + 1;
                
            if (sum == K)
                ret = max(ret, i + 1);
                
            if (hit[sum - K])
                ret = max(ret, i - hit[sum - K] + 1);
        }
        
        return ret;
    } 
};
```
