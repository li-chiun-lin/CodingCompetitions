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

bool colliding(vector<int>& D, int N, vector<string>& S)
{
    set<string> ss;

    for (auto& s : S)
    {
        for (auto& c : s)
            c = D[c - 'A'] + '0';

        if (ss.count(s))
            return true;

        ss.insert(s);
    }

    return false;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        vector<int> D(26);

        for (auto& d : D)
            cin >> d;

        int N;
        cin >> N;

        vector<string> S(N);

        for (auto& s : S)
            cin >> s;

		cout << "Case #" << t << ": ";
		cout << (colliding(D, N, S) ? "YES" : "NO") << "\n";
	}

	return 0;
}

