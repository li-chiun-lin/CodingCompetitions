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

void print(vector<int> v)
{
	if (v.empty())
		cout << "IMPOSSIBLE\n";
	else
	{
		for (auto x : v)
			cout << x << " ";
		cout << "\n";
	}
}

vector<int> rainbow_sort(int N, vector<int>& S)
{
	vector<int> ret;
	set<int> seem;

	seem.insert(S[0]);
	ret.push_back(S[0]);

	for (int i = 1; i < N; ++i)
	{
		if (S[i] != S[i - 1])
		{
			if (seem.count(S[i]))
				return {};

			seem.insert(S[i]);
			ret.push_back(S[i]);
		}
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<int> S(N);

		for (auto& s : S)
			cin >> s;

		cout << "Case #" << t << ": ";
		print(rainbow_sort(N, S));
	}

	return 0;
}

