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
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int rain(int R, int C, vector<vector<int>>& H)
{
	vector<vector<int>> W(R, vector<int>(C, INT_MAX));

	for (int j = 0; j < C; ++j)
	{
		W[0][j] = H[0][j];
		W[R - 1][j] = H[R - 1][j];
	}

	for (int i = 0; i < R; ++i)
	{
		W[i][0] = H[i][0];
		W[i][C - 1] = H[i][C - 1];
	}

	bool has_update = true;
	int d[] = {1, 0, -1, 0, 1};

	while (has_update)
	{
		has_update = false;

		for (int i = 1; i < R - 1; ++i)
			for (int j = 1; j < C - 1; ++j)
			{
				int mw = INT_MAX;

				for (int k = 0; k < 4; ++k)
					mw = min(mw, W[i + d[k]][j + d[k + 1]]);

				int mh = max(mw, H[i][j]);

				if (W[i][j] > mh)
				{
					W[i][j] = mh;
					has_update = true;
				}
			}
	}

	int cnt = 0;

	for (int i = 1; i < R - 1; ++i)
		for (int j = 1; j < C - 1; ++j)
			cnt += W[i][j] - H[i][j];

	return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int R, C;
		cin >> R >> C;

		vector<vector<int>> H(R, vector<int>(C));

		for (auto& r : H)
			for (auto& c : r)
				cin >> c;

		cout << "Case #" << t << ": ";
		cout << rain(R, C, H) << "\n";
	}

	return 0;
}

