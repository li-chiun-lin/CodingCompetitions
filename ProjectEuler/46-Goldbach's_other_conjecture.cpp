/*
5%

It was proposed by Christian Goldbach that every odd composite number can be written as the sum of a prime and twice a square.

	9 = 7 + 2×1<sup>2</sup>
	15 = 7 + 2×2<sup>2</sup>
	21 = 3 + 2×3<sup>2</sup>
	25 = 7 + 2×3<sup>2</sup>
	27 = 19 + 2×2<sup>2</sup>
	33 = 31 + 2×1<sup>2</sup>

It turns out that the conjecture was false.
What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?
*/

#include <algorithm>
#include <climits>
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

int euler()
{
	long long n = 10000;
	vector<bool> sieve(n, true);
	vector<long long> s(n);

	for (long long i = 0; i < n; ++i)
		s[i] = 2 * i * i;

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

	for (long long p = 9; ; p += 2)
	{
		if (sieve[p])
			continue;
		
		bool good = true;
		for (long long j = 1; s[j] < p && good; ++j)
			if (sieve[p - s[j]])
				good = false;

		if (good)
			return p;
	}

	return 0;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
