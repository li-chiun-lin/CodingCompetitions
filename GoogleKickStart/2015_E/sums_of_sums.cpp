/*
TLE
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

void print(vector<long long> v)
{
	for (auto x : v)
		cout << x << "\n";
}

#if 1
vector<long long> sumsum(int N, int Q, vector<int>& num, vector<pair<long long, long long>>& query)
{
	

	return {};
}
#endif

#if 0
vector<long long> sumsum(int N, int Q, vector<int>& num, vector<pair<long long, long long>>& query)
{
	long long size = ((long long)(N * (N + 1)) / 2) + 1;
	vector<long long> new_array(size);
	//long long *new_array = new long long[size];
	//new_array[0] = 0;
	long long k = 1;

	//return {};

	for (int i = 0; i < N; ++i)
	{
		long long s = 0;
		for (int j = i; j < N; ++j)
		{
			//new_array.push_back(s += num[j]);
			new_array[k ++] = (s += num[j]);
		}
	}

	sort(begin(new_array), end(new_array));
	//sort(new_array, new_array + size);

	for (int i = 1; i < size; ++i)
		new_array[i] += new_array[i - 1];

	vector<long long> ret;

	for (auto [l, r] : query)
		ret.push_back(new_array[r] - new_array[l - 1]);

	return ret;
}
#endif

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, Q;
		cin >> N >> Q;

		vector<int> num(N);
		vector<pair<long long, long long>> query(Q);

		for (auto& x : num)
			cin >> x;

		for (auto& [l, r] : query)
			cin >> l >> r;

		cout << "Case #" << t << ":\n";
		print(sumsum(N, Q, num, query));
	}

	return 0;
}

