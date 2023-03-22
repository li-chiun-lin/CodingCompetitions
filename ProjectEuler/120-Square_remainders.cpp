/*
25%

Let r be the remainder when (a−1)^n + (a+1)^n is divided by a^2.

For example, if a = 7 and n = 3, then r = 42: 63 + 83 = 728 ≡ 42 mod 49. And as n varies, so too will r, but for a = 7 it turns out that r_max = 42.

For 3 ≤ a ≤ 1000, find ∑ r_max.
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
	int sum = 0;

	for (int a = 3; a <= 1000; ++a)
	{
		int a2 = a * a;
		int r_max = 2;

		for (int n = 1; 2 * n < a; ++n)
			r_max = max(r_max, (2 * n * a) % a2);

		sum += r_max;
	}

	return sum;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
