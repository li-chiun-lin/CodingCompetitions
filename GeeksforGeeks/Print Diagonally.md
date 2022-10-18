# Easy

Give a $N \times N$ square matrix $A$, return all the elements of its anti-diagonals from top to bottom.

```cpp
class Solution{
public:
    vector<int> downwardDigonal(int N, vector<vector<int>> A)
    {
        vector<int> ret;
        int n = N + N - 1;
        
        for (int k = 0; k < n; ++k)
            for (int i = 0, j = k; i < N; ++i, --j)
                if (0 <= j && j < N)
                    ret.push_back(A[i][j]);
        
        return ret;
    }
};
```
