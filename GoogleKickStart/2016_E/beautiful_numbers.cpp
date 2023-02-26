/*
TLE
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

long long bnumber(long long N)
{
	long long base = 2;

	while (base)
	{
		auto n = N;

		while (n)
		{
			if (n % base != 1)
				break;

			n /= base;
		}

		if (n == 0)
			return base;

		++ base;
	}

	return 0;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		long long N;
		cin >> N;

		cout << "Case #" << t << ": ";
		cout << bnumber(N) << "\n";
	}

	return 0;
}

