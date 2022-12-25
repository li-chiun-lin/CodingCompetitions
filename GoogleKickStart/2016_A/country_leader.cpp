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

string leader(int N, vector<string>& names)
{
	string leader = "";
	int leader_cnt = 0;

	for (auto& name : names)
	{
		int char_hit = 0;

		for (auto c : name)
			if (c != ' ')
				char_hit |= 1 << (c - 'A');

		int name_cnt = __builtin_popcount(char_hit);

		if (leader_cnt < name_cnt || (leader_cnt == name_cnt && name < leader))
		{
			leader_cnt = name_cnt;
			leader = name;
		}
	}

	return leader;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int N;
		cin >> N;

		vector<string> names(N);
		string tmp;
		getline(cin, tmp, (char)0x0a);

		for (auto& n : names)
		{
			getline(cin, n, (char)0x0a);
			//cout << "read " << n << "\n";
		}
		cout << "Case #" << t << ": ";
		cout << leader(N, names) << "\n";
	}

	return 0;
}

