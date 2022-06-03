/*
5%

It can be seen that the number, 125874, and its double, 251748, contain exactly the same digits, but in a different order.

Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits.
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

int to_bit(long long pp)
{
	int bit = 0;

	while (pp)
	{
		bit |= 1 << (pp % 10);
		pp /= 10;
	}

	return bit;
}

int euler(int len)
{
	long long n = 1e6;
	vector<int> val(n);

	for (auto i = 2; i < n; ++i)
		val[i] = to_bit(i);

	for (auto i = 2; i < n; ++i)
	{
		int j = 2;

		while (i * j < n && val[i] == val[i * j])
			++ j;

		if (j >= len)
		{
			for (int k = 1; k < j; ++k)
				cout << i * k << " ";
			cout << endl;
		}
	}

	return 0;
}

int main()
{
	cout << euler(6) << endl;

	return 0;
}
