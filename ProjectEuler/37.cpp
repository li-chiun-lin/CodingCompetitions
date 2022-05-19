/*
The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.

Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.
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
	long long n = 1000000;
	vector<bool> sieve(n, true);
	set<long long> prime;
	int sum = 0;
	sieve[0] = false;
	sieve[1] = false;

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

			prime.insert(i);
		}

	prime.erase(2);
	prime.erase(3);
	prime.erase(5);
	prime.erase(7);

	for (long long p : prime)
	{
		long long pp = p;

		// from right to left
		while (pp && sieve[pp])
			pp /= 10;

		if (pp)
			continue;

		long long base = 10;

		// from left to right
		while (base <= p && sieve[p % base])
			base *= 10;

		if (base <= p)
			continue;

		cout << p << endl;
		sum += p;
	}

	return sum;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
