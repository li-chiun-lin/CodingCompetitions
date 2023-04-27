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

void print(vector<int>& v)
{
	cout << v[0];

	for (int i = 1; i < v.size(); ++i)
		cout << " " << v[i];
	cout << "\n";
}

#if 0
vector<int> spacious(int N, int K, vector<int>& A)
{
	vector<pair<int, int>> vec(N);
	vector<int> ret(N);

	for (int i = 0; i < N; ++i)
		vec[i] = {A[i], i};
	
	sort(begin(vec), end(vec));

	for (int i = 0; i < N; ++i)
	{
		int cnt = 1;

		// go right
		int ub = vec[i].first + K;

		for (int j = i + 1; j < N; ++j)
			if (ub <= vec[j].first)
			{
				ub = vec[j].first + K;
				++ cnt;
			}

		// go left
		int lb = vec[i].first - K;

		for (int j = i - 1; j >= 0; --j)
			if (vec[j].first <= lb)
			{
				lb = vec[j].first - K;
				++ cnt;
			}

		ret[vec[i].second] = cnt;
	}

	return ret;
}
#endif

vector<int> spacious(int N, int K, vector<int>& A)
{
	vector<pair<int, int>> vec(N);
	vector<int> B(N);
	vector<int> E(N, 1), S(N, 1);
	vector<int> ret(N);

	for (int i = 0; i < N; ++i)
		vec[i] = {A[i], i};
	
	sort(begin(vec), end(vec));

	for (int i = 0; i < N; ++i)
		B[i] = vec[i].first;

	//print(B);

	for (int i = 0; i < N; ++i)
	{
		auto j = upper_bound(begin(B), end(B), B[i] - K) - begin(B) - 1;

		if (j >= 0 && B[j] <= B[i] - K)
			E[i] = E[j] + 1;

		//cout << i << ": " << B[i] << " => " << j << " : " << E[i] << "\n";
	}

	for (int i = N - 1; i >= 0; --i)
	{
		auto j = lower_bound(begin(B), end(B), B[i] + K) - begin(B);
		
		if (j < N && B[j] >= B[i] + K)
			S[i] = S[j] + 1;

		//cout << i << ": " << B[i] << " => " << j << " : " << S[i] << "\n";
	}

	for (int i = 0; i < N; ++i)
		ret[vec[i].second] = E[i] + S[i] - 1;

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

		vector<int> A(N);

		for (auto& a : A)
			cin >> a;

		cout << "Case #" << t << ": ";
		auto ret = spacious(N, K, A);
		print(ret);
	}

	return 0;
}

