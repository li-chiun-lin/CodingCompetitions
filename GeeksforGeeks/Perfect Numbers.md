# Easy

Given a number $N$, check if a number is perfect or not.

A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number.

```cpp
class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long sum = 1;
        
        for (long long i = 2; i * i <= N; ++i)
            if (N % i == 0)
                sum += i + (N / i);

        return N == 1 ? 0 : sum == N;
    }
};
```
