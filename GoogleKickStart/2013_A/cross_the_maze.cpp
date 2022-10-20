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

string cross_maze(vector<string>& M, int sx, int sy, int ex, int ey)
{
    string path = "";

    -- sx;
    -- sy;
    -- ex;
    -- ey;

    int N = M.size();
    bool stuck = false;
    char d[] = {'E', 'S', 'W', 'N'};
    int dy[] = {1, 0, -1, 0};
    int dx[] = {0, 1, 0, -1};
    int dir = sx 
        ? (sy ? 2 : 3)
        : (sy ? 1 : 0);

    while ((sx != ex || sy != ey) && path.size() < 10000 && ! stuck)
    {
        stuck = true;
        for (int k = -1; k < 3 && stuck; ++k)
        {
            int ld = (dir + k + 4) % 4;
            int lx = sx + dx[ld];
            int ly = sy + dy[ld];

            if (0 <= lx && lx < N && 0 <= ly && ly < N && M[lx][ly] == '.')
            {
                path.push_back(d[ld]);
                dir = ld;
                sx = lx;
                sy = ly;

                stuck = false;
            }
        }
    }

    return stuck || path.size() == 10000 ? "" : path;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<string> M(N);

        for (auto& s : M)
            cin >> s;

        int sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;

		cout << "Case #" << t << ": ";

        string path = cross_maze(M, sx, sy, ex, ey);

        if (path.size())
        {
            cout << path.size() << "\n";
            cout << path << "\n";
        }
        else
        {
            cout << "Edison ran out of energy.\n";
        }
	}

	return 0;
}

