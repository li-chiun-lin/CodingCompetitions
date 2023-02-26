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

int sitting(int R, int C)
{
	if (R < 3 && C < 3)
		return R * C;
	else if (R < 3)
	{
		int c = C / 3;
		int cc = C % 3;

		return (c * 2 + cc) * R;
	}
	else if (C < 3)
	{
		int r = R / 3;
		int rr = R % 3;

		return (r * 2 + rr) * C;
	}

	int ret = 0;

	for (int i = 0; i < R; ++i)
		for (int j = 0; j < C; ++j)
			if ((i + j) % 3 != 2)
				++ ret;

	return ret;
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
		cout << sitting(R, C) << "\n";
	}

	return 0;
}

