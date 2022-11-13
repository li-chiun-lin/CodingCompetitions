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
#include <unordered_map>
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

void print(vector<int> v)
{
    if (v.empty())
        return ;

    cout << v.front();

    for (int i = 1; i < v.size(); ++i)
        cout << " " << v[i];
	cout << "\n";
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
		cout << x << "\n";
}

void print(vector<int>& v)
{
	for (int x : v)
		cout << setw(2) << x;
	cout << endl;
}

void print(vector<double> v)
{
	cout << fixed << setprecision(9);
	
	for (auto x : v)
		cout << x << "\n";
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

void print(unordered_map<int, int>& hit)
{
    for (auto& h : hit)
        cout << h.first << " = " << h.second << "\n";
    cout << "\n";
}

void print(set<set<int>>& ss)
{
    for (auto& s : ss)
    {
        for (auto& x : s)
            cout << x << " ";
        cout << "\n";
    }
    cout << "\n";
}

void print(vector<set<int>>& ss)
{
    for (auto& s : ss)
    {
        for (auto& x : s)
            cout << x << " ";
        cout << "\n";
    }
    cout << "\n";
}