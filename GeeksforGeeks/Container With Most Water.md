# Medium

Given $N$ non-negative integers $a_1,a_2,....a_n$ where each represents a point at coordinate $(i, a_i)$. $N$ vertical lines are drawn such that the two endpoints of line $i$ is at $(i, a_i)$ and $(i,0)$. Find two lines, which together with x-axis forms a container, such that it contains the most water.

```cpp
long long maxArea(long long A[], int len)
{
    long long l = 0;
    long long r = len - 1;
    long long ret = 0;
    
    while (l < r)
    {
        long long area = min(A[l], A[r]) * (r - l);
        ret = max(ret, area);
        
        if (A[l] < A[r])
            ++ l;
        else
            -- r;
    }
    
    return ret;
}
```
