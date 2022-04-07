/*
sample input
7
ABC
2
BA
CA
ABC
2
AB
AC
F
0
BANANA
4
AB
AN
BA
NA
FBHC
4
FB
BF
HC
CH
FOXEN
8
NI
OE
NX
EW
OI
FE
FN
XW
CONSISTENCY
26
AB
BC
CD
DE
EF
FG
GH
HI
IJ
JK
KL
LM
MN
NO
OP
PQ
QR
RS
ST
TU
UV
VW
WX
XY
YZ
ZA

sample output
Case #1: 2
Case #2: -1
Case #3: 0
Case #4: 3
Case #5: -1
Case #6: 8
Case #7: 100
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void print(map<char, vector<char>>& adj)
{
	for (auto& h : adj)
	{
		cout << h.first << ": ";
		for (auto& x : h.second)
			cout << x << " ";
		cout << endl;
	}
	cout << endl;
}

void print(map<char, int> &hit)
{
	for (auto& h : hit)
	{
		cout << h.first << " - " << h.second << endl;
	}
}

int dfs(map<char, int> &hit, map<char, vector<char>> &adj, map<char, bool> &visited, int n, int u, int &ret)
{
	int cnt = 0;
	visited[u] = true;

	for (int v : adj[u])
	{
		if (visited[v])
			continue;

		cnt += dfs(hit, adj, visited, n, v, ret) + hit[v];
	}

	visited[u] = false;

	return cnt;
}

int consis2(string str, vector<string> vec)
{
	map<char, int> hit;
	map<char, vector<char>> adj;
	map<char, bool> visited;
	int ret = INT_MAX;

	for (char c : str)
		++hit[c];

	if (hit.size() == 1)
		return 0;

	for (string& s : vec)
	{
		adj[s[1]].push_back(s[0]);
	}

	//print(hit);
	//print(adj);


	for (auto& h : hit)
	{
		int r = dfs(hit, adj, visited, str.size(), h.first, ret);
		if (r)
			ret = min(ret, r);
	}

	return ret == INT_MAX ? -1 : ret;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		string str = "";
		int K = 0;
		cin >> str;
		cin >> K;

		vector<string> vec(K);

		for (int j = 0; j < K; ++j)
			cin >> vec[j];

		cout << "Case #" << i << ": ";
		cout << consis2(str, vec) << endl;
	}

	return 0;
}