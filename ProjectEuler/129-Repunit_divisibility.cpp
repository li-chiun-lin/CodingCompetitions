/*
45%

A number consisting entirely of ones is called a repunit. We shall define R(k) to be a repunit of length k; for example, R(6) = 111111.

Given that n is a positive integer and GCD(n, 10) = 1, it can be shown that there always exists a value, k, for which R(k) is divisible by n, and let A(n) be the least such value of k; for example, A(7) = 6 and A(41) = 5.

The least value of n for which A(n) first exceeds ten is 17.

Find the least value of n for which A(n) first exceeds one-million.
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

int A(int n)
{
	int x = 1;
	int k = 1;

	while (x)
	{
		x = (x * 10 + 1) % n;
		++ k;
	}

	return k;
}

int euler(int ub)
{
	int n = ub + 1;
	int an = 0;

	while (an < ub)
	{
		n += 2;

		if (gcd(n, 10) != 1)
			continue;

		an = A(n);
	}

	return n;
}

int main()
{
	cout << euler(10) << "\n";
	cout << euler(1e6) << "\n";

	return 0;
}
