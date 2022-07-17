# Medium

Given a binary matrix $M$ with $R$ rows and $C$ columns, where each element of the matrix will be $0$ or $1$.

Find the largest square that can be formed with center $(i, j)$ and contains atmost $K$ $1$’s. There are $Q$ queries, a single query has two integers denoting the centre $(i,j)$ of the square.

```cpp
class Solution {
  public:
    vector<int> largestSquare(vector<vector<int>> M, int R, int C, int K, int Q, int q_i[], int q_j[]) {
        vector<vector<int>> acc(R + 1, vector<int>(C + 1));
        vector<int> ret(Q);
        
        // accumulation matrix
        acc[1][1] = M[0][0];
        
        for (int i = 1; i < R; ++i)
            acc[i + 1][1] = acc[i][1] + M[i][0];
            
        for (int j = 1; j < C; ++j)
            acc[1][j + 1] = acc[1][j] + M[0][j];
            
        for (int i = 1; i < R; ++i)
            for (int j = 1; j < C; ++j)
                acc[i + 1][j + 1] = M[i][j] + acc[i][j + 1] + acc[i + 1][j] - acc[i][j];
                
        for (int i = 0; i < Q; ++i)
        {
            int k = 0;
            
            while (true)
            {
                // the top, button, left and right from center i, j
                int t = q_i[i] - k;
                int b = q_i[i] + k;
                int l = q_j[i] - k;
                int r = q_j[i] + k;
                
                if (t < 0 || R <= b || l < 0 || C <= r)
                    break;
                
                int cnt = acc[b + 1][r + 1] - acc[t][r + 1] - acc[b + 1][l] + acc[t][l];
                
                if (cnt > K)
                    break;
                    
                ret[i] = 2 * k + 1;
                
                ++ k;
            }
        }
        
        return ret;
    }
};
```
