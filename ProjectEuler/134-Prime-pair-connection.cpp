/*
45%

Consider the consecutive primes p1 = 19 and p2 = 23. It can be verified that 1219 is the smallest number such that the last digits are formed by p1 whilst also being divisible by p2.

In fact, with the exception of p1 = 3 and p2 = 5, for every pair of consecutive primes, p2 > p1, there exist values of n for which the last digits are formed by p1 and n is divisible by p2. Let S be the smallest of these values of n.

Find ∑ S for every pair of consecutive primes with 5 ≤ p1 ≤ 1000000.


it takes few minutes.
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

long long euler(int n)
{
	vector<bool> sieve(n * 2, true);
	vector<int> prime;
	long long sum = 0;
	long long mod = 10;

	for (long long i = 2; i < sieve.size(); ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < sieve.size(); j += i)
				sieve[j] = false;

			prime.push_back(i);

			if (i > n)
				break;
		}

	cout << prime.size() << "\n";

	for (int i = 3; i < prime.size(); ++i)
	{
		int p1 = prime[i - 1];
		int p2 = prime[i];

		while (mod < p1)
			mod *= 10;

		long long s = mod + p1;

		while (s % p2)
			s += mod;

		sum += s;
	}

	return sum;
}

int main()
{
	cout << euler(1e6) << "\n";

	return 0;
}
