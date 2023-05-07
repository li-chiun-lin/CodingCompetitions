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

int infinite(int D, vector<int>& P)
{
	int t = 0;
	priority_queue<int> pq(begin(P), end(P));
	int ret = pq.top();

	while (pq.top() > 1)
	{
		// if I let them eat all their pancakes.
		ret = min(ret, t + pq.top());

		// I might, otherwise, split the largetst plate.
		int p = pq.top();
		pq.pop();
		pq.push(p / 2);
		pq.push(p - (p / 2));
		++ t;
	}
	

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int D;
		cin >> D;

		vector<int> P(D);

		for (auto& p : P)
			cin >> p;

		cout << "Case #" << t << ": ";
		cout << infinite(D, P) << "\n";
	}

	return 0;
}

