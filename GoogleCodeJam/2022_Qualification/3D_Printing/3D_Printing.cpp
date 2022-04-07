#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>
#include <string>

using namespace std;

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