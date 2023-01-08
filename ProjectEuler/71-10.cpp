/*
10%

Consider the fraction, n/d, where n and d are positive integers. If n<d and HCF(n,d)=1, it is called a reduced proper fraction.

If we list the set of reduced proper fractions for d ≤ 8 in ascending order of size, we get:

1/8, 1/7, 1/6, 1/5, 1/4, 2/7, 1/3, 3/8, 2/5, 3/7, 1/2, 4/7, 3/5, 5/8, 2/3, 5/7, 3/4, 4/5, 5/6, 6/7, 7/8

It can be seen that 2/5 is the fraction immediately to the left of 3/7.

By listing the set of reduced proper fractions for d ≤ 1,000,000 in ascending order of size, find the numerator of the fraction immediately to the left of 3/7.
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

int euler(int n)
{
	long long pnu = 1;
	long long pde = n;

	for (long long de = 8; de <= n; ++de)
	{
		long long nu = de * 3 / 7;

		while (gcd(nu, de) != 1)
			-- nu;

		if (pnu * de < pde * nu)
		{
			pnu = nu;
			pde = de;
		}
	}

	cout << pnu << "/" << pde << "\n";

	return 0;
}

int main()
{
	cout << euler(1e6) << endl;

	return 0;
}
