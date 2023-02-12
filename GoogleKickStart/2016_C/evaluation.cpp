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

int get_id(string& key, map<string, int>& idx)
{
	if (idx.find(key) == end(idx))
		idx[key] = idx.size();

	return idx[key];
}

bool eval(int N, vector<string>& assigment)
{
	map<string, int> idx;
	map<int, vector<int>> adj;
	map<int, int> deg;
	string var = "";
	string arg = "";
	string fun = "";

	for (string& a : assigment)
	{
		a.pop_back();
		stringstream ss(a);

		getline(ss, var, '=');
		getline(ss, fun, '(');
		int v = get_id(var, idx);
		// force to create a record in `deg'
		int c = deg[v];

		while (getline(ss, arg, ','))
		{
			int u = get_id(arg, idx);

			adj[u].push_back(v);
			++ deg[v];
		}
	}

	queue<int> que;

	for (auto& [s, i] : idx)
	{
		// if this variable can never be evaluated, 
		if (deg.find(i) == end(deg))
			return false;

		if (deg[i] == 0)
			que.push(i);
	}

	while (que.size())
	{
		int u = que.front();
		que.pop();

		for (int v : adj[u])
			if (-- deg[v] == 0)
				que.push(v);
	}

	for (auto& [s, i] : deg)
		if (deg[i])
			return false;

	return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<string> assignment(N);

		for (auto& a : assignment)
			cin >> a;

		cout << "Case #" << t << ": ";
		cout << (eval(N, assignment) ? "GOOD" : "BAD") << "\n";
	}

	return 0;
}

