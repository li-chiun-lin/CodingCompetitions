# Medium

Given a 2D matrix **M** of dimensions **RxC**. Find the maximum sum submatrix in it.

## My Solution

![img](/GeeksforGeeks/image/Maximum_sum_Rectangle_1.png) \
![img](/GeeksforGeeks/image/Maximum_sum_Rectangle_2.png) \
![img](/GeeksforGeeks/image/Maximum_sum_Rectangle_3.png) \

```cpp
class Solution {
  public:
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        vector<vector<int>> acc(R, vector<int>(C + 1));
        int glo = INT_MIN;
        
        // prefix-sum array
        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
                acc[i][j + 1] = acc[i][j] + M[i][j];
                
        for (int i = 0; i < C; ++i)
        {
            for (int j = i; j < C; ++j)
            {
                // kadane
                int loc = 0;
                
                for (int k = 0; k < R; ++k)
                {
                    // use prefix-sum to avoid repeated accumulation.
                    loc += acc[k][j + 1] - acc[k][i]; 
                    glo = max(glo, loc);
                    loc = max(loc, 0);
                }
            }
        }
        
        return glo;
    }
};
```
