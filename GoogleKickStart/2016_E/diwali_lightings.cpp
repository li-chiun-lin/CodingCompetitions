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

long long diwali(string &s, long long i, long long j)
{
	int n = s.size();
	vector<int> acc = {0};

	for (char c : s)
	{
		acc.push_back(acc.back());

		if (c == 'B')
			++ acc.back();
	}

	-- i;

	long long qi = i / n;
	long long ri = i % n;
	long long qj = j / n;
	long long rj = j % n;

	return qj * acc[n] + acc[rj] - (qi * acc[n] + acc[ri]);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		string S;
		cin >> S;

		long long I, J;
		cin >> I >> J;

		cout << "Case #" << t << ": ";
		cout << diwali(S, I, J) << "\n";
	}

	return 0;
}

