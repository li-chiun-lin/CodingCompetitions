# Problem

Mike and Bob were playing with binary numbers. Mike was quite confident with his problem-solving skills, so he asks Bob to give him a challenge.

Bob gave him some Queries **Q**. For each query, Mike's task is to count the total numbers **distinct** of sequences that contain **0's** and **1's** of each length in the range **[L, R]** **inclusive**.

To make these tasks more challenging, Bob wanted that **0's must** be present in a group of lengths **divisible by K**.

Mike needs your help to accomplish this challenge.

- Two Sequences **A** and **B** are Distinct, if their lengths are not same or there exists an index **i**, for which $A[i] \neq B[i]$.
- The **count** of sequences can be huge. So, Output the count mod $10^9 + 7$.

Find all the total numbers of unique sequences which follow the above conditions for each query.

## Partially accepted: Time limit exceeded

```cpp
long long modInverse(long long a)
{
    long long m = 1e9 + 7;
    long long m0 = m;
    long long y = 0;
    long long x = 1;
 
    if (m == 1)
        return 0;
 
    while (a > 1) {
        long long q = a / m;
        long long t = m;
 
        m = a % m;
        a = t;
        t = y;
 
        y = x - q * y;
        x = t;
    }
 
    while (x < 0)
        x += m0;
 
    return x;
}

vector<long long> fac(1, 1);
vector<long long> inv(1, 1);

int max_count (int K, int L, int R) {
    int m = 1e9 + 7;
    vector<long long> len(R + 1, 1);
    vector<long long> acc(R + 2);

    while (fac.size() <= R)
    {
        fac.push_back((fac.back() * fac.size()) % m);
        inv.push_back(modInverse(fac.back()));
    }

    for (int i = 1; i <= R; ++i)
    {
        if (i % K == 0)
            ++ len[i];

        int q = 0;
        int ii = i;

        while (ii > K)
        {
            ii -= K;
            ++ q;

            len[i] = (len[i] + ((((fac[ii + q] * inv[ii]) % m) * inv[q]) % m)) % m;
        }

        acc[i] = (acc[i - 1] + len[i]) % m;
    }
   
   return acc[R] - acc[L - 1];
}
```
