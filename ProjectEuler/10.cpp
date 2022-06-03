/*
5%

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <queue>
#include <algorithm>
#include <numeric>

using namespace std;

long long euler(int n)
{
	vector<bool> sieve(n, true);
	long long sum = 0;

	for (long long p = 2; p < n; ++p)
		if (sieve[p])
		{
			for (long long i = p * p; i < n; i += p)
				sieve[i] = false;

			sum += p;
		}

	return sum;
}

int main()
{
	cout << euler(10) << endl;
	cout << euler(2000000) << endl;

	return 0;
}
