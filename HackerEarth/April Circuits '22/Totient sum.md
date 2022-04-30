# Problem

Given a positive integer, **N**.

Euler phi function denoted by $\phi(n)$ counts the number of positive integers up to **n** that are co-prime to **n**. \
Let us have a function **F** as: \
$F(x) = \sum_{i=1}^{x}\sum_{j=1}^{i}\phi(i) \times \phi(j)$ \

Your task is to calculate the value of **F(N)**. Since the value can be large output it modulo **$10^9 + 7$.**

```cpp
#include<bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int ret = n;

    for (int p = 2; p * p <= n; ++p)
    {
        if (n % p)
            continue;

        while (n % p == 0)
            n /= p;

        ret -= ret / p;
    }

    // n is prime.
    if (n > 1)
        ret -= ret / n;

    return ret;
}

int Solve (int N) {
    int m = 1e9 + 7;
    int euler = 0;
    long long acc = 0;
    int ret = 0;

    for (int i = 1; i <= N; ++i)
    {
        euler = phi(i);
        acc = (acc + euler) % m;
        ret = (ret + (acc * euler) % m) % m;
    }

    return ret;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;

        int out_;
        out_ = Solve(N);
        cout << out_;
        cout << "\n";
    }
}
```
