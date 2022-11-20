# Medium

Given a number $N$. Find the maximum possible LCM that can be attained by any three numbers less than or equal to $N$.

Note- LCM stands for Lowest Common Multiple. Also, Numbers can be repeated.

```cpp
class Solution {
  public:
    long long lcmTriplets(long long N) {
        if (N < 3) 
            return N;
            
        if (N % 2) 
            return N * (N - 1) * (N - 2);
            
        if (N % 3) 
            return N * (N - 1) * (N - 3);
            
        return (N - 1) * (N - 2) * (N - 3);
    }
};
```
