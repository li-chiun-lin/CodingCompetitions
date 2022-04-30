# Problem

John is attending a workshop for **N** days. He gets into trouble if he misses the workshop for two consecutive days.

## Partially accepted : Time limit exceeded

```cpp
int modInverse(long long a, int m)
{
    long long m0 = m;
    long long y = 0, x = 1;
 
    if (m == 1)
        return 0;
 
    while (a > 1) {
        long long q = a / m;
        long long t = m;
 
        m = a % m, a = t;
        t = y;
 
        y = x - q * y;
        x = t;
    }
 
    if (x < 0)
        x += m0;
 
    return x;
}

int absent (int N) {
    int m = 1e9 + 7;
    long long base = 1;
    long long acc = 0;
    long long prv = 0;
    long long s = 0;

    for (int i = 2; i <= N; ++i)
    {
        s = base + acc - prv;
        prv = s;
        acc = (acc + s) % m;
        base = (base * 2) % m;
    }

    return (s * modInverse(base, m)) % m;
}
```

## Accepted

![absent](/HackerEarth/April%20Circuits%20'22/image/absent.png)

```cpp
// cache the result
int cnt = 2;
vector<long long> g = {0, 0, 1};
vector<long long> b = {0, 1, 2};
vector<long long> a = {0, 0, 1};

int absent (int N) {
    int m = 1e9 + 7;
    long long gg = 0;

    // calculate more and cache them
    while (g.size() <= N)
    {
        // b.back() and a.back() might be smaller than g.back(),
        // hence the '+ m'.
        gg = (b.back() + a.back() - g.back() + m) % m;

        g.push_back(gg);
        a.push_back((a.back() + gg) % m);
        b.push_back((b.back() << 1) % m);
    }

    return (g[N] * modInverse(b[N])) % m;
}
```
