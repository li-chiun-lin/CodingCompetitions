# Easy

Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,
Take the set of integers

```text
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,…
```

First, delete every second number, we get following reduced set.

```text
1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…
```

Now, delete every third number, we get

```text
1, 3, 7, 9, 13, 15, 19,…
```

Continue this process indefinitely.

Any number that does NOT get deleted due to above process is called “lucky”.

```cpp
class Solution{
public:
    bool isLucky(int n) {
        for (int i = 2; i <= n; n -= n / i ++)
            if (n % i == 0)
                return false;
        
        return true;
    }
};
```
