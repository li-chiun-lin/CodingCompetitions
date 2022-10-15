/*

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
#include <unordered_map>
#include <vector>

using namespace std;

int walktober(vector<vector<int>>& S, int P)
{
    int M = S.size();
    int N = S[0].size();
    int ret = 0;

    for (int j = 0; j < N; ++j)
    {
        int m = 0;
        for (int i = 0; i < M; ++i)
            m = max(m, S[i][j]);

        ret += max(0, m - S[P][j]);
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int M, N, P;
        cin >> M >> N >> P;

        vector<vector<int>> S(M, vector<int>(N));

        for (int i = 0; i < M; ++i)
            for (int j = 0; j < N; ++j)
                cin >> S[i][j];

		cout << "Case #" << t << ": ";
		cout << walktober(S, P - 1) << "\n";
	}

	return 0;
}

