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

pair<int, int> cube(vector<vector<int>>& maze)
{
    int S = maze.size();

    vector<vector<int>> room;

    for (int i = 0; i < S; ++i)
        for (int j = 0; j < S; ++j)
            room.push_back({maze[i][j], i, j});

    // sort by room number
    sort(begin(room), end(room));

    pair<int, int> ret = {0, 0};
    int d[] = {1, 0, -1, 0, 1};

    // for each room
    for (auto& r : room)
    {
        int n = r[0];
        int i = r[1];
        int j = r[2];

        // skip if this room has been visited.
        if (maze[i][j] == 0)
            continue;

        int v = maze[i][j];
        int cnt = 0;
        queue<pair<int, int>> que;
        que.push({i, j});
        // mark as visited
        maze[i][j] = 0;

        // bfs
        while (que.size())
        {
            auto u = que.front();
            que.pop();
            ++ cnt;

            // check 4 directions
            for (int k = 0; k < 4; ++k)
            {
                int ii = u.first + d[k];
                int jj = u.second + d[k + 1];

                // find next room number
                if (0 <= ii && ii < S && 0 <= jj && jj < S && maze[ii][jj] == v + 1)
                {
                    maze[ii][jj] = 0;
                    que.push({ii, jj});
                    ++ v;
                    break;
                }
            }
        }

        // record longest path
        if (ret.second < cnt)
            ret = {n, cnt};
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int S;
        cin >> S;

        vector<vector<int>> maze(S, vector<int>(S));

        for (auto& r : maze)
            for (auto& c : r)
                cin >> c;

		cout << "Case #" << t << ": ";
        auto r = cube(maze);
		cout << r.first << " " << r.second << "\n";
	}

	return 0;
}

