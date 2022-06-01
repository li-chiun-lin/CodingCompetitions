/*
The primes 3, 7, 109, and 673, are quite remarkable. By taking any two primes and concatenating them in any order the result will always be prime. For example, taking 7 and 109, both 7109 and 1097 are prime. The sum of these four primes, 792, represents the lowest sum for a set of four primes with this property.

Find the lowest sum for a set of five primes for which any two primes concatenate to produce another prime.
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool is_prime(unsigned long long x)
{
	if (x % 2 == 0)
		return false;

	for (long long i = 3; i * i <= x; i += 2)
		if (x % i == 0)
			return false;

	return true;
}

long long euler(long long n)
{
	vector<bool> sieve(n, true);
	vector<long long> prime;
	vector<long long> zeros;

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

			prime.push_back(i);
			zeros.push_back(pow(10, ceil(log10(i))));
		}

	vector<vector<long long>> s2, s3, s4, s5;

	for (int i = 0; i < prime.size(); ++i)
		for (int j = i + 1; j < prime.size(); ++j)
		{
			long long ij = prime[i] * zeros[j] + prime[j];
			long long ji = prime[j] * zeros[i] + prime[i];

			if (is_prime(ij) && is_prime(ji))
				s2.push_back({i, j});
		}

	for (int i = 0; i < s2.size(); ++i)
		for (int j = i + 1; j < s2.size(); ++j)
			if (s2[i][0] == s2[j][0])
			{
				int ii = s2[i].back();
				int jj = s2[j].back();

				long long ij = prime[ii] * zeros[jj] + prime[jj];
				long long ji = prime[jj] * zeros[ii] + prime[ii];

				if (is_prime(ij) && is_prime(ji))
				{
					s3.push_back({s2[i][0], ii, jj});
#if 0
					for (int k : s3.back())
						cout << prime[k] << " ";
					cout << endl;
#endif
				}
			}

	for (int i = 0; i < s3.size(); ++i)
		for (int j = i + 1; j < s3.size(); ++j)
			if (s3[i][0] == s3[j][0] && s3[i][1] == s3[j][1])
			{
				int ii = s3[i].back();
				int jj = s3[j].back();

				long long ij = prime[ii] * zeros[jj] + prime[jj];
				long long ji = prime[jj] * zeros[ii] + prime[ii];

				if (is_prime(ij) && is_prime(ji))
				{
					s4.push_back({s3[i][0], s3[i][1], ii, jj});
#if 0
					for (int k : s4.back())
						cout << prime[k] << " ";
					cout << endl;
#endif
				}
			}

	for (int i = 0; i < s4.size(); ++i)
		for (int j = i + 1; j < s4.size(); ++j)
			if (s4[i][0] == s4[j][0] &&
				s4[i][1] == s4[j][1] &&
				s4[i][2] == s4[j][2])
			{
				int ii = s4[i].back();
				int jj = s4[j].back();

				long long ij = prime[ii] * zeros[jj] + prime[jj];
				long long ji = prime[jj] * zeros[ii] + prime[ii];

				if (is_prime(ij) && is_prime(ji))
				{
					s5.push_back({s4[i][0], s4[i][1], s4[i][2], ii, jj});
#if 1
					for (int k : s5.back())
						cout << prime[k] << " ";
					cout << endl;
#endif
				}
			}

	if (s5.size())
		return prime[s5[0][0]]
			+ prime[s5[0][1]]
			+ prime[s5[0][2]]
			+ prime[s5[0][3]]
			+ prime[s5[0][4]];

	return 0;
}

int main()
{
	cout << euler(10000) << endl;

	return 0;
}
