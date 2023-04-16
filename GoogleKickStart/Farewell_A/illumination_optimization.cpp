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

int illumination(int M, int R, int N, vector<int>& X)
{
	int i = -1;
	int j = 0;
	int cnt = 0;

	// find first bulb
	while (j < N && X[j] <= R)
		i = X[j ++];

	//cout << "first " << i << "\n";

	if (i == -1)
		return -1;

	cnt = 1;

	while (i + R < M)
	{
		int ii = -1;
		while (j < N && X[j] <= i + R + R)
			ii = X[j ++];

		//cout << ii << "\n";

		if (ii == -1)
			return -1;

		i = ii;
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
		int M, R, N;
		cin >> M >> R >> N;

		vector<int> X(N);

		for (auto& x : X)
			cin >> x;

		cout << "Case #" << t << ": ";
		int ret = illumination(M, R, N, X);
		if (ret == -1)
			cout << "IMPOSSIBLE" << "\n";
		else
			cout << ret << "\n";
	}

	return 0;
}

