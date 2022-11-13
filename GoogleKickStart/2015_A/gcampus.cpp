/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

void print(vector<int> v)
{
	for (int x : v)
		cout << x << "\n";
}


vector<int> gcampus(int N, int M, vector<vector<int>>& road)
{
    vector<int> ret;
    vector<bool> used(M);
    vector<vector<pair<int, int>>> adj(N);

    for (auto& r : road)
    {
        adj[r[0]].push_back({r[1], r[2]});
        adj[r[1]].push_back({r[0], r[2]});
    }

    // dijkstra algorithm starts from each node.
    for (int src = 0; src < N; ++ src)
    {
        vector<int> dst(N, INT_MAX);
        dst[src] = 0;
        queue<int> que;
        que.push(src);

        while (que.size())
        {
            int u = que.front();
            que.pop();

            for (auto& [v, c] : adj[u])
            {
                if (dst[v] == INT_MAX || dst[v] > dst[u] + c)
                {
                    dst[v] = dst[u] + c;
                    que.push(v);
                }
            }
        }

        // for any road, 
        // if the following conditions hold,
        // it is a part of a shortest path.
        for (int i = 0; i < M; ++i)
        {
            if (dst[road[i][0]] + road[i][2] == dst[road[i][1]] ||
                dst[road[i][1]] + road[i][2] == dst[road[i][0]])
                used[i] = true;
        }
    }

    // collect all the unused road
    for (int i = 0; i < M; ++i)
        if (! used[i])
            ret.push_back(i);

    sort(begin(ret), end(ret));

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, M;
        cin >> N >> M;

        vector<vector<int>> road(M, vector<int>(3));

        for (auto& r : road)
            cin >> r[0] >> r[1] >> r[2];

		cout << "Case #" << t << ":\n";
        print(gcampus(N, M, road));
	}

	return 0;
}

