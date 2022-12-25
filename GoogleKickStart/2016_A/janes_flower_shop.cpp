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

double calculate(int M, int I, vector<int>& C, double R)
{
	double r = 1;
	double sum = C[M - 1];

	for (int i = M - 2; i >= 0; --i)
		sum += C[i] * (r *= R);

	return sum - r * R * I;
}

double janes(int M, int I, vector<int>& C)
{
	double l = -1; 
	double r = 1;
	double m = INT_MAX;
	double s = 0;

	while (l < r)
	{
		auto m2 = l + (r - l) / 2;

		if (m2 == m)
			return m;

		m = m2;
		s = calculate(M, I, C, m + 1);

		if (s < 0)
			r = m;
		else if ( s > 0)
			l = m;
		else
			return m;
	}

	return -1;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int M;
		cin >> M;

		int I;
		cin >> I;

		vector<int> C(M);

		for (auto& c : C)
			cin >> c;

		cout << "Case #" << t << ": ";
		cout << fixed << setprecision(12) << janes(M, I, C) << "\n";
	}

	return 0;
}

