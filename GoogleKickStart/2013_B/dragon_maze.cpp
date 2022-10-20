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

int d[] = {1, 0, -1, 0, 1};

void dfs(vector<vector<int>>& Maze, int i, int j, int x, int y, int s, int acc, int& steps, int& ret)
{
    if (i == x && j == y)
    {
        if (steps > s)
        {
            //cout << "shorter path " << s << " " << acc << "\n";
            steps = s;
            ret = acc;
        }
        else if (steps == s)
        {
            //cout << "same length " << acc << "\n";
            ret = max(ret, acc);
        }

        return;
    }

    if (s >= steps)
        return;

    int N = Maze.size();
    int M = Maze[0].size();

    for (int k = 0; k < 4; ++k)
    {
        int ii = i + d[k];
        int jj = j + d[k + 1];

        if (0 <= ii && ii < N && 0 <= jj && jj < M && Maze[ii][jj] >= 0)
        {
            int val = Maze[ii][jj];
            Maze[ii][jj] = -2;
            //cout << "go to " << ii << " " << jj << " " << acc + val << "\n";
            dfs(Maze, ii, jj, x, y, s + 1, acc + val, steps, ret);
            //cout << "back from " << ii << " " << jj << "\n";
            Maze[ii][jj] = val;
        }
    }
}

int dragon_maze(vector<vector<int>>& Maze, int enx, int eny, int exx, int exy)
{
    int N = Maze.size();
    int M = Maze[0].size();
    vector<vector<int>> dst(N, vector<int>(M, INT_MAX));
    vector<vector<int>> acc(N, vector<int>(M, -1));

    queue<vector<int>> que;
    que.push({enx, eny});
    dst[enx][eny] = 0;
    acc[enx][eny] = Maze[enx][eny];

    while (que.size())
    {
        auto u = que.front();
        que.pop();
        
        for (int k = 0; k < 4; ++k)
        {
            int ii = u[0] + d[k];
            int jj = u[1] + d[k + 1];

            if (0 <= ii && ii < N && 0 <= jj && jj < M && Maze[ii][jj] >= 0)
            {
                if (dst[ii][jj] > dst[u[0]][u[1]] + 1)
                {
                    dst[ii][jj] = dst[u[0]][u[1]] + 1;
                    acc[ii][jj] = acc[u[0]][u[1]] + Maze[ii][jj];
                    que.push({ii, jj});
                }
                else if (dst[ii][jj] == dst[u[0]][u[1]] + 1)
                {
                    acc[ii][jj] = max(acc[ii][jj], acc[u[0]][u[1]] + Maze[ii][jj]);
                }
            }
        }
    }

    return acc[exx][exy];
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, M;
        cin >> N >> M;

        int enx, eny, exx, exy;
        cin >> enx >> eny >> exx >> exy;

        vector<vector<int>> Maze(N, vector<int>(M));

        for (auto& r : Maze)
            for (auto& c : r)
                cin >> c;

		cout << "Case #" << t << ": ";
        int ret = dragon_maze(Maze, enx, eny, exx, exy);

        if (ret == -1)
            cout << "Mission Impossible.\n";
        else
            cout << ret << "\n";
	}

	return 0;
}

