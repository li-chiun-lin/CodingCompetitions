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

int lazy(string& target)
{
	int mod = 1e9 + 7;
	int n = target.size();
	target.push_back(target.back());

	map<char, int> hit;

	++ hit[target[0]];
	++ hit[target[1]];

	long long ret = hit.size();

	for (int i = 1; i < n; ++i)
	{
		++ hit[target[i + 1]];

		ret = (ret * hit.size()) % mod;

		if (-- hit[target[i - 1]] == 0)
			hit.erase(target[i - 1]);
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		string target;
		cin >> target;

		cout << "Case #" << t << ": ";
		cout << lazy(target) << "\n";
	}

	return 0;
}

