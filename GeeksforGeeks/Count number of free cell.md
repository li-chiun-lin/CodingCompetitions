# Easy

Suppose you have a Matrix size $n \times n$, and given an integer $k$ and a set of coordinates $arr$ of size $k \times 2$. Initially, the matrix contains only $0$. You are given $k$ tasks and for each task, you are given two coordinates $(r = arr[i] [0],c = arr[i] [1])$, where coordinates $(r,c)$ denotes $r$-th row and $c$-th column of the given matrix.

You have to perform each task sequentially in the given order. For each task, You have to put $1$ in all $r$-th row cells and all $c$-th columns cells.

After each task, you have to calculate the number of $0$ present in the matrix and return it.

```cpp
class Solution{
public:
    vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
        vector<long long int> ret(k);
        unordered_set<int> row, col;
        
        for (int i = 0; i < k; ++i)
        {
            row.insert(arr[i][0]);
            col.insert(arr[i][1]);
          
            ret[i] = (row.size() - n) * (col.size() - n);
        }
        
        return ret;
    }
};
```
