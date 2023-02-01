/*
10%

It is possible to write ten as the sum of primes in exactly five different ways:

7 + 3
5 + 5
5 + 3 + 2
3 + 3 + 2 + 2
2 + 2 + 2 + 2 + 2

What is the first value which can be written as the sum of primes in over five thousand different ways?
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

int euler()
{
	int n = 1000;
	vector<int> prime;
	vector<int> dp(n);

	dp[0] = 1;

	for (int i = 2; i < n; ++i)
	{
		bool isPrime = true;

		for (int p : prime)
			if (i % p == 0)
			{
				isPrime = false;
				break;
			}

		if (! isPrime)
			continue;

		prime.push_back(i);

		for (int j = 0; j + i < n; ++j)
			dp[j + i] += dp[j];
	}

	for (int i = 0; i < n; ++i)
		if (dp[i] > 5000)
			return i;

	return -1;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
