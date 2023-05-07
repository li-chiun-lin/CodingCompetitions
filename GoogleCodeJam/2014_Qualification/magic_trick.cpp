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

int magic(int R1, int R2, vector<vector<int>>& C1, vector<vector<int>>& C2)
{
	vector<int> idx1(17), idx2(17);

	for (int i = 0; i < 4; ++i)
	{
		for (int c : C1[i])
			idx1[c] = i + 1;

		for (int c : C2[i])
			idx2[c] = i + 1;
	}

	vector<int> match;

	for (int c = 1; c <= 16; ++c)
		if (idx1[c] == R1 && idx2[c] == R2)
			match.push_back(c);

	if (match.size() == 0)
		return -1;
	else if (match.size() != 1)
		return 1;

	return match[0];
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int R1, R2;
		vector<vector<int>> C1(4, vector<int>(4));
		vector<vector<int>> C2(4, vector<int>(4));

		cin >> R1;

		for (auto& r : C1)
			for (auto& c : r)
				cin >> c;

		cin >> R2;

		for (auto& r : C2)
			for (auto& c : r)
				cin >> c;

		auto r = magic(R1, R2, C1, C2);

		cout << "Case #" << t << ": ";

		if (r == 1)
			cout << "Bad magician!";
		else if (r == -1)
			cout << "Volunteer cheated!";
		else
			cout << r;

		cout << "\n";
	}

	return 0;
}

