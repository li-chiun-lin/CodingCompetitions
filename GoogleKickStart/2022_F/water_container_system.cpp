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
#include <vector>

using namespace std;

int watercontainer(vector<vector<int>>& con, vector<int>& query)
{
    int n = con.size() + 1;
    vector<vector<int>> adj(n + 1);

    for (auto& c : con)
    {
        adj[c[0]].push_back(c[1]);
        adj[c[1]].push_back(c[0]);
    }

    vector<bool> visited(n + 1);
    queue<int> que;
    vector<int> lvl_size;
    int size = 0;

    que.push(1);
    visited[1] = true;

    while (size = que.size())
    {
        lvl_size.push_back(size);

        while (size --)
        {
            int u = que.front();
            que.pop();

            for (int v : adj[u])
                if (! visited[v])
                {
                    visited[v] = true;
                    que.push(v);
                }
        }
    }

    int cnt = 0;
    int q = query.size();

    for (int s : lvl_size)
    {
        if (q >= s)
        {
            q -= s;
            cnt += s;
        }
        else
            break;
    }

    return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, Q;
        cin >> N >> Q;

        vector<vector<int>> con(N - 1, vector<int>(2));
        vector<int> query(Q);

        for (int i = 0; i < N - 1; ++i)
            cin >> con[i][0] >> con[i][1];

        for (int i = 0; i < Q; ++i)
            cin >> query[i];

		cout << "Case #" << t << ": ";
		cout << watercontainer(con, query) << "\n";
	}

	return 0;
}

