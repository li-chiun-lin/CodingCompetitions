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
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

void print(vector<long long>& p)
{
	for (auto& x : p)
		cout << x << " ";
	cout << "\n";
}

void print(vector<int>& p)
{
	for (auto& x : p)
		cout << setw(3) << x << " ";
	cout << "\n";
}

void print(vector<vector<int>>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		cout << setw(2) << i << ": ";
		print(v[i]);
	}
	cout << "\n";
}

int N;
vector<int> K, L, LL(8);
vector<vector<int>> A, C;

bool dfs(int i, int M, long long& best)
{
	if (i < 0)
	{
		long long p = 0;

		for (int j = 0; j < 8; ++j)
			p += A[LL[j]][L[LL[j]] - 1];

		best = max(best, p);
		return true;
	}
	else
	{
		int ii = LL[i];
		int highest_lvl = L[ii];
		int cost = 0;

		while (highest_lvl < K[ii] && cost + C[ii][highest_lvl - 1] <= M)
		{
			cost += C[ii][highest_lvl - 1];
			++ highest_lvl;
		}

		while (highest_lvl > L[ii])
		{
			swap(L[ii], highest_lvl);
			bool r = dfs(i - 1, M - cost, best);
			swap(L[ii], highest_lvl);

			if (r)
				return highest_lvl == K[ii];

			-- highest_lvl;
			cost -= C[ii][highest_lvl - 1];
		}

		return dfs(i - 1, M, best) && highest_lvl == K[ii];
	}
}

long long dfs(int M)
{
	long long best = 0;

#if 0
	int limit = 1 << N;

	for (int i = (1 << 8) - 1; i < limit; ++i)
		if (__builtin_popcount(i) == 8)
		{
			int j = 0;
			int idx = 0;
			int ii = i;

			while (ii)
			{
				if (ii & 1)
					LL[j ++] = idx;

				++ idx;
				ii >>= 1;
			}

			//print(LL);

			dfs(7, M, best);
		}
#endif

	for (LL[0] = 0; LL[0] < N; ++LL[0])
		for (LL[1] = LL[0] + 1; LL[1] < N; ++LL[1])
			for (LL[2] = LL[1] + 1; LL[2] < N; ++LL[2])
				for (LL[3] = LL[2] + 1; LL[3] < N; ++LL[3])
					for (LL[4] = LL[3] + 1; LL[4] < N; ++LL[4])
						for (LL[5] = LL[4] + 1; LL[5] < N; ++LL[5])
							for (LL[6]= LL[5] + 1; LL[6] < N; ++LL[6])
								for (LL[7] = LL[6] + 1; LL[7] < N; ++LL[7])
								{
									dfs(7, M, best);
								}


	return best;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int M;
		cin >> M >> N;

		K.resize(N);
		L.resize(N);
		A.resize(N);
		C.resize(N);
		
		for (int i = 0; i < N; ++i)
		{
			cin >> K[i] >> L[i];

			A[i] = vector<int>(K[i]);
			C[i] = vector<int>(K[i] - 1);

			for (auto& a : A[i])
				cin >> a;

			for (auto& c : C[i])
				cin >> c;
		}

		cout << "Case #" << t << ": ";
		cout << dfs(M) << "\n";
	}

	return 0;
}

