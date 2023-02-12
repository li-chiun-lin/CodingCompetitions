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

long long safe_squares(int R, int C, int K, vector<pair<int, int>>& monster)
{
	int size = min(R, C);
	long long cnt = 0;
	vector<vector<int>> acc(R + 1, vector<int>(C + 1));

	if (K == 0)
	{
		for (int l = 0; l < size; ++l)
			cnt += (long long)(R - l) * (C - l);

		return cnt;
	}

	for (auto [i, j] : monster)
		acc[i + 1][j + 1] = 1;

	for (int i = 0; i <= R; ++i)
		for (int j = 1; j <= C; ++j)
			acc[i][j] += acc[i][j - 1];

	for (int j = 0; j <= C; ++j)
		for (int i = 1; i <= R; ++i)
			acc[i][j] += acc[i - 1][j];

	for (int l = 0; l < size; ++l)
	{
		//cout << l << " ";
		for (int i = 0; i + l < R; ++i)
			for (int j = 0; j + l < C; ++j)
				if (acc[i + l + 1][j + l + 1] 
				  - acc[i + l + 1][j] 
				  - acc[i][j + l + 1] 
				  + acc[i][j] == 0)
				++ cnt;
	}

	return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int R, C, K;
		cin >> R >> C >> K;

		vector<pair<int, int>> monster(K);

		for (auto& [r, c] : monster)
			cin >> r >> c;

		cout << "Case #" << t << ": ";
		cout << safe_squares(R, C, K, monster) << "\n";
	}

	return 0;
}

