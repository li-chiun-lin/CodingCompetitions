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

int mine(vector<string>& board)
{
    int N = board.size();

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
        {
            if (board[i][j] == '*')
                continue;

            int c = 0;

            for (int x = -1; x <= 1; ++x)
                for (int y = -1; y <= 1; ++y)
                {
                    if (x == 0 && y == 0)
                        continue;

                    int ii = i + x;
                    int jj = j + y;

                    if (0 <= ii && ii < N && 0 <= jj && jj < N && board[ii][jj] == '*')
                        ++ c;
                }

            board[i][j] = c;
        }

    int ret = 0;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
        {
            if (board[i][j])
                continue;

            ++ ret;

            queue<pair<int, int>> que;
            que.push({i, j});
            board[i][j] = '*';

            while (que.size())
            {
                auto u = que.front();
                que.pop();

                for (int x = -1; x <= 1; ++x)
                    for (int y = -1; y <= 1; ++y)
                    {
                        if (x == 0 && y == 0)
                            continue;

                        int ii = u.first + x;
                        int jj = u.second + y;

                        if (0 <= ii && ii < N && 0 <= jj && jj < N)
                        {
                            if (board[ii][jj] == '*')
                                continue;


                            if (board[ii][jj] == 0)
                                que.push({ii, jj});

                            board[ii][jj] = '*';
                        }
                    }
            }
        }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (board[i][j] != '*')
                ++ ret;

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

        vector<string> board(N);

        for (auto& b : board)
            cin >> b;

		cout << "Case #" << t << ": ";
		cout << mine(board) << "\n";
	}

	return 0;
}

