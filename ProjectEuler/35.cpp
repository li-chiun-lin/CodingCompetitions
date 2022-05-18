/*
The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?
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

int euler(int n)
{
	vector<bool> sieve(n, true);

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

	int ret = 0;

	for (int i = 2; i < n; ++i)
	{
		if (! sieve[i])
			continue;

		int c = 0;
		int ii = i;

		while (ii)
		{
			++ c;
			ii /= 10;
		}

		int front = pow(10, c - 1);
		ii = i;
		int j = 0;

		for (; j < c && sieve[ii]; ++j)
		{
			int r = ii % 10;
			ii /= 10;
			ii += r * front;
		}

		if (j == c)
		{
			cout << i << " ";
			++ ret;
		}
	}

	cout << endl;
	return ret;
}

int main()
{
	cout << euler(100) << endl;
	cout << euler(1000000) << endl;

	return 0;
}
