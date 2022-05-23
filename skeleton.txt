/*

*/

#include <algorithm>
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

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{

		cout << "Case #" << i << ": ";
		cout << 0 << endl;
	}

	return 0;
}

void print(vector<vector<int>>& adj)
{
	for (int i = 0; i < adj.size(); ++i)
	{
		cout << setw(2) << i << " : ";
		for (int x : adj[i])
			cout << setw(2) << x;
		cout << endl;
	}
	cout << endl;
}

void print(vector<int>& v)
{
	for (int x : v)
		cout << setw(2) << x;
	cout << endl;
}