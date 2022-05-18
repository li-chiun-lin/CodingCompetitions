/*
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

void print(vector<int> &v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

long long euler(int n)
{
	vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 200};
	vector<int> dp(n + 1);

	dp[0] = 1;

	for (int i = 0; i < coin.size(); ++i)
		for (int j = coin[i]; j <= n; ++j)
			dp[j] += dp[j - coin[i]];

	print(dp);

	return dp[n];
}

int main()
{
	cout << euler(10) << endl;
	cout << euler(200) << endl;

	return 0;
}
