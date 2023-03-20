/*
15%

By counting carefully it can be seen that a rectangular grid measuring 3 by 2 contains eighteen rectangles:

*..
...

**.
...

***
...

*..
*..

**.
**.

***
***

Although there exists no rectangular grid that contains exactly two million rectangles, find the area of the grid with the nearest solution.
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
	int r = 100;
	int c = 100;

	vector<vector<int>> dp(r + 1, vector<int>(c + 1));
	int ii = -1;
	int jj = -1;
	int dd = INT_MAX;

	for (int i = 0; i < r; ++i)
		for (int j = 0; j < c; ++j)
		{
			int area = (i + 1) * (j + 1);

			dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + area;
			int diff = abs(dp[i + 1][j + 1] - n);

			if (dd > diff)
			{
				dd = diff;
				ii = i + 1;
				jj = j + 1;
			}

			if (dp[i + 1][j + 1] > n)
				break;
		}

	return ii * jj;
}

int main()
{
	cout << euler(2e6) << "\n";

	return 0;
}
