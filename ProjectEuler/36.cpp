/*
5%

The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
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

bool isPal(long long x)
{
	long long xx = x;
	long long x2 = 0;

	while (xx)
	{
		x2 *= 10;
		x2 += xx % 10;
		xx /= 10;
	}

	if (x2 != x)
		return false;

	xx = x;
	long long x3 = 0;

	while (xx)
	{
		x3 <<= 1;
		x3 |= xx & 1;
		xx >>= 1;
	}

	return x3 == x;
}

long long euler(int n)
{
	long long sum = 0;
	for (long long i = 1; i < n; ++i)
		if (isPal(i))
		{
			cout << i << " ";
			sum += i;
		}

	cout << endl;

	return sum;
}

int main()
{
	cout << euler(1000000) << endl;

	return 0;
}
