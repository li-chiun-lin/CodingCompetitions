# Medium

Given a $dictionary$ of distinct $words$ and an $M \times N$ $board$ where every cell has one character. Find all possible $words$ from the $dictionary$ that can be formed by a sequence of adjacent characters on the $board$. We can move to any of $8$ adjacent characters

```cpp
class Solution {
    bool dfs(vector<vector<char>> & board, string &w, int i, int j, int k)
    {
        int m = board.size();
        int n = board[0].size();
        
        // match or not.
        if (board[i][j] != w[k])
            return false;
            
        // at the end of word
        if (k == w.size() - 1)
            return true;
            
        // mark as visited.
        board[i][j] = 0;
            
        // 8 directions
        for (int ii = -1; ii <= 1; ++ii)
            for (int jj = -1; jj <= 1; ++jj)
            {
                // skip the central
                if (ii == 0 && jj == 0)
                    continue;
                    
                int iii = i + ii;
                int jjj = j + jj;
                
                // check within board
                if (0 <= iii && iii < m && 0 <= jjj && jjj < n)
                {
                    // check next char
                    if (dfs(board, w, iii, jjj, k + 1))
                    {
                        // backtracking for next w.
                        board[i][j] = w[k];
                        return true;
                    } 
                }
            }
           
        // backtracking for current w.
        board[i][j] = w[k];
        
        return false;
    }
    
public:
    vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
        int m = board.size();
        int n = board[0].size();
        vector<string> ret;
        
        for (string &w : dictionary)
        {
            bool found = false;
            
            for (int i = 0; i < m && ! found; ++i)
                for (int j = 0; j < n && ! found; ++j)
                    found = dfs(board, w, i, j, 0);
                
            if (found)
                ret.push_back(w);
        }
            
        sort(begin(ret), end(ret));
        
        return ret;
    }
};
```
