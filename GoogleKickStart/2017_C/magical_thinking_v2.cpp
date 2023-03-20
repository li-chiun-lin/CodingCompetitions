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

int dfs_1(vector<string>& A, vector<int>& S, int i, vector<vector<int>>& dp)
{
	// end case
	if (i < 0)
	{
		if (S[0] == 0)
			return 0;

		return INT_MIN;
	}

	if (dp[S[0]][i] != -1)
		return dp[S[0]][i];

	int ret = INT_MIN;

	// we could both be correct or both be wrong.
	if (A[0][i] == A[1][i])
	{
		// assuming we both are correct
		if (S[0])
		{
			-- S[0];
			int ret1 = dfs_1(A, S, i - 1, dp);
			++ S[0];

			ret = max(ret, ret1 + 1);
		}
		
		// we might both be wrong
		int ret2 = dfs_1(A, S, i - 1, dp);
		ret = max(ret, ret2);
	}
	// only one of us is correct
	else
	{
		// I am correct
		int ret1 = dfs_1(A, S, i - 1, dp);
		ret = max(ret, ret1 + 1);

		// I am wrong
		if (S[0])
		{
			--S[0];
			int ret2 = dfs_1(A, S, i - 1, dp);
			++S[0];

			ret = max(ret, ret2);
		}
	}

	return dp[S[0]][i] = ret;
}

int dfs_2(vector<string>& A, vector<int>& S, int i, vector<vector<vector<int>>>& dp)
{
	// end case
	if (i < 0)
	{
		if (S[0] == 0 && S[1] == 0)
			return 0;

		return INT_MIN;
	}

	if (dp[S[0]][S[1]][i] != -1)
		return dp[S[0]][S[1]][i];

	int ret = INT_MIN;

	// all three of us have same answer for this question
	if (A[0][i] == A[2][i] && A[1][i] == A[2][i])
	{
		// assuming all of us are correct
		if (S[0] && S[1])
		{
			-- S[0];
			-- S[1];
			int ret1 = dfs_2(A, S, i - 1, dp);
			++ S[1];
			++ S[0];

			ret = max(ret, ret1 + 1);
		}

		// assuming all of us are wrong
		int ret2 = dfs_2(A, S, i - 1, dp);
		ret = max(ret, ret2);
	}
	// if my answer is the same as my first friend, 
	else if (A[0][i] == A[2][i])
	{
		// assuming I am correct, then my first friend is also correct
		if (S[0])
		{
			-- S[0];
			int ret1 = dfs_2(A, S, i - 1, dp);
			++ S[0];

			ret = max(ret, ret1 + 1);
		}
		
		// assumign I am wrong, then my second friend is correct
		if (S[1])
		{
			-- S[1];
			int ret2 = dfs_2(A, S, i - 1, dp);
			++ S[1];

			ret = max(ret, ret2);
		}
	}
	// if my answer is the same as my sescond friend, 
	else if (A[1][i] == A[2][i])
	{
		// assuming I am correct, then my second friend is also correct
		if (S[1])
		{
			-- S[1];
			int ret1 = dfs_2(A, S, i - 1, dp);
			++ S[1];

			ret = max(ret, ret1 + 1);
		}
		
		// assumign I am wrong, then my first friend is correct
		if (S[0])
		{
			-- S[0];
			int ret2 = dfs_2(A, S, i - 1, dp);
			++ S[0];

			ret = max(ret, ret2);
		}
	}
	// if my answer is different from my friends
	else
	{
		// assuming I am correct
		int ret1 = dfs_2(A, S, i - 1, dp);
		ret = max(ret, ret1 + 1);

		// assumign I am wrong, then both of my friends must be correct
		if (S[0] && S[1])
		{
			-- S[0];
			-- S[1];
			int ret2 = dfs_2(A, S, i - 1, dp);
			++ S[1];
			++ S[0];

			ret = max(ret, ret2);
		}
	}

	return dp[S[0]][S[1]][i] = ret;
}

int magical_thinking_1(int Q, vector<string>& A, vector<int>& S)
{
	vector<vector<int>> dp(Q + 1, vector<int>(Q + 1, -1));
	return dfs_1(A, S, Q - 1, dp);
}

int magical_thinking_2(int Q, vector<string>& A, vector<int>& S)
{
	vector<vector<vector<int>>> dp(Q + 1, 
		vector<vector<int>>(Q + 1, 
		vector<int>(Q + 1, -1)));

	return dfs_2(A, S, Q - 1, dp);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, Q;
		cin >> N >> Q;

		vector<string> A(N + 1);
		vector<int> S(N);

		for (auto& a : A)
			cin >> a;

		for (auto& s : S)
			cin >> s;

		cout << "Case #" << t << ": ";
		cout << (N == 1 ? magical_thinking_1(Q, A, S) : magical_thinking_2(Q, A, S)) << "\n";
	}

	return 0;
}

