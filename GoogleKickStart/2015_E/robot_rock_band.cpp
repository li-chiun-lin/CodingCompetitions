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

long long robot(int N, int K, vector<vector<int>>& num)
{
	long long ret = 0;
	map<int, int> AB, CD;

	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
		{
			++AB[num[0][i] ^ num[1][j]];
			++CD[num[2][i] ^ num[3][j]];
		}

	for (auto& [k, v] : AB)
		ret += (long long)CD[k ^ K] * v;

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, K;
		cin >> N >> K;

		vector<vector<int>> num(4, vector<int>(N));

		for (auto& r : num)
			for (auto& c : r)
				cin >> c;

		cout << "Case #" << t << ": ";
		cout << robot(N, K, num) << "\n";
	}

	return 0;
}

