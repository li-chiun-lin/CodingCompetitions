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

int square_cnt(int R, int C)
{
	int m = 1e9 + 7;
	long long cnt = 0;

	long long n = min(R - 1, C - 1);
	int rr = (R - 1) / n;
	int cc = (C - 1) / n;

	

	cnt = n * (n + 1) * (n * 2 + 1) / 6;

	cnt = (cnt * rr) % m;
	cnt = (cnt * cc) % m;


	cout << "len " << n << " " << cnt << "\n";

	for (int x1 = 0; x1 < R; ++x1)
		for (int y1 = 0; y1 < C; ++y1)
			for (int dx = 1; x1 + dx < R; ++ dx)
				for (int dy = 1; y1 + dy < C && y1 + dx < C && dx + dy <= x1; ++ dy)
				{
					int x2 = x1 + dx;
					int y2 = y1 + dy;
					int x3 = x2 - dy;
					int y3 = y2 + dx;
					int x4 = x3 - dx;
					int y4 = y3 - dy;

#if 0
					cout << i1 << "," << j1 << " "
						 << i2 << "," << j2 << " "
						 << i3 << "," << j3 << " "
						 << i4 << "," << j4 << "\n";
#endif

					if ((0 <= x3 && x3 < R && 0 <= y3 && y3 < C) &&
						(0 <= x4 && x4 < R && 0 <= y4 && y4 < C))
					{
						cnt = (cnt + 1) % m;
						//cout << "hit \n";
					}
				}

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

		cout << "Case #" << t << ": ";
		cout << square_cnt(R, C) << "\n";
	}

	return 0;
}

