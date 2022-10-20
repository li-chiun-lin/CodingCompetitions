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

void print(vector<int>& v)
{
	for (int x : v)
		cout << x << "\n";
}

vector<int> spaceship(vector<string>& C, vector<vector<int>>& T, vector<vector<int>>& soldier)
{
    int N = C.size();
    map<string, vector<int>> grp;

    for (int i = 0; i < N; ++i)
        grp[C[i]].push_back(i + 1);

    for (auto& g : grp)
    {
        for (int i = 0; i < g.second.size(); ++i)
            for (int j = i + 1; j < g.second.size(); ++j)
            {
                T.push_back({g.second[i], g.second[j], 0});
                T.push_back({g.second[j], g.second[i], 0});
            }
    }

    vector<vector<pair<int, int>>> adj(N + 1);

    for (auto& t : T)
        adj[t[0]].push_back({t[1], t[2]});

    vector<int> cost;

    for (auto& s : soldier)
    {
        vector<int> dst(N + 1, INT_MAX);

        dst[s[0]] = 0;

        queue<int> que;
        que.push(s[0]);

        while (que.size())
        {
            int u = que.front();
            que.pop();

            for (auto& v : adj[u])
            {
                if (dst[v.first] > dst[u] + v.second)
                {
                    dst[v.first] = dst[u] + v.second;
                    que.push(v.first);
                }
            }
        }

        if (dst[s[1]] == INT_MAX)
            cost.push_back(-1);
        else
            cost.push_back(dst[s[1]]);
    }

    return cost;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<string> C(N);

        for (auto& c : C)
            cin >> c;

        int M;
        cin >> M;
        vector<vector<int>> T(M, vector<int>(3));

        for (auto& t : T)
            cin >> t[0] >> t[1] >> t[2];

        int S;
        cin >> S;
        vector<vector<int>> soldier(S, vector<int>(2));

        for (auto& s : soldier)
            cin >> s[0] >> s[1];
        

		cout << "Case #" << t << ":\n";
		auto cost = spaceship(C, T, soldier);
        print(cost);
	}

	return 0;
}

