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

double cookie(double C, double F, double X, double R = 2.0)
{
	double days_to_win = X / R;
	double days_to_buy_farms = 0;
	
	while (true)
	{
		days_to_buy_farms += C / R;
		R += F;

		double d2 = days_to_buy_farms + X / R;

		//cout << d2 << "\n";

		if (d2 > days_to_win)
			return days_to_win;

		days_to_win = d2;
	}

	return days_to_win;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		double C, F, X;
		cin >> C >> F >> X;

		cout << "Case #" << t << ": ";
		cout << setprecision(10) << cookie(C, F, X) << "\n";
	}

	return 0;
}

