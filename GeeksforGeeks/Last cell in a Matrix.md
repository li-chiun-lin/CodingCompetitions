# Easy

Given a binary matrix of dimensions  with $R$ rows and $C$ columns. Start from cell $(0, 0)$, moving in the right direction. Perform the following operations:

- If the value of $matrix[i] [j]$ is $0$, then traverse in the same direction and check the next value.
- If the value of $matrix[i] [j]$ is $1$, then update $matrix[i] [j]$ to $0$ and change the current direction clockwise.

Find the index of the cell where you will be forced to exit the matrix while performing the given traversal.

```cpp
class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        int i = 0, j = 0;
        int dir = 0;
        int d[] = {0, 1, 0, -1, 0};
        
        while (0 <= i && i < R && 0 <= j && j < C)
        {
            if (matrix[i][j])
            {
                matrix[i][j] = 0;
                dir = (dir + 1) % 4;
            }
            
            i += d[dir];
            j += d[dir + 1];
        }
        
        return {i - d[dir], j - d[dir + 1]};
    }
};
```
