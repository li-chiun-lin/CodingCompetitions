/*
50%

The positive integers, x, y, and z, are consecutive terms of an arithmetic progression. Given that n is a positive integer, the equation, x^2 − y^2 − z^2 = n, has exactly one solution when n = 20:

13^2 − 10^2 − 7^2 = 20

In fact there are twenty-five values of n below one hundred for which the equation has a unique solution.

How many values of n less than fifty million have exactly one solution?



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

int euler()
{
	map<int, int> cnt;

	for (int n = 1; n < 50 * 1e6; ++n)
	{
		int s = 0;
		int ub = sqrt(n);

		for (int p = 1; p <= ub && s < 2; ++p)
		{
			if (n % p)
				continue;

			int q = n / p;
			int d4 = q + p;

			if (d4 % 4)
				continue;

			int d = d4 / 4;

			if (p > d)
				++ s;

			if (p == q)
				break;

			if (q > d)
				++ s;
		}

		if (n % (int)1e6 == 0)
			cout << n << "\n";

		++ cnt[s];
	}

	return cnt[1];
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
