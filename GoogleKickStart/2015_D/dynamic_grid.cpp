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
	for (auto x : v)
		cout << x << "\n";
}

int count(vector<string> grid)
{
    int cnt = 0;
    int d[] = {0, 1, 0, -1, 0};
    int R = grid.size();
    int C = grid[0].size();

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            if (grid[i][j] == '0')
                continue;

            ++ cnt;
            grid[i][j] = '0';
            queue<pair<int, int>> que;
            que.push({i, j});

            while (que.size())
            {
                auto u = que.front();
                que.pop();

                for (int k = 0; k < 4; ++k)
                {
                    int ii = u.first + d[k];
                    int jj = u.second + d[k + 1];

                    if (0 <= ii && ii < R && 0 <= jj && jj < C && grid[ii][jj] == '1')
                    {
                        grid[ii][jj] = '0';
                        que.push({ii, jj});
                    }
                }
            }
        }
    }

    return cnt;
}

vector<int> dynamic_grid(int R, int C, vector<string>& grid, int N, vector<char>& operation, vector<vector<int>>& xyz)
{
    vector<int> ret;

    for (int i = 0; i < N; ++i)
    {
        if (operation[i] == 'M')
            grid[xyz[i][0]][xyz[i][1]] = xyz[i][2] + '0';
        else
            ret.push_back(count(grid));
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int R, C;
        cin >> R >> C;

        vector<string> grid(R);

        for (auto& g : grid)
            cin >> g;

        int N;
        cin >> N;

        vector<char> operation(N);
        vector<vector<int>> xyz(N, vector<int>(3));

        for (int i = 0; i < N; ++i)
        {
            cin >> operation[i];

            if (operation[i] == 'M')
                cin >> xyz[i][0] >> xyz[i][1] >> xyz[i][2];
        }

		cout << "Case #" << t << ":\n";
        print(dynamic_grid(R, C, grid, N, operation, xyz));
	}

	return 0;
}

