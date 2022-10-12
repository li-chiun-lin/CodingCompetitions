# Easy

Given a matrix $mat$ of size $N \times M$, where every row and column is sorted in increasing order, and a number $X$ is given. The task is to find whether element $X$ is present in the matrix or not.

```cpp
class Solution{
public:
    int matSearch (vector <vector <int>> &mat, int N, int M, int X)
    {
        int i = 0;
        int j = M - 1;
        
        while (i < N && j >= 0)
        {
            if (mat[i][j] == X)
                return 1;
                
            if (mat[i][j] < X)
                ++ i;
            else
                -- j;
        }
        
        return 0;
    }
};
```
