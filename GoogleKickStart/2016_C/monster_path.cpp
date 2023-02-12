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

int d[] = {0, 1, 0, -1, 0};

void dfs(int R, int C, int S, int i, int j, vector<vector<double>>& exp, vector<vector<double>>& prob, double accu, double& ret)
{
	if (S -- == 0)
	{
		ret = max(ret, accu + exp[i][j] * prob[i][j]);
		return ;
	}

	double tmp = exp[i][j];
	exp[i][j] *= 1.0 - prob[i][j];
	accu += tmp * prob[i][j];

	for (int k = 0; k < 4; ++k)
	{
		int ii = i + d[k];
		int jj = j + d[k + 1];

		if (0 <= ii && ii < R && 0 <= jj && jj < C)
			dfs(R, C, S, ii, jj, exp, prob, accu, ret);
	}

	exp[i][j] = tmp;
}

double monster(int R, int C, int Rs, int Cs, int S, double P, double Q, vector<vector<char>>& grid)
{
	if (S == 0)
		return 0;

	vector<vector<double>> exp(R, vector<double>(C, 1));
	vector<vector<double>> prob(R, vector<double>(C));

	for (int i = 0; i < R; ++i)
		for (int j = 0; j < C; ++j)
			prob[i][j] = grid[i][j] == 'A' ? P : Q;

	double ret = 0;

	for (int k = 0; k < 4; ++k)
	{
		int ii = Rs + d[k];
		int jj = Cs + d[k + 1];

		if (0 <= ii && ii < R && 0 <= jj && jj < C)
			dfs(R, C, S - 1, ii, jj, exp, prob, 0, ret);
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int R, C, Rs, Cs, S;
		cin >> R >> C >> Rs >> Cs >> S;

		double P, Q;
		cin >> P >> Q;

		vector<vector<char>> grid(R, vector<char>(C));

		for (auto& r : grid)
			for (auto& c : r)
				cin >> c;

		cout << "Case #" << t << ": ";
		cout << fixed << setprecision(9) << monster(R, C, Rs, Cs, S, P, Q, grid) << "\n";
		cout << defaultfloat;
	}

	return 0;
}

