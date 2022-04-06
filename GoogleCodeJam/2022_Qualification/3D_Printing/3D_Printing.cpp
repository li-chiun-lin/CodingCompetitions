#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>
#include <string>

using namespace std;

/*
sample input
3
300000 200000 300000 500000
300000 200000 500000 300000
300000 500000 300000 200000
1000000 1000000 0 0
0 1000000 1000000 1000000
999999 999999 999999 999999
768763 148041 178147 984173
699508 515362 534729 714381
949704 625054 946212 951187



sample output
Case #1: 300000 200000 300000 200000
Case #2: IMPOSSIBLE
Case #3: 400001 100002 100003 399994
*/

string solve(vector<vector<long long>> car)
{
	vector<long long> m(4, INT_MAX);
	long long full = (long long)1e6;
	long long sum = 0;

	for (int c = 0; c < 4; ++c)
	{
		for (int p = 0; p < 3; ++p)
			m[c] = min(m[c], car[p][c]);

		sum += m[c];
	}

	if (sum < full)
		return "IMPOSSIBLE";

	long long d = sum - full;
	string ret = "";

	for (int c = 0; c < 4 && d > 0; ++c)
	{
		if (m[c] <= d)
		{
			d -= m[c];
			m[c] = 0;
		}
		else
		{
			m[c] -= d;
			d = 0;
		}
	}

	for (int c = 0; c < 4; ++c)
		ret += to_string(m[c]) + " ";

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		vector<vector<long long>> car(3, vector<long long>(4));

		for (int p = 0; p < 3; ++p)
			for (int c = 0; c < 4; ++c)
				cin >> car[p][c];

		cout << "Case #" << i << ": " << solve(car) << endl;
	}

	return 0;
}