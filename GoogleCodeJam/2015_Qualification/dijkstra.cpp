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

bool dijkstra(string& L, long long X)
{
	return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		string L;
		long long X;

		cin >> L >> X;

		cout << "Case #" << t << ": ";
		cout << (dijkstra(L, X) ? "YES" : "NO") << "\n";
	}

	return 0;
}

