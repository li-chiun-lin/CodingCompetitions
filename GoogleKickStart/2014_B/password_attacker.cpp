/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;


long long pow(long long a, long long p, long long m)
{
    long long r = 1;

    while (p > 0)
    {
        if (p & 1)
            r = (r * a) % m;

        a = (a * a) % m;
        p >>= 1;
    }

    return r;
}

long long inv(long long a, long long p)
{
    return pow(a, p - 2, p);
}

long long cmb(long long n, long long k, long long m, vector<long long>& fac)
{
    return (((fac[n] * inv(fac[k], m)) % m) * inv(fac[n - k], m)) % m; 
}

long long f(long long M, long long N, long long mod, vector<long long>& fac, vector<long long>& dp)
{
    if (M == 1)
        return 1;

    if (dp[M])
        return dp[M];

    long long sum = 0;

    for (int i = 1; i < M; ++i)
        sum = (sum + (cmb(M, i, mod, fac) * f(i, N, mod, fac, dp))) % mod;

    return dp[M] = (pow(M, N, mod) - sum + mod) % mod;
}

int password(int M, int N)
{
    long long mod = 1e9 + 7;
    vector<long long> fac(M + 1);
    fac[0] = 1;

    vector<long long> dp(M + 1);

    for (long long i = 1; i <= M; ++i)
        fac[i] = (i * fac[i - 1]) % mod;

    return f(M, N, mod, fac, dp);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int M, N;
        cin >> M >> N;

		cout << "Case #" << t << ": ";
		cout << password(M, N) << "\n";
	}

	return 0;
}

