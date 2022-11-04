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
		cout << " " << x << "\n";
}

vector<int> taking(vector<vector<int>>& line, vector<int>& waiting, vector<vector<int>>& tunnel, vector<vector<int>>& query)
{
    int N = line.size();
    map<vector<int>, vector<vector<int>>> adj;

    // for each metro line, 
    for (int i = 0; i < line.size(); ++i)
    {
        // for each combination of [src_stop, dst_stop], 
        // we find the traveling time between them.
        for (int src_stop = 0; src_stop < line[i].size(); ++src_stop)
        {
            int traveling_time = 0;
            for (int dst_stop = src_stop + 1; dst_stop <= line[i].size(); ++dst_stop)
            {
                traveling_time += line[i][dst_stop - 1];
                // bi-directional
                adj[{i, src_stop}].push_back({i, dst_stop, traveling_time});
                adj[{i, dst_stop}].push_back({i, src_stop, traveling_time});
            }
        }
    }

    // for each tunnel, 
    for (auto& t : tunnel)
    {
        int src_line = t[0] - 1;
        int src_stop = t[1] - 1;
        int dst_line = t[2] - 1;
        int dst_stop = t[3] - 1;
        int walking_time = t[4];

        // bi-directional
        adj[{src_line, src_stop}].push_back({dst_line, dst_stop, walking_time});
        adj[{dst_line, dst_stop}].push_back({src_line, src_stop, walking_time});
    }

    vector<int> ret;

    // for each query, 
    for (auto& q : query)
    {
        int src_line = q[0] - 1;
        int src_stop = q[1] - 1;
        int dst_line = q[2] - 1;
        int dst_stop = q[3] - 1;

        map<vector<int>, int> dst;

        dst[{src_line, src_stop}] = 0;
        queue<vector<int>> que;
        que.push({src_line, src_stop});

        while (que.size())
        {
            auto u = que.front();
            que.pop();

            for (auto& v : adj[u])
            {
                // if `u' and `v' are on the same line, 
                // then we should wait for a train between them.
                if (v[0] == u[0])
                {
                    if (dst.find({v[0], v[1]}) == end(dst) || dst[{v[0], v[1]}] > dst[u] + v[2] + waiting[u[0]])
                    {
                        dst[{v[0], v[1]}] = dst[u] + v[2] + waiting[u[0]];
                        que.push({v[0], v[1]});
                    }
                }
                // otherwise, when `u' and `v' are on different lines, 
                // it means this is a tunnel, we walk without waiting a train.
                else
                {
                    if (dst.find({v[0], v[1]}) == end(dst) || dst[{v[0], v[1]}] > dst[u] + v[2])
                    {
                        dst[{v[0], v[1]}] = dst[u] + v[2];
                        que.push({v[0], v[1]});
                    }
                }
            }
        }

        // `dst' might be unreachable.
        if (dst.find({dst_line, dst_stop}) == end(dst))
            ret.push_back(-1);
        else
            ret.push_back(dst[{{dst_line, dst_stop}}]);
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<vector<int>> line(N);
        vector<int> wait;

        for (auto& m : line)
        {
            int SN, W;
            cin >> SN >> W;

            wait.push_back(W);
            m.resize(SN - 1);

            for (auto& t : m)
                cin >> t;
        }

        int M;
        cin >> M;
        vector<vector<int>> tunnel(M, vector<int>(5));

        for (auto& t : tunnel)
            for (auto& tt : t)
                cin >> tt;

        int Q;
        cin >> Q;
        vector<vector<int>> query(Q, vector<int>(4));

        for (auto& q : query)
            for (auto& qq : q)
                cin >> qq;

		cout << "Case #" << t << ":\n";
		print(taking(line, wait, tunnel, query));
	}

	return 0;
}

