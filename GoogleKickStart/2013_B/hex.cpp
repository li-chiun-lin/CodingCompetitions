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

int di[] = {-1, -1, 0, 0, 1, 1};
int dj[] = {0, 1, -1, 1, -1, 0};


bool checkBConn(vector<string>& Hex)
{
    int N = Hex.size();
    vector<vector<bool>> visited(N, vector<bool>(N));
    queue<pair<int, int>> que;

    for (int i = 0; i < N; ++i)
    {
        if (Hex[i][0] == 'B')
        {
            que.push({i, 0});
            visited[i][0] = true;
        }
    }

    while (que.size())
    {
        auto u = que.front();
        que.pop();

        if (u.second == N - 1)
            return true;

        for (int k = 0; k < 6; ++k)
        {
            int ii = u.first + di[k];
            int jj = u.second + dj[k];

            if (0 <= ii && ii < N && 0 <= jj && jj < N && 
                Hex[ii][jj] == 'B' && ! visited[ii][jj])
            {
                visited[ii][jj] = true;
                que.push({ii, jj});
            }
        }
    }

    return false;
}

bool checkRConn(vector<string>& Hex)
{
    int N = Hex.size();
    vector<vector<bool>> visited(N, vector<bool>(N));
    queue<pair<int, int>> que;

    for (int i = 0; i < N; ++i)
    {
        if (Hex[0][i] == 'R')
        {
            que.push({0, i});
            visited[0][i] = true;
        }
    }

    while (que.size())
    {
        auto u = que.front();
        que.pop();

        if (u.first == N - 1)
            return true;

        for (int k = 0; k < 6; ++k)
        {
            int ii = u.first + di[k];
            int jj = u.second + dj[k];

            if (0 <= ii && ii < N && 0 <= jj && jj < N && 
                Hex[ii][jj] == 'R' && ! visited[ii][jj])
            {
                visited[ii][jj] = true;
                que.push({ii, jj});
            }
        }
    }

    return false;
}

bool cutB(vector<string>& Hex)
{
    int N = Hex.size();

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (Hex[i][j] == 'B')
            {
                Hex[i][j] = 'b';
                bool r = checkBConn(Hex);
                Hex[i][j] = 'B';

                if (r == false)
                    return true;
            }

    return false;
}

bool cutR(vector<string>& Hex)
{
    int N = Hex.size();

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (Hex[i][j] == 'R')
            {
                Hex[i][j] = 'r';
                bool r = checkRConn(Hex);
                Hex[i][j] = 'R';

                if (r == false)
                    return true;
            }

    return false;
}

string hex(vector<string>& Hex)
{
    int N = Hex.size();
    int r_cnt = 0;
    int b_cnt = 0;

    for (auto& h : Hex)
        for (auto c : h)
            if (c == 'R')
                ++ r_cnt;
            else if (c == 'B')
                ++ b_cnt;

    bool b_conn = checkBConn(Hex);
    //cout << "b conn " << b_conn << "\n";
    bool r_conn = checkRConn(Hex);
    //cout << "r conn " << r_conn << "\n";
    bool b_cut = cutB(Hex);
    //cout << "b cut " << b_cut << "\n";
    bool r_cut = cutR(Hex);
    //cout << "r cut " << r_cut << "\n";

    if (abs(b_cnt - r_cnt) > 1 ||
        (b_conn && r_conn) ||
        (b_conn && (! b_cut || b_cnt < r_cnt)) ||
        (r_conn && (! r_cut || r_cnt < b_cnt)))
        return "Impossible";

    if (b_conn)
        return "Blue wins";

    if (r_conn)
        return "Red wins";

    return "Nobody wins";
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;
        vector<string> H(N);

        for (auto& h : H)
            cin >> h;

		cout << "Case #" << t << ": ";
        cout << hex(H) << "\n";
	}

	return 0;
}

