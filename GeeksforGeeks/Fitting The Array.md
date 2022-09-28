# Easy

Geek is playing an array game. He is weak in the concepts of arrays. Geek is given two arrays $arr$ and $brr$ of the same size $n$. The array $arr$ will be said to fit in array $brr$ if by arranging the elements of both arrays, there exists a solution such that $i$-th element of $arr$ is less than or equal to $i$-th element of $brr$, for each $i$, $0 \leq i < n$.

Help Geek find if the given array $arr$ will fit in array $brr$ or not.

```cpp
class Solution{
public:
    bool isFit(int arr[], int brr[], int n){
        sort(arr, arr + n);
        sort(brr, brr + n);
        
        for (int i = 0; i < n; ++i)
            if (arr[i] > brr[i])
                return false;
                
        return true;
    }
};
```
