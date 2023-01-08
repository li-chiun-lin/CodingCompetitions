# Easy

Given a square $matrix$ of size $N \times N$. The task is to rotate it by $90$ degrees in anti-clockwise direction without using any extra space.

```cpp
class Solution
{   
public:
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for (auto& r : matrix)
            reverse(begin(r), end(r));
            
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < i; ++j)
                swap(matrix[i][j], matrix[j][i]);
    } 
};
```
