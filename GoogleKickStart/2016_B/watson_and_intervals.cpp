/*
to be continued.
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

void print(vector<int>& v)
{
	for (auto x : v)
		cout << setw(2) << x << " ";
	cout << "\n";
}

void print(vector<pair<int, int>>& v)
{
	for (auto& [l, r] : v)
		cout << l << "-" << r << " ";
	cout << "\n";
}

class cmp
{
public:
	bool operator()(pair<int, int>& a, pair<int, int>& b)
	{
		if (a.first == b.first)
			return a.second > b.second;

		return a.first < b.first;
	}
};

int cover(int N, int L1, int R1, long long A, long long B, int C1, int C2, int M)
{
	//vector<int> L(N + 1), R(N + 1);
	vector<pair<int, int>> interval(N + 1);
	int x = L1, xp = 0;
	int y = R1, yp = 0;
	int Rb = R1;

	//L[1] = L1;
	//R[1] = R1;
	
	interval[1] = {L1, R1};

	for (int i = 2; i <= N; ++i)
	{
		xp = (A * x + B * y + C1) % M;
		yp = (A * y + B * x + C2) % M;

		x = xp;
		y = yp;
		//L[i] = min(x, y);
		//R[i] = max(x, y);

		interval[i] = {min(x, y), max(x, y)};

		Rb = max(Rb, interval[i].second);
	}

	//cout << "\n";
	//print(L);
	//print(R);

	//cout << "r bound " << Rb << "\n";
	//return 0;

	sort(begin(interval), end(interval), cmp());

	
	//auto it = lower_bound(begin(interval), end(interval), make_pair(3, 3)) - begin(interval);
	//cout << it << "\n";
	
	

#if 0
	vector<int> acc(Rb + 2);

	for (int i = 1; i <= N; ++i)
	{
		++ acc[interval[i].first];
		-- acc[interval[i].second + 1];
	}

	//print(acc);

	for (int i = 1; i < acc.size(); ++i)
		acc[i] += acc[i - 1];


	//print(acc);

	

	for (int i = 0; i <= Rb; ++i)
		if (acc[i])
			++ total_cover;
#endif

	//cout << "total " << total_cover << "\n";
#if 0
	vector<pair<int, int>> vec = {{1, 2}, {1, 3}, {2, 3}, {1, 4}, {4, 4}, {4, 5}};
	sort(vec.begin(), vec.end(), cmp());
	print(vec);
#endif

	int max_gap = 0;

	interval[0] = {-1, -1};
	interval.push_back({INT_MAX, INT_MAX});
	int end = -1;
	int total_cover = 0;

	//print(interval);

	for (int i = 1; i <= N; ++i)
	{
		// case 1: entirly convered
		if (interval[i].second <= end)
		{

		}
		// case 2: there is a gap
		else if (end < interval[i].first)
		{
			total_cover += interval[i].second - interval[i].first + 1;
			end = interval[i].second;
		}
		// case 3: there is overlapping
		else
		{
			total_cover += interval[i].second - end;
			end = interval[i].second;
		}
#if 0
		int l = max(end, interval[i].first);
		int r = min(interval[i].second, interval[i + 1].first);

		//cout << i << ": " << l << " " << r << "\n";

		if (r < l)
			continue;

		int g = r - l + 1;
		if (r == interval[i + 1].first)
		{
			-- g;
		}
		if (l == end)
		{
			-- g;
		}

		max_gap = max(max_gap, g);

		end = max(end, interval[i].second);
#endif
	}

	cout << "cover " << total_cover << "\n";
	//cout << "gap " << max_gap << "\n";



	return 0;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N, L1, R1, A, B, C1, C2, M;
		cin >> N >> L1 >> R1 >> A >> B >> C1 >> C2 >> M;

		cout << "Case #" << t << ": ";
		cout << cover(N, L1, R1, A, B, C1, C2, M) << "\n";
	}

	return 0;
}

