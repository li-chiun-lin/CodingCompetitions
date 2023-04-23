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

char ascii(long long N)
{
	long long l = 0; 
	long long r = 1e9;
	long long m = 0;

	while (l + 1 < r)
	{
		m = l + (r - l) / 2;

		if (m * (m + 1) * 13 < N)
			l = m;
		else
			r = m;
	}

	N -= l * (l + 1) * 13;
	int q = (N + l) / (l + 1);

	return 'A' + q - 1;
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
		cout << ascii(N) << "\n";
	}

	return 0;
}

