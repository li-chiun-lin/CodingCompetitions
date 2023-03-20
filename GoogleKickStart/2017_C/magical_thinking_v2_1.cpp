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

int popcount(long long x)
{
	int c = 0;

	while (x)
	{
		c += x & 1;
		x >>= 1;
	}

	return c;
}

int magical_thinking(vector<long long>& A, vector<int>& S, int Q)
{
	int n = S.size();
	unsigned long long ub = 1LL << Q;
	int best = 0;

	for (long long q = 0; q < ub; ++q)
	{
		bool okay = true;

		for (int i = 0; i < n && okay; ++i)
			okay = (Q - popcount(q ^ A[i])) == S[i];

		if (okay)
			best = max(best, Q - popcount(q ^ A.back()));
	}

	return best;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, Q;
		cin >> N >> Q;

		vector<long long> A(N + 1);

		for (auto& a : A)
		{
			long long b = 1;
			string s = "";
			cin >> s;

			for (char c : s)
			{
				if (c == 'T')
					a |= b;

				b <<= 1;
			}
		}

		vector<int> S(N);

		for (auto& s : S)
			cin >> s;

		cout << "Case #" << t << ": ";
		cout << magical_thinking(A, S, Q) << "\n";
	}

	return 0;
}

