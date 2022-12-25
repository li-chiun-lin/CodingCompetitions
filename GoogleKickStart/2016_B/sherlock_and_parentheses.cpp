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
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

long long parentheses(int L, int R)
{
	long long m = min(L, R);

	return (m + 1) * m / 2;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int L, R;
		cin >> L >> R;

		cout << "Case #" << t << ": ";
		cout << parentheses(L, R) << "\n";
	}

	return 0;
}

