/*
50%

The radical of n, rad(n), is the product of distinct prime factors of n. For example, 504 = 2^3 × 3^2 × 7, so rad(504) = 2 × 3 × 7 = 42.

We shall define the triplet of positive integers (a, b, c) to be an abc-hit if:

    GCD(a, b) = GCD(a, c) = GCD(b, c) = 1
    a < b
    a + b = c
    rad(abc) < c

For example, (5, 27, 32) is an abc-hit, because:

    GCD(5, 27) = GCD(5, 32) = GCD(27, 32) = 1
    5 < 27
    5 + 27 = 32
    rad(4320) = 30 < 32

It turns out that abc-hits are quite rare and there are only thirty-one abc-hits for c < 1000, with ∑c = 12523.

Find ∑c for c < 120000.
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

int euler(int n)
{
	vector<long long> rad(n, 1);

	for (long long i = 2; i < n; ++i)
		if (rad[i] == 1)
			for (long long j = i; j < n; j += i)
				rad[j] *= i;

	long long sum = 0;

	for (int a = 1; a + a < n; ++a)
	{
		int inc_b = a % 2 ? 1 : 2;

		for (int b = a + 1; a + b < n; b += inc_b)
		{
			int c = a + b;
			long long rad_abc = rad[a] * rad[b] * rad[c];

			if (rad_abc >= c || gcd(rad[a], rad[b]) != 1)
				continue;

			//cout << a << "\t" << b << "\t" << c << "\n"; 

			sum += c;
		}
	}

	return sum;
}

int main()
{
	cout << euler(1000) << "\n";
	cout << euler(120000) << "\n";

	return 0;
}
