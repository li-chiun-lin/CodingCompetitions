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

void print(vector<double> v)
{
	cout << setprecision(11);

	for (auto x : v)
		cout << " " << x ;
	cout << "\n";
}

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

void build_adj(vector<int>& edge, vector<vector<int>>& adj)
{
	for (int i = 0; i < edge.size(); ++i)
	{
		adj[i + 1].push_back(edge[i]);
		adj[edge[i]].push_back(i + 1);
	}
}

void dfs1(int N, vector<vector<int>>& adj, int p, int n, vector<double>& S, vector<double>& D)
{
	S[n] = 1;
	D[n] = 0;

	for (int i : adj[n])
		if (i != p)
		{
			dfs1(N, adj, n, i, S, D);
			S[n] += S[i];
			D[n] += D[i];
		}

	// for each edge to its descendants, exclude node n itself.
	D[n] += S[n] - 1;
}

void dfs2(int N, vector<vector<int>>& adj, int p, int n, vector<double>& S, vector<double>& D, vector<double>& P)
{
	P[n] = D[n];

	if (p)
		// N - S[n]: edges connecting n to p
		// P[p] - (D[n] + S[n]): path sums starting from p that do not go through n.
		P[n] += (N - S[n]) + (P[p] - (D[n] + S[n]));

	for (int i : adj[n])
		if (i != p)
			dfs2(N, adj, n, i, S, D, P);
}

vector<double> overpass(long long W, long long E, int C, vector<int>& X, vector<int>& F, vector<pair<int, int>>& AB)
{
	vector<double> ret;
	vector<vector<int>> adjW(W + 1), adjE(E + 1);

	build_adj(X, adjW);
	build_adj(F, adjE);

	// S[n]: the size of subtree rooted by n.
	// D[n]: the path sum from node n to all its descendants.
	// P[n]: the path sum from node n to all other nodes in the same side.
	// Q: the total path sum in one side.
	vector<double> SW(W + 1), SE(E + 1), DW(W + 1), DE(E + 1), PW(W + 1), PE(E + 1);

	dfs1(W, adjW, 0, 1, SW, DW);
	dfs1(E, adjE, 0, 1, SE, DE);

	dfs2(W, adjW, 0, 1, SW, DW, PW);
	dfs2(E, adjE, 0, 1, SE, DE, PE);

#if 0
	cout << "\n";
	print(adjW);
	print(SW);
	print(DW);
	print(PW);
#endif

	double QW = accumulate(begin(PW), end(PW), 0.0) / 2;
	double QE = accumulate(begin(PE), end(PE), 0.0) / 2;
	double N = (W + E) * (W + E - 1) / 2;

	for (auto& [a, b] : AB)
		ret.push_back((PW[a] * E + PE[b] * W + W * E + QW + QE) / N);

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int W, E, C;
		cin >> W >> E >> C;

		vector<int> X(W - 1), F(E - 1);
		vector<pair<int, int>> AB(C);

		for (auto& x : X)
			cin >> x;

		for (auto& f : F)
			cin >> f;

		for (auto& a : AB)
			cin >> a.first >> a.second;

		cout << "Case #" << t << ":";
		print(overpass(W, E, C, X, F, AB));
	}

	return 0;
}

