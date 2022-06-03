/*
5%

The first two consecutive numbers to have two distinct prime factors are:

	14 = 2 × 7
	15 = 3 × 5

The first three consecutive numbers to have three distinct prime factors are:

	644 = 2² × 7 × 23
	645 = 3 × 5 × 43
	646 = 2 × 17 × 19.

Find the first four consecutive integers to have four distinct prime factors each. What is the first of these numbers?
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

int euler(int len)
{
	long long n = 1000000;
	vector<bool> sieve(n, true);
	vector<int> prime;
	vector<int> cnt(n);

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

			prime.push_back(i);
		}

	for (long long i = len; i < n; ++i)
	{
		long long ii = i;

		for (auto p : prime)
		{
			if (p > ii)
				break;
			
			if (ii % p == 0)
			{
				ii /= p;
				++ cnt[i];
			}
		}

		bool check = true;

		for (int k = 0; k < len && check; ++k)
			if (cnt[i - k] != len)
				check = false;

		if (check)
		{
			cout << i - len + 1 << endl;
			return 0;
		}
	}

	return 0;
}

int main()
{
	cout << euler(3) << endl;
	cout << euler(4) << endl;

	return 0;
}
