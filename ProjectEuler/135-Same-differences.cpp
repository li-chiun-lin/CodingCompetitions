/*
45%

Given the positive integers, x, y, and z, are consecutive terms of an arithmetic progression, the least value of the positive integer, n, for which the equation, x^2 − y^2 − z^2 = n, has exactly two solutions is n = 27:

34^2 − 27^2 − 20^2 = 12^2 − 9^2 − 6^2 = 27

It turns out that n = 1155 is the least value which has exactly ten solutions.

How many values of n less than one million have exactly ten distinct solutions?
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

	for (int n = 27; n < 1e6; ++n)
	{
		int s = 0;
		int ub = sqrt(n);

		for (int p = 1; p <= ub; ++p)
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

		++ cnt[s];
	}

	return cnt[10];
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
