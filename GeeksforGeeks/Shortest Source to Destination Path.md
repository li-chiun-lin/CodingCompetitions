# Medium

Given a 2D binary matrix $A$ (0-based index) of dimensions $N*M$. Find the minimum number of steps required to reach from ($0,0$) to ($X, Y$).
Note: You can only move left, right, up and down, and only through cells that contain $1$.

```cpp
class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        int d[] = {1, 0, -1, 0, 1};
        queue<pair<int, int>> que;
        int s = 0;
        int c = 0;
        
        if (A[0][0] == 0)
            return -1;
        
        que.push({0, 0});
        
        while (s = que.size())
        {
            while (s --)
            {
                int i = que.front().first;
                int j = que.front().second;
                que.pop();
                
                if (i == X && j == Y)
                    return c;
                    
                for (int k = 0; k < 4; ++k)
                {
                    int ii = i + d[k];
                    int jj = j + d[k + 1];
                    
                    if (0 <= ii && ii < N && 0 <= jj && jj < M && A[ii][jj])
                    {
                        A[ii][jj] = 0;
                        que.push({ii, jj});
                    }
                }
            }
            
            ++ c;
        }
        
        return -1;
    }
};
```
