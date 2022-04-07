#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

#define D 0

template<class T>
void print_adj(vector<vector<T>>& adj)
{
	for (int i = 0; i < adj.size(); ++i)
	{
		cout << i << " - ";
		for (auto x : adj[i])
			cout << x << " ";
		cout << endl;
	}
	cout << endl;
}

long long dfs(vector<long long>& f, vector<vector<long long>>& adj, long long u, long long& acc)
{
	vector<long long> ret;

	for (long long v : adj[u])
		ret.push_back(dfs(f, adj, v, acc));

	if (ret.size())
	{
		sort(ret.begin(), ret.end());

		for (int i = 1; i < ret.size(); ++i)
			acc += ret[i];

		return max(f[u], ret[0]);
	}
	else
	{
		return f[u];
	}
}

long long chain(vector<long long> f, vector<long long> p)
{
	int n = (int)f.size();
	vector<vector<long long>> adj(n);
	vector<long long> root;
	long long acc = 0;

	for (int i = 0; i < n; ++i)
	{
		if (p[i])
			adj[p[i] - 1].push_back(i);
		else
			root.push_back(i);
	}

	for (auto x : root)
		acc += dfs(f, adj, x, acc);

#if D
	print_adj(adj);
#endif

	return acc;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int N;
		cin >> N;

		vector<long long> v1(N), v2(N);

		for (int j = 0; j < N; ++j)
			cin >> v1[j];

		for (int j = 0; j < N; ++j)
			cin >> v2[j];

		cout << "Case #" << i << ": ";
		cout << chain(v1, v2) << "\n";
	}

	return 0;
}