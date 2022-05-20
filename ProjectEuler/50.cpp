/*
The prime 41, can be written as the sum of six consecutive primes:

	41 = 2 + 3 + 5 + 7 + 11 + 13

This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?
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

long long euler(long long n)
{
	vector<bool> sieve(n, true);
	vector<long long> prime;

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

			prime.push_back(i);
		}

	vector<long long> acc(n + 1);
	int ma = 0;
	int ii = 0;
	int jj = 0;

	for (int i = 0; i < prime.size(); ++i)
		acc[i + 1] = acc[i] + prime[i];

	for (long long i = 0; i < prime.size(); ++i)
		for (long long j = i + 2; j < prime.size(); ++j)
		{
			long long sum = acc[j] - acc[i];
			long long len = j - i;

			if (sum >= n)
				break;

			if (sieve[sum])
			{
				if (ma < len)
				{
					ma = len;
					ii = i;
					jj = j;

					cout << len << " : " << sum << endl;;
				}
			}
		}

	return 0;
}

int main()
{
	cout << euler(100) << endl;
	cout << euler(1000) << endl;
	cout << euler(1000000) << endl;

	return 0;
}
