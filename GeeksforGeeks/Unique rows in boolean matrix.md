# Easy

Given a binary matrix, your task is to find all unique rows of the given matrix.

```cpp
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    vector<vector<int>> ret;
    map<long long, bool> hit;
    
    for (int i = 0; i < row; ++i)
    {
        long long bit = 0;
        
        for (int j = 0; j < col; ++j)
            if (M[i][j])
                bit |= 1 << j;
                
        if (! hit[bit])
        {
            hit[bit] = true;
            
            ret.push_back(vector<int>(M[i], M[i] + col));
        }
    }
    
    return ret;
}
```
