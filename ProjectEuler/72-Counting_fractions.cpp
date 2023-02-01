/*
20%

Consider the fraction, n/d, where n and d are positive integers. If n<d and HCF(n,d)=1, it is called a reduced proper fraction.

If we list the set of reduced proper fractions for d ≤ 8 in ascending order of size, we get:

1/8, 1/7, 1/6, 1/5, 1/4, 2/7, 1/3, 3/8, 2/5, 3/7, 1/2, 4/7, 3/5, 5/8, 2/3, 5/7, 3/4, 4/5, 5/6, 6/7, 7/8

It can be seen that there are 21 elements in this set.

How many elements would be contained in the set of reduced proper fractions for d ≤ 1,000,000?
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
#include <stack>
#include <string>
#include <vector>

using namespace std;

long long euler(int n)
{
	long long cnt = 0;
	vector<int> prime;
	vector<bool> sieve(n + 1, true);

	for (long long i = 2; i <= n; ++i)
		if (sieve[i])
		{
			prime.push_back(i);

			for (long long j = i * i; j <= n; j += i)
				sieve[j] = false;
		}

	for (long long de = 2; de <= n; ++de)
	{
		long long phi = 1;

		int ii = de;
		for (auto p : prime)
		{
			if (p > ii || ii == 0)
				break;

			int k = 0;

			while (ii % p == 0)
			{
				ii /= p;
				++ k;
			}

			if (k)
				phi *= pow(p, k - 1) * (p - 1);
		}

		//cout << de << " " << phi << "\n";

		cnt += phi;
	}

	return cnt;
}

int main()
{
	cout << euler(8) << endl;
	cout << euler(1e4) << endl;
	cout << euler(1e5) << endl;
	cout << euler(1e6) << endl;

	return 0;
}
