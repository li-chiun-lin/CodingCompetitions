/*
15%

Consider the fraction, n/d, where n and d are positive integers. If n<d and HCF(n,d)=1, it is called a reduced proper fraction.

If we list the set of reduced proper fractions for d ≤ 8 in ascending order of size, we get:

1/8, 1/7, 1/6, 1/5, 1/4, 2/7, 1/3, 3/8, 2/5, 3/7, 1/2, 4/7, 3/5, 5/8, 2/3, 5/7, 3/4, 4/5, 5/6, 6/7, 7/8

It can be seen that there are 3 fractions between 1/3 and 1/2.

How many fractions lie between 1/3 and 1/2 in the sorted set of reduced proper fractions for d ≤ 12,000?
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

long long euler(int n)
{
	long long cnt = 0;

	for (long long de = 3; de <= n; ++de)
	{
		cout << de << " ";
		for (long long nu = de / 3 + 1; nu <= de / 2; ++ nu)
		{
			if (gcd(nu, de) != 1)
				continue;

			++ cnt;

			//cout << nu << "/" << de << " ";
		}

		//cout << "\n";
		
	}

	return cnt;
}

int main()
{
	cout << euler(8) << "\n";
	cout << euler(12000) << "\n";

	return 0;
}
