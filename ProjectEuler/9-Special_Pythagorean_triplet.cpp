/*
5%

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	
	a^2 + b^2 = c^2

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
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

int euler(int n)
{
	vector<int> square(n);

	for (int i = 1; i < n; ++i)
		square[i] = i * i;

	for (int a = 1; a < n; ++a)
	{
		for (int b = a + 1; b < n; ++b)
		{
			int c = n - a - b;

			if (square[a] + square[b] == square[c])
				return a * b * c;
		}
	}

	return 0;
}

int main()
{
	cout << euler(1000) << endl;

	return 0;
}
