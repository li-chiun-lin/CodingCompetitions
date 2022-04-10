#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v)
{
	if (v.size() == 0)
		cout << "IMPOSSIBLE" << endl;
	else
	{
		for (auto x : v)
			cout << x << " ";
		cout << endl;
	}
}

vector<int> reversort_engineering(int n, int c)
{
	vector<int> ret(n);
	
	for (int i = 0; i < n; ++i)
		ret[i] = i + 1;

	// there should be at least cost 1 in every iteration.
	vector<int> cost(n, 1);
	cost.back() = 0;
	c -= n - 1;

	// divide rest of the overall cost into the cost of each iteration.
	for (int i = 0; i < n - 1 && c > 0; ++i)
	{
		int d = min(c, n - 1 - i);
		cost[i] += d;
		c -= d;
	}

	// if there are some cost left, then it is impossible to perform reversort().
	if (c)
		return {};

	//print(cost);

	// reverse the reversort.
	for (int i = n - 2; i >= 0; --i)
		reverse(ret.begin() + i, ret.begin() + i + cost[i]);

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int N, C;
		cin >> N >> C;

		cout << "Case #" << i << ": ";
		print(reversort_engineering(N, C));
	}

	return 0;
}