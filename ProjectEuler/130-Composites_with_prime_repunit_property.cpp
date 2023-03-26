/*
45%

A number consisting entirely of ones is called a repunit. We shall define R(k) to be a repunit of length k; for example, R(6) = 111111.

Given that n is a positive integer and GCD(n, 10) = 1, it can be shown that there always exists a value, k, for which R(k) is divisible by n, and let A(n) be the least such value of k; for example, A(7) = 6 and A(41) = 5.

You are given that for all primes, p > 5, that p − 1 is divisible by A(p). For example, when p = 41, A(41) = 5, and 40 is divisible by 5.

However, there are rare composite values for which this is also true; the first five examples being 91, 259, 451, 481, and 703.

Find the sum of the first twenty-five composite values of n for which
GCD(n, 10) = 1 and n − 1 is divisible by A(n).
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
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int A(int n)
{
	int x = 1;
	int k = 1;

	while (x)
	{
		x = (x * 10 + 1) % n;
		++ k;
	}

	return k;
}

int euler(int ub)
{
	int n = 1;
	int an = 0;
	int sum = 0;
	int cnt = 0;
	int m = 1e6;

	vector<bool> sieve(m, true);

	for (long long i = 2; i < m; ++i)
		if (sieve[i])
			for (long long j = i * i; j < m; j += i)
				sieve[j] = false;

	while (cnt < ub)
	{
		n += 2;

		if (sieve[n] || gcd(n, 10) != 1)
			continue;

		an = A(n);

		if ((n - 1) % an == 0)
		{
			sum += n;
			++ cnt;
		}
	}

	return sum;
}

int main()
{
	cout << euler(25) << "\n";

	return 0;
}
