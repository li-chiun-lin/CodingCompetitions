/*
to be continued.
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

bool dfs(const string& s1, const string&s2, int i, int j)
{
	int n = s1.size();
	int m = s2.size();

	cout << i << "[" << s1[i] << "] " << j << "[" << s2[j] << "]\n";

	if (i == n && j == m)
		return true;

	if (i == n || j == m)
		return false;

	if (s1[i] == '*')
	{
		for (int k = 0; k <= 4; ++k)
		{
			if (s2[j + k] == '*')
				return dfs(s1, s2, i + 1, j + k + 1);

			if (dfs(s1, s2, i + 1, j + k))
				return true;
		}
	}

	if (s2[j] == '*')
	{
		for (int k = 0; k <= 4; ++k)
		{
			//if (s1[i + k] == '*')
			//	return dfs(s1, s2, i + k + 1, j + 1);

			if (dfs(s1, s2, i + k, j + 1))
				return true;
		}
	}
	
	if (s1[i] == s2[j])
		return dfs(s1, s2, i + 1, j + 1);
	
	return false;
}

bool match(const string& s1, const string& s2)
{
	return dfs(s1, s2, 0, 0);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		string s1, s2;
		cin >> s1 >> s2;

		cout << "Case #" << t << ": ";
		cout << (match(s1, s2) ? "TRUE" : "FALSE") << "\n";
	}

	return 0;
}

