/*
10%

It is possible to write five as a sum in exactly six different ways:

4 + 1
3 + 2
3 + 1 + 1
2 + 2 + 1
2 + 1 + 1 + 1
1 + 1 + 1 + 1 + 1

How many different ways can one hundred be written as a sum of at least two positive integers?
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
	vector<int> dp(n + 1);

	dp[0] = 1;

	for (int i = 1; i < n; ++i)
		for (int j = i; j <= n; ++j)
			dp[j] += dp[j - i];

	return dp[n];
}

int main()
{
	cout << euler(5) << "\n";
	cout << euler(100) << "\n";

	return 0;
}
