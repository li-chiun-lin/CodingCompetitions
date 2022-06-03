/*
5%

The following iterative sequence is defined for the set of positive integers:

	n → n/2 (n is even)
	n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

	13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
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
	map<long long, int> dp;
	dp[1] = 1;
	int idx = 0;

	for (long long i = 2; i < n; ++i)
	{
		long long x = i;
		int cnt = 0;

		while (x != 1 && ! dp[x])
		{
			if (x % 2)
				x = x * 3 + 1;
			else
				x >>= 1;

			++ cnt;
		}

		dp[i] = cnt + dp[x];

		//cout << i << " : " << dp[i] << endl;

		if (dp[idx] < dp[i])
			idx = i;
	}

	cout << dp[idx] << endl;

	return idx;
}

int main()
{
	//cout << euler(13) << endl;
	//cout << euler(14) << endl;
	//cout << euler(20) << endl;
	cout << euler(1000000) << endl;

	return 0;
}
