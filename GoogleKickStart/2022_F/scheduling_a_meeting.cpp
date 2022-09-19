/*
to be continued.
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int schedule(vector<vector<int>>& meeting, int N, int K, int X, int D)
{
    vector<int> occupied(D + 1);

    for (auto& m : meeting)
    {
        ++ occupied[m[0]];
        -- occupied[m[1]];
    }

    for (int i = 1; i <= D; ++i)
        occupied[i] += occupied[i - 1];

    return 0;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, K, X, D;
        cin >> N >> K >> X >> D;

        int M;
        cin >> M;

        vector<vector<int>> meeting(M, vector<int>(2));
        int id;

        for (auto& m : meeting)
            cin >> id >> m[0] >> m[1];

		cout << "Case #" << t << ": ";
		cout << schedule(meeting, N, K, X, D) << "\n";
	}

	return 0;
}

