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

int math_encoder(int N, vector<int>& K)
{
	int m = 1e9 + 7;
	vector<long long> power(N);

	power[0] = 1;

	for (int i = 1; i < N; ++i)
		power[i] = (power[i - 1] << 1) % m;

	sort(begin(K), end(K));

	long long sum = 0;

	for (int l = 0; l < N; ++l)
		for (int r = l + 1; r < N; ++r)
			sum = (sum + power[r - l - 1] * (K[r] - K[l])) % m;

	return sum;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<int> K(N);

		for (auto& k : K)
			cin >> k;

		cout << "Case #" << t << ": ";
		cout << math_encoder(N, K) << "\n";
	}

	return 0;
}

