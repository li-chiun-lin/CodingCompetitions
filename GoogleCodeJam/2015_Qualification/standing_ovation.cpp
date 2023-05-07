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

int standing_ovation(int S_max, string& S)
{
	int ret = 0;
	int acc = 0;
	int dif = 0;

	for (int i = 0; i < S.size(); ++i)
	{
		dif = max(i - acc, 0);
		ret += dif;
		acc += dif + (S[i] - '0');
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int S_max;
		cin >> S_max;

		string S;
		cin >> S;

		cout << "Case #" << t << ": ";
		cout << standing_ovation(S_max, S) << "\n";
	}

	return 0;
}

