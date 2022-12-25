/*

*/

#define _USE_MATH_DEFINES

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int pow(long long a, long long x, long long m)
{
	long long r = 1;

	while (x)
	{
		if (x & 1)
			r = (r * a) % m;

		a = (a * a) % m;
		x >>= 1;
	}

	return r % m;
}

int gym_small(long long A, long long B, long long N, long long K)
{
	vector<int> iA(N + 1), jB(N + 1);
	
	for (long long i = 1; i <= N; ++i)
	{
		iA[i] = pow(i, A, K);
		jB[i] = pow(i, B, K);
	}

	long long ret = 0;

	for (long long i = 1; i <= N; ++i)
	{
		for (long long j = 1; j <= N; ++j)
		{
			if (i == j)
				continue;

			if ((iA[i] + jB[j]) % K == 0)
				++ ret;
		}
	}

	return ret;
}

int gym(long long A, long long B, long long N, long long K)
{
	vector<long long> iA_mod(K), jB_mod(K);
	long long ij = 0;
	long long mod = 1e9 + 7;
	long long q = N / K;

	for (long long i = 0; i < K; ++i)
	{
		long long iA = pow(i, A, K);
		long long jB = pow(i, B, K);

		iA_mod[iA] += q;
		jB_mod[jB] += q;

		iA_mod[iA] %= mod;
		jB_mod[jB] %= mod;

		if ((iA + jB) % K == 0)
			ij = (ij + q) % mod;
	}
	
	for (long long i = 1; i <= N % K; ++i)
	{
		long long iA = pow(i, A, K);
		long long jB = pow(i, B, K);

		++ iA_mod[iA];
		++ jB_mod[jB];

		if ((iA + jB) % K == 0)
			++ ij;
	}

	for (int i = 0; i < K; ++i)
	{
		iA_mod[i] %= mod;
		jB_mod[i] %= mod;
	}

	ij %= mod;

	long long ret = (iA_mod[0] * jB_mod[0]) % mod;

	for (int i = 1; i < K; ++i)
		ret = (ret + (iA_mod[i] * jB_mod[K - i]) % mod) % mod;

	return (ret + mod - ij) % mod;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		long long A, B, N, K;
		cin >> A >> B >> N >> K;

		cout << "Case #" << t << ": ";
		cout << gym(A, B, N, K) << "\n";
	}

	return 0;
}

