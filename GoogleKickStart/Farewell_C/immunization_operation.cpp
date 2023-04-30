/*
to be continued.
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

void print(vector<int> v)
{
	for (auto x : v)
		cout << x << " ";
	
	cout << "\n";
}

vector<int> immunization(int V, int M, vector<int>& P, vector<int>& D, vector<int>& X)
{
	vector<int> right, left;

	for (int i = 0; i < V; ++i)
	{
		// patient that are at the right of their vaccine.
		if (P[i] < D[i])
			right.push_back(i);
		else
			left.push_back(i);
	}

	// reverse sort by the position of patients
	// it's the reverse visiting order if we go from west to east
	sort(begin(right), end(right), 
		[&](auto& a, auto& b)
		{
			return D[a] > D[b];
		}
	);

	// reverse sort by the position of vaccines
	sort(begin(left), end(left), 
		[&](auto& a, auto& b)
		{
			return P[a] > P[b];
		}
	);

	long long idx = 0;
	int cnt = 0;
	vector<int> ret;
	// smallest/farest west first.
	priority_queue<int, vector<int>, greater<>> pq;

	for (auto x : X)
	{
		idx += x;
		cnt = 0;

		// the robots go toward east
		if (x > 0)
		{
			// for those patients that are at the right/east position of their vaccines, 
			// they are fulfilled.
			while (right.size() && D[right.back()] <= idx)
			{
				right.pop_back();
				++ cnt;
			}

			// for those patients that are at the left/west of their vaccines, 
			// the robots can at least collect their vaccines.
			while (left.size() && P[left.back()] <= idx)
			{
				pq.push(-D[left.back()]);
				left.pop_back();
			}
		}
		// the robots go toward west
		else
		{
			// there is nothing to do with those 'right' patients.

			// for those 'left' patients, if their vacines have been picked by the robots, 
			// they are fulfulled.
			while (pq.size() && -pq.top() >= idx)
			{
				pq.pop();
				++ cnt;
			}
		}

		ret.push_back(cnt);
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int V, M;
		cin >> V >> M;

		vector<int> P(V), D(V), X(M);

		for (auto& p : P)
			cin >> p;

		for (auto& d : D)
			cin >> d;

		for (auto& x : X)
			cin >> x;

		cout << "Case #" << t << ": ";
		auto r = immunization(V, M, P, D, X);
		print(r);
	}

	return 0;
}

