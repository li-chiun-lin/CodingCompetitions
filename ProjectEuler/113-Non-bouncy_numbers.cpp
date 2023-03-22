/*
30%

Working from left-to-right if no digit is exceeded by the digit to its left it is called an increasing number; for example, 134468.

Similarly if no digit is exceeded by the digit to its right it is called a decreasing number; for example, 66420.

We shall call a positive integer that is neither increasing nor decreasing a "bouncy" number; for example, 155349.

As n increases, the proportion of bouncy numbers below n increases such that there are only 12951 numbers below one-million that are not bouncy and only 277032 non-bouncy numbers below 10^10.

How many numbers below a googol (10^100) are not bouncy?
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

unsigned long long dfs_inc(vector<int>& digit, int i, int d, vector<vector<unsigned long long>>& dp)
{
	if (i == digit.size())
		return 1;

	if (dp[i][d])
		return dp[i][d];

	unsigned long long ret = 0;

	for (int v = d; v < 10; ++v)
	{
		digit[i] = v;
		ret += dfs_inc(digit, i + 1, v, dp);
	}

	return dp[i][d] = ret;
}

unsigned long long dfs_dec(vector<int>& digit, int i, int n, int d, vector<vector<unsigned long long>>& dp)
{
	if (i == n)
		return 1;

	if (dp[i][d])
		return dp[i][d];

	unsigned long long ret = 0;

	for (int v = d; v >= 0; --v)
	{
		digit[i] = v;
		ret += dfs_dec(digit, i + 1, n, v, dp);
	}

	return dp[i][d] = ret;
}

unsigned long long euler(int n)
{
	vector<int> digit(n);
	vector<vector<unsigned long long>> dp_inc(n, vector<unsigned long long>(10));

	unsigned long long cnt_inc_dec = n * 10 - n + 1;
	unsigned long long cnt_inc = dfs_inc(digit, 0, 0, dp_inc);
	unsigned long long cnt_dec = 0;

	for (int i = 1; i <= n; ++i)
	{
		vector<vector<unsigned long long>> dp_dec(n, vector<unsigned long long>(10));
		cnt_dec += dfs_dec(digit, 0, i, 9, dp_dec);
	}

	return cnt_inc + cnt_dec - cnt_inc_dec - n;
}

int main()
{
	cout << euler(6) << "\n";
	cout << euler(10) << "\n";
	cout << euler(20) << "\n";
	cout << euler(30) << "\n";
	cout << euler(40) << "\n";
	cout << euler(100) << "\n";

	return 0;
}
