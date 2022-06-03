/*
5%

In the United Kingdom the currency is made up of pound (£) and pence (p). There are eight coins in general circulation:

	1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), and £2 (200p).

It is possible to make £2 in the following way:

	1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p

How many different ways can £2 be made using any number of coins?
*/

#include <algorithm>
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

void print(vector<vector<long long>> &m)
{
	for (auto &r : m)
	{
		for (auto c : r)
			cout << c << " ";
		cout << endl;
	}
	cout << endl;
}

long long euler(int n)
{
	vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 200};
	vector<vector<long long>> dp(coin.size(), vector<long long>(n + 1, 1));

	for (int i = 1; i < coin.size(); ++i)
		for (int j = 1; j <= n; ++j)
		{
			dp[i][j] = dp[i - 1][j];

			if (j >= coin[i])
				dp[i][j] += dp[i][j - coin[i]];
		}

	print(dp);

	return dp[coin.size() - 1][n];
}

int main()
{
	cout << euler(10) << endl;
	cout << euler(200) << endl;

	return 0;
}
