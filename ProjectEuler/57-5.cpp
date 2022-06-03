/*
5%

It is possible to show that the square root of two can be expressed as an infinite continued fraction.
<p class="center">$\sqrt 2 =1+ \frac 1 {2+ \frac 1 {2 +\frac 1 {2+ \dots}}}$
By expanding this for the first four iterations, we get:
$1 + \frac 1 2 = \frac  32 = 1.5$<br />
$1 + \frac 1 {2 + \frac 1 2} = \frac 7 5 = 1.4$<br />
$1 + \frac 1 {2 + \frac 1 {2+\frac 1 2}} = \frac {17}{12} = 1.41666 \dots$<br />
$1 + \frac 1 {2 + \frac 1 {2+\frac 1 {2+\frac 1 2}}} = \frac {41}{29} = 1.41379 \dots$<br />
The next three expansions are $\frac {99}{70}$, $\frac {239}{169}$, and $\frac {577}{408}$, but the eighth expansion, $\frac {1393}{985}$, is the first example where the number of digits in the numerator exceeds the number of digits in the denominator.
In the first one-thousand expansions, how many fractions contain a numerator with more digits than the denominator?
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

void add(vector<int> &a, vector<int> &b)
{
	int m = a.size();
	int n = b.size();
	int i = 0;
	int j = 0;
	int c = 0;

	while (i < m && j < n)
	{
		a[i] += b[j] + c;
		c = a[i] / 10;
		a[i] %= 10;
		++ i;
		++ j;
	}

	while (i < m && c)
	{
		a[i] += c;
		c = a[i] / 10;
		a[i] %= 10;
		++ i;
	}

	while (j < n)
	{
		a.push_back(b[j] + c);
		c = a.back() / 10;
		a.back() %= 10;
		++ j;
	}

	if (c)
		a.push_back(c);
}

pair<vector<int>, vector<int>> f(int i, vector<pair<vector<int>, vector<int>>> &dp)
{
	if (i == 0)
		return dp[i] = {{1}, {1}};

	auto f_1 = f(i - 1, dp);
	auto de = f_1.first;
	auto nu = f_1.second;

	add(de, nu);
	add(nu, de);

	return dp[i] = {nu, de};
}

int euler(int n)
{
	vector<pair<vector<int>, vector<int>>> dp(n + 1);

	f(n, dp);

	int cnt = 0;

	for (int i = 0; i <= n; ++i)
		cnt += dp[i].first.size() > dp[i].second.size();

	return cnt;
}

int main()
{
	cout << euler(1000) << endl;

	return 0;
}
