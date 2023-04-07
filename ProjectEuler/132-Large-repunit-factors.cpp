/*
45%

A number consisting entirely of ones is called a repunit. We shall define R(k) to be a repunit of length k.

For example, R(10) = 1111111111 = 11×41×271×9091, and the sum of these prime factors is 9414.

Find the sum of the first forty prime factors of R(10^9).
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

long long rem(long long a, int k, int p)
{
	long long r = 1;

	while (k)
	{
		if (k & 1)
			r = (r * a) % p;

		a = (a * a) % p;
		k >>= 1;
	}

	return r;
}

int euler()
{
	vector<bool> sieve(1e6, true);
	int sum = 0;
	int cnt = 0;

	for (long long i = 2; i < sieve.size() && cnt < 40; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < sieve.size(); j += i)
				sieve[j] = false;

			if (rem(10, 1e9, i * 9) == 1)
			{
				sum += i;
				++ cnt;
			}
		}

	cout << cnt << "\n";

	return sum;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
