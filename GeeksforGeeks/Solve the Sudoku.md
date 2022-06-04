# Hard

Given an incomplete Sudoku configuration in terms of a $9 * 9$  2-D square matrix ($grid[][]$), the task to find a solved Sudoku.

```cpp
class Solution 
{
    bool dfs(int grid[N][N], int x, int y, vector<int> &row, vector<int> &col, vector<vector<int>> &squ)
    {
        // when we finally reach over the last cell, we know it's donn.
        if (x == 8 && y == 9)
            return true;
        
        // each the end of a row, move to next row.
        if (y == 9)
            return dfs(grid, x + 1, 0, row, col, squ);
            
        // if the cell has already been filled, move to next cell.
        if (grid[x][y])
            return dfs(grid, x, y + 1, row, col, squ);
            
        // for an empty cell, we check every possible digit from 1 to 9.
        for (int v = 1; v <= 9; ++v)
        {
            int vv = 1 << v;
            
            // if v has already been used some where in the same row, 
            // if v has already been used some where in the same column, 
            // if v has already been used some where inside the same nine-square division, 
            if ((row[x] & vv) || (col[y] & vv) || (squ[x / 3][y / 3] & vv))
                continue;
                
            // put v
            grid[x][y] = v;
            row[x] |= vv;
            col[y] |= vv;
            squ[x / 3][y / 3] |= vv;
            
            // move to next cell
            if (dfs(grid, x, y + 1, row, col, squ))
                return true;
                
            // backtracking
            grid[x][y] = 0;
            row[x] ^= vv;
            col[y] ^= vv;
            squ[x / 3][y / 3] ^= vv;
        }
        
        // exxhausted and failed.
        return false;
    }
    
public:
    bool SolveSudoku(int grid[N][N])  
    {
        // record which digit has already been used in each row and each column.
        // we don't mind the grid[x][y] == 0, it will provide a 1 in our row[x] and col[y], 
        // but it won't hurt.
        vector<int> row(9), col(9);
        vector<vector<int>> squ(3, vector<int>(3));
        
        for (int i = 0; i < 9; ++i)
            for (int j = 0; j < 9; ++j)
            {
                row[i] |= 1 << grid[i][j];
                col[j] |= 1 << grid[i][j];
            }
            
        // record which digit has already been used in each nine-square division.
        for (int r = 0; r < 3; ++ r)
            for (int c = 0; c < 3; ++ c)
                for (int i = 0; i < 3; ++i)
                    for (int j = 0; j < 3; ++j)
                        squ[r][c] |= 1 << grid[r * 3 + i][c * 3 + j];
            
        return dfs(grid, 0, 0, row, col, squ);
    }
    
    void printGrid (int grid[N][N]) 
    {
        for (int i = 0; i < 9; ++i)
            for (int j = 0; j < 9; ++j)
                cout << grid[i][j] << " ";
    }
};
```
