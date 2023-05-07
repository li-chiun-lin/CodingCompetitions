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

int war(int N, vector<double>& B1, vector<double>& B2)
{
	set<double> S2(begin(B2), end(B2));

	int ret = 0;

	for (auto b1 : B1)
	{
		auto r = S2.lower_bound(b1);

		if (r == end(S2))
			++ ret;
		else
			S2.erase(r);
	}

	return ret;
}

int deceitful(int N, vector<double>& B1, vector<double>& B2)
{
	set<double> S1(begin(B1), end(B1));
	int ret = 0;

	for (auto b2 : B2)
	{
		auto r = S1.lower_bound(b2);

		if (r != end(S1))
		{
			++ ret;
			S1.erase(r);
		}
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<double> B1(N), B2(N);

		for (auto& b : B1)
			cin >> b;

		for (auto& b : B2)
			cin >> b;

		int r1 = deceitful(N, B1, B2);
		int r2 = war(N, B1, B2);

		cout << "Case #" << t << ": ";
		cout << r1 << " " << r2 << "\n";
	}

	return 0;
}

