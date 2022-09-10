#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void print(vector<vector<int>>& adj)
{
	int w = 2;

	for (int i = 0; i < adj.size(); ++i)
	{
		cout << setw(w) << i << " : ";
		for (int x : adj[i])
			cout << setw(w) << x;
		cout << endl;
	}
	cout << endl;
}

void print(vector<vector<int>>& v)
{
	for (auto& r : v)
	{
		for (auto& c : r)
            cout << c << " ";
        cout << "\n";
	}
}

void print(vector<int>& v)
{
	for (int x : v)
		cout << x << " ";
	cout << "\n";
}

void print(vector<int>& v)
{
	for (int x : v)
		cout << setw(2) << x;
	cout << endl;
}

void print(vector<string>& v)
{
	for (auto& x : v)
		cout << x << "\n";
}

void print(vector<long long> v)
{
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}

void print(pair<int, int> p)
{
    cout << p.first << " " << p.second << "\n";
}