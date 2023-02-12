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

bool soldiers(int N, vector<pair<int, int>>& soldier)
{
	
	return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<pair<int, int>> soldier(N);

		for (auto& [a, d] : soldier)
			cin >> a >> d;

		cout << "Case #" << t << ": ";
		cout << (soldiers(N, soldier) ? "YES" : "No") << "\n";
	}

	return 0;
}

