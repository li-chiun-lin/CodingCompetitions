/*
50%

A number consisting entirely of ones is called a repunit. We shall define R(k) to be a repunit of length k; for example, R(6) = 111111.

Let us consider repunits of the form R(10^n).

Although R(10), R(100), or R(1000) are not divisible by 17, R(10000) is divisible by 17. Yet there is no value of n for which R(10^n) will divide by 19. In fact, it is remarkable that 11, 17, 41, and 73 are the only four primes below one-hundred that can be a factor of R(10^n).

Find the sum of all the primes below one-hundred thousand that will never be a factor of R(10^n).
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

long long rem(long long a, long long k, int p)
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
	vector<bool> sieve(1e5, true);
	long long sum = 0;

	for (long long i = 2; i < sieve.size(); ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < sieve.size(); j += i)
				sieve[j] = false;

			for (long long v = 10; v < 1e18 && sieve[i]; v *= 10)
				if (rem(10, v, i * 9) == 1)
					sieve[i] = false;

			if (sieve[i])
				sum += i;
		}

	return sum;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
