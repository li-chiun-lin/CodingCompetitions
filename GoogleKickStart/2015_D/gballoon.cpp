/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int calculate(int M, vector<int>& V, vector<vector<int>>& B, int T)
{
	int sum = 0;

	for (auto& b : B)
	{
		// this is important.
		// this balloon is already at the tower.
		if (b[0] == 0)
			continue;

		int q = INT_MAX;
		int t = 0;

		for (int h = 0; h < M; ++h)
		{
			// the balloon at the right side of the tower needs a negative wind.
			if (b[0] > 0 && V[h] < 0)
			{
				t = (b[0] + (-V[h]) - 1) / (-V[h]);

				if (t <= T)
					q = min(q, abs(h - b[1]));
			}
			// the balloon at the left side of the tower needs a positive wind.
			else if (b[0] < 0 && V[h] > 0)
			{
				t = ((-b[0]) + V[h] - 1) / V[h];

				if (t <= T)
					q = min(q, abs(h - b[1]));
			}
		}

		// no suitable wind for this balloon.
		if (q == INT_MAX)
			return q;

		sum += q;
	}

	return sum;
}

int gballoon(int N, int M, int Q, vector<int>& V, vector<vector<int>>& B)
{
	int l = 0;
	int r = INT_MAX;
	int t = 0;
	int q = 0;

	while (l < r)
	{
		t = l + (r - l) / 2;
		q = calculate(M, V, B, t);

		// this time constraint `t' is no good, we try a larger time constraint.
		if (q > Q)
			l = t + 1;
		// this time constraint `t' is good, we try a smaller time constraint.
		else
			r = t;
	}

	return r;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, M, Q;
		cin >> N >> M >> Q;

		vector<int> V(M);

		for (auto& v : V)
			cin >> v;

		vector<vector<int>> B(N, vector<int>(2));

		for (auto& b : B)
			cin >> b[0] >> b[1];

		cout << "Case #" << t << ": ";
		int r = gballoon(N, M, Q, V, B);

		if (r == INT_MAX)
			cout << "IMPOSSIBLE\n";
		else
			cout << r << "\n";
	}

	return 0;
}

