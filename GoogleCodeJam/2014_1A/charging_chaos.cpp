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

bool dfs(int N, int L, vector<long long>& F, vector<long long>& TT, vector<int>& flip, int j, int acc, long long mask, int& cnt)
{
	if (j == L)
	{
		for (int i = 0; i < N; ++i)
			F[i] ^= mask;

		sort(begin(F), end(F));

		bool flag = true;

		for (int i = 0; i < N && flag; ++i)
			if (F[i] != TT[i])
				flag = false;

		if (flag)
		{
			cnt = min(cnt, acc);
			return true;
		}

		for (int i = 0; i < N; ++i)
			F[i] ^= mask;

		return false;
	}

	if (flip[j] == 0)
		return dfs(N, L, F, TT, flip, j + 1, acc, mask, cnt);
	else
	{
		if (dfs(N, L, F, TT, flip, j + 1, acc, mask, cnt))
			return true;

		mask |= 1L << j;

		return dfs(N, L, F, TT, flip, j + 1, acc + 1, mask, cnt);
	}
}

int charging(int N, int L, vector<string>& F, vector<string>& T)
{
	vector<int> flip(L);
	int half = N / 2;
	int c = 0;
	int f = 0;
	long long mask = 0;

	for (int j = 0; j < L; ++j)
	{
		int cntT = 0, cntF = 0;

		for (int i = 0; i < N; ++i)
		{
			if (T[i][j] == 1)
				++ cntT;

			if (F[i][j] == 1)
				++ cntF;
		}

		if (cntF == cntT)
		{
			if (N % 2 == 0 && cntF == half)
			{
				// the difference is exactly half, 
				// we might flip it, or might not.
				flip[j] = 2;
				++ f;
			}
		}
		else if (N - cntF == cntT)
		{
			// we definitely have to flip it.
			#if 0
			for (int i = 0; i < N; ++i)
				F[i][j] = 1 - F[i][j];
			#endif

			mask |= 1L << j;
			++ c;
		}
		else
		{
			// there is nothing we can do.
			//cout << "fail 1\n";
			return -1;
		}
	}

	int cnt = INT_MAX;
	vector<long long> tt(N);
	vector<long long> ff(N);

	for (int i = 0; i < N; ++i)
	{
		long long v = 0;

		for (int j = 0; j < L; ++j)
			if (T[i][j])
				v |= 1LL << j;

		tt[i] = v;
	}

	sort(begin(tt), end(tt));

	for (int i = 0; i < N; ++i)
	{
		long long v = 0;

		for (int j = 0; j < L; ++j)
			if (F[i][j])
				v |= 1LL << j;

		ff[i] = v;
	}

	//cout << "might " << f << "\n";

	dfs(N, L, ff, tt, flip, 0, 0, mask, cnt);

	return cnt == INT_MAX ? -1 : cnt + c;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, L;
		cin >> N >> L;

		vector<string> F(N), T(N);

		for (auto& f : F)
		{
			cin >> f;

			for (auto& x : f)
				x -= '0';
		}

		for (auto& f : T)
		{
			cin >> f;

			for (auto& x : f)
				x -= '0';
		}

		cout << "Case #" << t << ": ";
		auto r = charging(N, L, F, T);

		if (r == -1)
			cout << "NOT POSSIBLE\n";
		else
			cout << r << "\n";
	}

	return 0;
}

