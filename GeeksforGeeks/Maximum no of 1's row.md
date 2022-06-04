# Easy

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

```cpp
class Solution
{
public:
    int maxOnes (vector <vector <int>> &Mat, int N, int M)
    {
        int idx = -1;
        int ma = 0;
        
        for (int i = 0; i < N; ++i)
        {
            auto it = lower_bound(begin(Mat[i]), end(Mat[i]), 1);
            int cnt = M - (it - begin(Mat[i]));
            
            if (ma < cnt)
            {
                ma = cnt;
                idx = i;
            }
        }
        
        return idx;
    }
};
```
