# Easy

You are given two arrays $A$ and $B$ of equal length $N$. Your task is to pair each element of array $A$ to an element in array $B$, such that the sum of the absolute differences of all the pairs is minimum.

```cpp
class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        long long sum = 0;
        int n = A.size();
        
        sort(begin(A), end(A));
        sort(begin(B), end(B));
        
        for (int i = 0; i < n; ++i)
            sum += abs(A[i] - B[i]);
        
        return sum;
    }
};
```
