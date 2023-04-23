/*

*/

#define _USE_MATH_DEFINES

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// c0: choose[0]
int dfs(int n, vector<int>& choose, int i, int change, int c0, vector<vector<vector<int>>>& dp)
{
	if (i == n - 1)
	{
		if ((choose[i] + change) % 3 == c0)
			return 1;
		else
			return 0;
	}

	if (dp[i][change][c0] != -1)
		return dp[i][change][c0];

	if ((choose[i] + change) % 3 == choose[i + 1])
	{
		int r1 = dfs(n, choose, i + 1, 1, c0, dp);
		int r2 = dfs(n, choose, i + 1, 2, c0, dp);

		return dp[i][change][c0] = min(r1, r2) + 1;
	}
	else
	{
		return dp[i][change][c0] = dfs(n, choose, i + 1, 0, c0, dp);
	}
}

int untie(string& C)
{
	int n = C.size();
	vector<vector<vector<int>>> dp(n, 
		vector<vector<int>>(3,
		vector<int>(3, -1)));
	vector<int> choose(n);

	for (int i = 0; i < n; ++i)
	{
		if (C[i] == 'R')
			choose[i] = 1;
		else if (C[i] == 'P')
			choose[i] = 2;
	}

	int r1 = dfs(n, choose, 0, 0, choose[0], dp);
	int r2 = dfs(n, choose, 0, 1, (choose[0] + 1) % 3, dp) + 1;
	int r3 = dfs(n, choose, 0, 2, (choose[0] + 2) % 3, dp) + 1;

	return min(r1, min(r2, r3));
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		string C;
		cin >> C;

		cout << "Case #" << t << ": ";
		cout << untie(C) << "\n";
	}

	return 0;
}

