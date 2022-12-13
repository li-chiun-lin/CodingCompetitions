/*
MLE
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

int K;
double A, B, C;

double dfs(int N, int X, vector<map<int, double>>& dp)
{
	if (N < 0)
		return X;

	if (dp[N].find(X) != end(dp[N]))
		return dp[N][X];

	return dp[N][X] = dfs(N - 1, X & K, dp) * A
		 			+ dfs(N - 1, X | K, dp) * B
		 			+ dfs(N - 1, X ^ K, dp) * C;
}

#if 0
double dfs(int i, int v, double p, int K, double A, double B, double C)
{
	if (i < 0)
		return p * v;
	
	return dfs(i - 1, v & K, p * A, K, A, B, C)
		 + dfs(i - 1, v | K, p * B, K, A, B, C)
		 + dfs(i - 1, v ^ K, p * C, K, A, B, C);
}
#endif

double dfs(int N, int X/*, int K, double A, double B, double C*/)
{
	vector<map<int, double>> dp(N);
	A /= 100;
	B /= 100;
	C /= 100;

	return dfs(N - 1, X, dp);
}

// MLE
double bfs(int N, int X, int K, double A, double B, double C)
{
	A /= 100.0;
	B /= 100.0;
	C /= 100.0;

	queue<pair<double, int>> que;
	que.push({1.0, X});

	for (int i = 0; i < N; ++i)
	{
		int size = que.size();

		for (int j = 0; j < size; ++j)
		{
			auto [p, v] = que.front();
			que.pop();

			que.push({p * A, v & K});
			que.push({p * B, v | K});
			que.push({p * C, v ^ K});
		}
	}

	double ret = 0;

	while (que.size())
	{
		auto [p, v] = que.front();
		que.pop();

		ret += p * v;
	}
	

	return ret;
}

int main()
{
	int T;
	cin >> T;

	srand(time(0));

	for (int t = 1; t <= T; ++t)
	{
		int N, X/*, K, A, B, C*/;
		cin >> N >> X >> K >> A >> B >> C;

		cout << "Case #" << t << ": ";
		//cout << fixed << setprecision(10) << bfs(N, X, K, A, B, C) << "\n";
		cout << fixed << setprecision(10) << dfs(N, X) << "\n";
	}

	return 0;
}

