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

void print(vector<vector<int>>& adj)
{
	for (int i = 0; i < adj.size(); ++i)
	{
		cout << i << ": ";

		for (auto x : adj[i])
			cout << x << " ";
		
		cout << "\n";
	}
}

void dfs(int u, int d, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& parent, vector<int>& low, vector<int>& depth, vector<bool>& isArticulation)
{
	if (visited[u])
		return ;
		
	visited[u] = true;
	depth[u] = d;
	low[u] = d;
	int cnt = 0;
	bool flag = false;

	for (auto v : adj[u])
	{
		if (! visited[v])
		{
			parent[v] = u;

			dfs(v, d + 1, adj, visited, parent, low, depth, isArticulation);
			++ cnt;

			if (low[v] >= depth[u])
				flag = true;

			low[u] = min(low[u], low[v]);
		}
		else if (v != parent[u])
		{
			low[u] = min(low[u], depth[v]);
		}
	}

	if ((parent[u] && flag) || (parent[u] == 0 && cnt))
		isArticulation[u] = true;
}

int maintenance(int N, int L, vector<vector<int>>& S)
{
	vector<vector<int>> adj(N + L + 1);

	for (int i = 0; i < S.size(); ++i)
	{
		for (auto s : S[i])
		{
			adj[i + N + 1].push_back(s);
			adj[s].push_back(i + N + 1);
		}
	}

	//print(adj);

	vector<bool> visited(N + L + 1);
	vector<int> parent(N + L + 1);
	vector<int> low(N + L + 1);
	vector<int> depth(N + L + 1);
	vector<bool> isArticulation(N + L + 1);
	
	for (int i = N; i <= N + L; ++i)
		dfs(i, 0, adj, visited, parent, low, depth, isArticulation);

	int ret = 0;

	for (int i = 0; i < L; ++i)
		if (isArticulation[i + N + 1])
			++ ret;
	
	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, L;
		cin >> N >> L;

		vector<vector<int>> S(L);

		for (auto& s : S)
		{
			int K;
			cin >> K;

			s = vector<int>(K);

			for (auto& ss : s)
				cin >> ss;
		}

		cout << "Case #" << t << ": ";
		cout << maintenance(N, L, S) << "\n";
	}

	return 0;
}

