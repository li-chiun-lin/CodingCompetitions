/*
5%

Euler discovered the remarkable quadratic formula:

	$n^2 + n + 41$

It turns out that the formula will produce 40 primes for the consecutive integer values $0 \le n \le 39$. However, when $n = 40, 40^2 + 40 + 41 = 40(40 + 1) + 41$ is divisible by 41, and certainly when $n = 41, 41^2 + 41 + 41$ is clearly divisible by 41.

The incredible formula $n^2 - 79n + 1601$ was discovered, which produces 80 primes for the consecutive values $0 \le n \le 79$. The product of the coefficients, −79 and 1601, is −126479.
Considering quadratics of the form:

	$n^2 + an + b$, where $|a| &lt; 1000$ and $|b| \le 1000$

where $|n|$ is the modulus/absolute value of $n$
e.g. $|11| = 11$ and $|-4| = 4$

Find the product of the coefficients, $a$ and $b$, for the quadratic expression that produces the maximum number of primes for consecutive values of $n$, starting with $n = 0$.
*/

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>

using namespace std;

long long euler()
{
	long long m = 10000000;
	vector<bool> sieve(m, true);

	for (long long i = 2; i < m; ++i)
		if (sieve[i])
			for (long long j = i * i; j < m; j += i)
				sieve[j] = false;

	long long ret = 0;
	long long v = 0;
	int ma = 0;

	for (int a = -999; a <= 999; ++a)
		for (int b = -1000; b <= 1000; ++b)
		{
			int n = 0;
			
			do
			{
				v = n * n + n * a + b;
				++ n;
			} while (0 < v && v < m && sieve[v]);

			if (ma < n)
			{
				ma = n;
				cout << n << " " << a << " " << b << endl;
				ret = a * b;
			}
		}

	return ret;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
