# Medium

Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.If it cannot reach the target position return $-1$.

```cpp
class Solution {
public:
    int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
        int di[] = {1, 1, -1, -1, 2, 2, -2, -2};
        int dj[] = {2, -2, 2, -2, 1, -1, 1, -1};
        
        -- KnightPos[0];
        -- KnightPos[1];
        -- TargetPos[0];
        -- TargetPos[1];
        
        int step = 0;
        int size = 0;
        vector<vector<bool>> visited(N, vector<bool>(N));
        queue<pair<int, int>> que;
        
        que.push({KnightPos[0], KnightPos[1]});
        visited[KnightPos[0]][KnightPos[1]] = true;
        
        while (size = que.size())
        {
            while (size --)
            {
                auto u = que.front();
                que.pop();
                
                if (u.first == TargetPos[0] && u.second == TargetPos[1])
                    return step;
                    
                for (int k = 0; k < 8; ++k)
                {
                    int i = u.first + di[k];
                    int j = u.second + dj[k];
                    
                    if (0 <= i && i < N && 0 <= j && j < N && ! visited[i][j])
                    {
                        visited[i][j] = true;
                        que.push({i, j});
                    }
                }
            }
            
            ++ step;
        }
        
        return -1;
    }
};
```
