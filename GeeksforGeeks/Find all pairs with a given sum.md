# Easy

Given two unsorted arrays $A$ of size $N$ and $B$ of size $M$ of distinct elements, the task is to find all pairs from both arrays whose sum is equal to $X$.

```cpp
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>> ret;
        map<int, bool> hit;
        
        for (int i = 0; i < N; ++i)
            hit[A[i]] = true;
            
        for (int j = 0; j < M; ++j)
            if (hit[X - B[j]])
                ret.push_back({X - B[j], B[j]});
                
        sort(begin(ret), end(ret));
                
        return ret;
    }
};
```
