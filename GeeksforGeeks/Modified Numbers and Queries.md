# Easy

Find the sum of all the numbers between the range $l$ and $r$. Here each number is represented by the sum of its prime factors.

```cpp
class Solution {
public:
    int sumOfAll(int l, int r){
        vector<bool> sieve(r + 1, true);
        vector<int> p;
        
        for (int i = 2; i <= r; ++i)
            if (sieve[i])
            {
                for (int j = i * i; j <= r; j += i)
                    sieve[j] = false;
                    
                p.push_back(i);
            }
            
        int s = 0;
        
        if (l == 1)
        {
            ++ s;
            ++ l;
        }
        
        for (int i = l; i <= r; ++i)
            for (int j = 0; j < p.size() && p[j] <= i; ++j)
                if (i % p[j] == 0)
                    s += p[j];
        
        return s;
    }
};
```

```cpp
class Solution {
public:
    int sumOfAll(int l, int r){
        vector<int> sieve(r + 1);
        
        sieve[1] = 1;
        
        for (int i = 2; i <= r; ++i)
            if (! sieve[i])
                for (int j = i; j <= r; j += i)
                    sieve[j] += i;
            
        int s = 0;
        
        for (int i = l; i <= r; ++i)
            s += sieve[i];
        
        return s;
    }
};
```
