/*
TLE
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

long long dfs(int n, int lb, int step)
{
	if (n == 0)
		return 1;

	if (step == 0)
		return n % lb == 0;

	if (step == 1)
	{
		long long cnt = 0;

		for (long long a = 0; a <= n; a += lb)
		{
			if ((n - a) % (lb + 1) == 0)
				++ cnt;
		}

		return cnt;
	}

	//if (step == 2)
	{
		long long cnt = 0;

		for (long long a = 0; a <= n; a += lb)
		{
			cnt += dfs(n - a, lb + 1, step - 1);
		}

		return cnt;
	}

#if 0
	long long cnt = 0;

	for (int l = lb, s = step; s >= 0 && l <= n; ++l, --s)
		cnt += dfs(n - l, l, s);

	return cnt;
#endif
}

long long partion(int N, int D)
{
	long long cnt = 0;

	for (int i = 1; i <= N; ++i)
		if (i % D == 0)
			cnt += dfs(N - i, i, 2);

	return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, D;
		cin >> N >> D;

		cout << "Case #" << t << ": ";
		cout << partion(N, D) << "\n";
	}

	return 0;
}

