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
#include <unordered_set>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    if (v.size())
    {
        cout << v.front();
        for (int i = 1; i < v.size(); ++i)
            cout << " " << v[i];
    }

	cout << "\n";
}

vector<int> travel(int N, int M, int K,  vector<vector<int>>& road, vector<vector<int>>& cost,  vector<vector<int>>& question)
{
    vector<int> ret(K, -1);
    vector<vector<pair<int, int>>> adj(N + 1);

    // we also have to record the road id `i', so we can associate to the corresponding cost table.
    for (int i = 0; i < M; ++i)
    {
        adj[road[i][0]].push_back({road[i][1], i});
        adj[road[i][1]].push_back({road[i][0], i});
    }

    for (int i = 0; i < K; ++i)
    {
        int d = question[i][0];
        int s = question[i][1];
        vector<int> visited(N + 1);

        // we consider each possible path in assending order by arriving time.
        priority_queue<
            pair<int, int>, 
            vector<pair<int, int>>, 
            greater<>
            > pq;

        pq.push({s, 1});

        while (pq.size())
        {
            auto [t, u] = pq.top();
            pq.pop();
            visited[u] = true;

            if (u == d)
            {
                ret[i] = t;
                break;
            }

            for (auto& [v, j] : adj[u])
            {
                if (visited[v])
                    continue;

                // find the traffic cost in 24-hours
                pq.push({t + cost[j][t % 24], v});
            }
        }

        // unless it is unreachable, we want the time difference.
        if (ret[i] != -1)
            ret[i] -= s;
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, M, K;
        cin >> N >> M >> K;

        vector<vector<int>> road(M, vector<int>(2));
        vector<vector<int>> cost(M, vector<int>(24));

        for (int i = 0; i < M; ++i)
        {
            cin >> road[i][0] >> road[i][1];

            for (int j = 0; j < 24; ++j)
                cin >> cost[i][j];
        }

        vector<vector<int>> question(K, vector<int>(2));

        for (auto& q : question)
            cin >> q[0] >> q[1];


		cout << "Case #" << t << ": ";
        print(travel(N, M, K, road, cost, question));
	}

	return 0;
}

