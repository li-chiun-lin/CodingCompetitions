/*
5%

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.

The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.

Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.

HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum.
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

int target = (1 << 10) - 2;

bool pandigital(int a, int b, int c)
{
	int ret = 0;
	int cnt = 0;

	while (a)
	{
		ret |= 1 << (a % 10);
		a /= 10;
		++ cnt;
	}

	while (b)
	{
		ret |= 1 << (b % 10);
		b /= 10;
		++ cnt;
	}

	while (c)
	{
		ret |= 1 << (c % 10);
		c /= 10;
		++ cnt;
	}

	//cout << cnt << endl;
	//cout << ret << endl;

	return cnt == 9 && ret == target;
}

int euler()
{
	int sum = 0;

	//cout << pandigital(12, 34, 56) << endl;
	//return 0;

	set<int> ss;
	
	for (int i = 1; i < 10000; ++i)
		for (int j = i; j < 10000; ++j)
		{
			long long k = i * j;

			if (pandigital(i, j, k))
			{
				cout << i << " " << j << " " << k << endl;
				ss.insert(k);
			}
		}

	return accumulate(begin(ss), end(ss), 0);
}

int main()
{
	cout << euler() << endl;

	return 0;
}
