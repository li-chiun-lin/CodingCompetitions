# Medium

Given two integers $L$ and $R$ find the difference of number of composites and primes between the range $L$ and $R$ (both inclusive).

```cpp
class Solution {
    public:
        int Count(int L, int R){
            vector<bool> sieve(R + 1, true);
            
            for (int i = 2; i * i <= R; ++i)
                if (sieve[i])
                    for (int j = i * i; j <= R; j += i)
                        sieve[j] = false;
                        
            int diff = 0;
            
            for (int i = L; i <= R; ++i)
                diff += sieve[i] ? -1 : 1;

            return L == 1 ? diff + 1 : diff;
        }

};
```
