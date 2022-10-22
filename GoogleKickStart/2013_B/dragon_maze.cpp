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

