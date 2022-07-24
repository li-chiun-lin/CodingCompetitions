# Easy

You are playing a game. At each level of the game, you have to choose one of the roads to go to the next level. Initially, you have $h$ amount of health and $m$ amount of money.

- If you take the first road then your health increases by $3$ and money increase by $2$.
- If you take the second road then your health decreases by $5$ and money decrease by $10$.
- If you take the third road then health decreases by $20$ and money increase by $5$.

You have to tell what is the maximum level you can reach up to under the constraints that in no two consecutive levels you can select the same road twice and once your health or money becomes $\leq 0$ game ends(that level is not counted).

```cpp
class Solution{
    vector<pair<int, int>> diff = {
        {3, 2}, 
        {-5, -10},
        {-20, 5}
    };
    
    int dfs(int h, int m, int i, vector<unordered_map<int, int>> &dp)
    {
        if (h <= 0 || m <= 0)
            return -1;
            
        if (dp[h][m])
            return dp[h][m];
            
        int hh = h + diff[i].first;
        int mm = m + diff[i].second;
        int r = INT_MIN;
        
        // the order matters.
        // we prefer path 1 over path 2, and path 2 over path 3
        for (int j = 0; j < 3; ++j)
        {
            if (j == i)
                continue;
                
            r = max(r, dfs(hh, mm, j, dp));
        }

        return dp[h][m] = r + 1; 
    }
    
    public:
        int maxLevel(int h,int m)
        {
            int r = 0;
            vector<unordered_map<int, int>> dp(h + 4);
            
            for (int i = 0; i < 3; ++i)
                r = max(r, dfs(h, m, i, dp));
                
            return r;
        }
};
```
