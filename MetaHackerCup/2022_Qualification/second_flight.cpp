/*
run out of memeory
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void print(vector<long long>& v)
{
	for (long long x : v)
		cout << x << " ";
	cout << "\n";
}

void secondflight(int N, vector<vector<int>>& R, vector<vector<int>>& D)
{
    int M = R.size();
    int Q = D.size();

    //set<int> ss;
    //vector<vector<int>> dst(N + 1, vector<int>(N + 1));
    //int **dst = new int *[N];
    //for (int i = 0; i < N; ++i)
    //    dst[i] = new int[N];

    //unsigned long long **dst2 = new unsigned long long *[N];
    //for (int i = 0; i < N; ++i)
    //    dst2[i] = new unsigned long long[N];
    //vector<vector<int>> dst2(N + 1, vector<int>(N + 1, -1));
    vector<vector<int>> adj(N + 1);


    vector<unordered_map<int, int>> dst(N + 1);
    vector<unordered_map<int, long long>> dst2(N + 1);

    for (auto& r : R)
    {
        dst[r[0]][r[1]] = r[2];
        dst[r[1]][r[0]] = r[2];

        adj[r[0]].push_back(r[1]);
        adj[r[1]].push_back(r[0]);
    }

    vector<long long> ret;

    for (auto& d : D)
    {
        #if 1
        if (dst2[d[0]][d[1]] == 0)
        {
            long long cnt = 0;

            for (auto& x : adj[d[0]])
                cnt += min(dst[d[0]][x], dst[x][d[1]]);

            dst2[d[0]][d[1]] = cnt + dst[d[0]][d[1]] * 2;
            dst2[d[1]][d[0]] = dst2[d[0]][d[1]];
        }
        
        ret.push_back(dst2[d[0]][d[1]]);
        #endif
    }

    print(ret);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, M, Q;
        cin >> N >> M >> Q;

        vector<vector<int>> R(M, vector<int>(3));

        for (auto& r : R)
            cin >> r[0] >> r[1] >> r[2];

        vector<vector<int>> D(Q, vector<int>(2));

        for (auto& d : D)
            cin >> d[0] >> d[1];

		cout << "Case #" << t << ": ";
		secondflight(N, R, D);
	}

	return 0;
}

