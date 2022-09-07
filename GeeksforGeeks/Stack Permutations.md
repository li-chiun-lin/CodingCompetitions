# Medium

You are given two arrays $A$ and $B$ of unique elements of size $N$. Check if one array is a stack permutation of the other array or not.

Stack permutation means that one array can be created from another array using a stack and stack operations.

```cpp
class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int> sta;
        int i = 0;
        int j = 0;
        
        while (i < N && j < N)
        {
            sta.push(A[i ++]);
            
            while (sta.size() && j < N && sta.top() == B[j])
            {
                sta.pop();
                ++ j;
            }
            
            if (sta.size() && j == N)
                return 0;
        }
        
        return sta.empty();
    }
};
```
