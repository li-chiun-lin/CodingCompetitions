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

unsigned long long management(int N, vector<int>& D, vector<long long>& C)
{
	vector<int> in_degree(N);
	vector<long long> R(N);
	unsigned long long ret = 0;

	for (int i = 0; i < N; ++i)
		++ in_degree[D[i]];
	
	queue<int> que;

	for (int i = 0; i < N; ++i)
		if (in_degree[i] == 0)
			que.push(i);

	while (que.size())
	{
		auto u = que.front();
		que.pop();

		ret += max(C[u] - R[u], 0LL);
		R[D[u]] += C[u];

		if (-- in_degree[D[u]] == 0)
			que.push(D[u]);
	}

	vector<unsigned long long> cost_in_cycle(N);

	for (int s = 0; s < N; ++s)
	{
		if (in_degree[s] == 0)
			continue;

		unsigned long long sum_of_costs = 0;
		unsigned long long c = LLONG_MAX;
		int p = 0;
		int u = s;

		do
		{
			p = u;
			u = D[u];

			cost_in_cycle[u] = max(C[u] - R[u] - C[p], 0LL);
			sum_of_costs += cost_in_cycle[u];
		} while (u != s);

		u = s;

		do
		{
			p = u;
			u = D[u];

			-- in_degree[u];
			c = min(c, sum_of_costs - cost_in_cycle[u] + max(C[u] - R[u], 0LL));
		} while (u != s);

		ret += c;
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<int> D(N);
		vector<long long> C(N);

		for (auto& d : D)
		{
			cin >> d;
			-- d;
		}

		for (auto& c : C)
			cin >> c;

		cout << "Case #" << t << ": ";
		cout << management(N, D, C) << "\n";
	}

	return 0;
}

