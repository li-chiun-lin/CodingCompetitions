/*
5%

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once. For example, 2143 is a 4-digit pandigital and is also prime.

What is the largest n-digit pandigital prime that exists?
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

bool check(long long x)
{
	int cnt = 1;
	int bit = 0;

	while (x)
	{
		int b = 1 << (x % 10);

		if (bit & b)
			return false;

		bit |= b;
		++ cnt;
		x /= 10;
	}

	return bit == ((1 << cnt) - 2);
}

int euler()
{
	long long n = 1e9;

	vector<bool> sieve(n, true);

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

			if (check(i))
				cout << i << endl;
		}

	return 0;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
