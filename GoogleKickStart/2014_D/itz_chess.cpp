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

void print(vector<vector<char>>& board)
{
    for (auto& r : board)
    {
        for (auto& c : r)
            cout << c << " ";
        cout << "\n";
    }

    cout << "\n";
}

int vh(vector<vector<char>>& board, int x, int y)
{
    int ret = 0;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int k = 0; k < 4; ++k)
    {
        for (int i = x + dx[k], j = y + dy[k]; 
            0 <= i && i < 8 &&
            0 <= j && j < 8; 
            i += dx[k], j += dy[k])
            if (board[i][j])
            {
                ++ ret;
                break;
            }
    }

    #if 0
    for (int i = x + 1; i < 8; ++i)
    {
        if (board[i][y])
        {
            ++ ret;
            break;
        }
    }

    for (int i = x - 1; i >= 0; --i)
    {
        if (board[i][y])
        {
            ++ ret;
            break;
        }
    }

    for (int j = y + 1; j < 8; ++j)
    {
        if (board[x][j])
        {
            ++ ret;
            break;
        }
    }

    for (int j = y - 1; j >= 0; --j)
    {
        if (board[x][j])
        {
            ++ ret;
            break;
        }
    }
    #endif

    return ret;
}

int di(vector<vector<char>>& board, int x, int y)
{
    int ret = 0;

    int dx[] = {1, -1, 1, -1};
    int dy[] = {1, -1, -1, 1};

    for (int k = 0; k < 4; ++k)
    {
        for (int i = x + dx[k], j = y + dy[k]; 
            0 <= i && i < 8 &&
            0 <= j && j < 8; 
            i += dx[k], j += dy[k])
            if (board[i][j])
            {
                ++ ret;
                break;
            }
    }

    #if 0
    for (int i = x + 1, j = y + 1; i < 8 && j < 8; ++i, ++j)
        if (board[i][j])
        {
            ++ ret;
            break;
        }

    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; --i, --j)
        if (board[i][j])
        {
            ++ ret;
            break;
        }

    for (int i = x + 1, j = y - 1; i < 8 && j >= 0; ++i, --j)
        if (board[i][j])
        {
            ++ ret;
            break;
        }

    for (int i = x - 1, j = y + 1; i >= 0 && j < 8; --i, ++j)
        if (board[i][j])
        {
            ++ ret;
            break;
        }
    #endif

    return ret;
}

int itz(vector<string>& piece)
{
    int ret = 0;
    vector<vector<char>> board(8, vector<char>(8));

    for (auto& p : piece)
        board[p[0] - 'A'][p[1] - '1'] = p[3];

    int dx[8] = { 1,  1, -1, -1,  2 , 2, -2, -2};
    int dy[8] = {-2,  2, -2,  2,  1, -1,  1, -1};
    #if 0
    int fx[8] = { 0,  0,  0,  0,  1,  1, -1, -1};
    int fy[8] = {-1,  1, -1,  1,  0,  0,  0,  0};
    int gx[8] = { 0,  0,  0,  0,  2,  2, -2, -2};
    int gy[8] = {-2,  2, -2,  2,  0,  0,  0,  0};
    #endif

    for (auto& p : piece)
    {
        int x = p[0] - 'A';
        int y = p[1] - '1';

        switch (p[3])
        {
            case 'K':
            for (int i = -1; i <= 1; ++i)
                for (int j = -1; j <= 1; ++j)
                {
                    if (i == 0 && j == 0)
                        continue;

                    int xx = x + i;
                    int yy = y + j;

                    if (0 <= xx && xx < 8 && 0 <= yy && yy < 8 && board[xx][yy])
                        ++ ret;
                }
            break;


            case 'Q':
            ret += vh(board, x, y);
            ret += di(board, x, y);
            break;


            case 'R':
            ret += vh(board, x, y);
            break;


            case 'B':
            ret += di(board, x, y);
            break;


            case 'N':
            for (int k = 0; k < 8; ++k)
            {
                #if 0
                int xf = x + fx[k];
                int yf = y + fy[k];
                if (0 <= xf && xf < 8 && 0 <= yf && yf < 8 && board[xf][yf])
                    continue;
                #endif

                #if 0
                int xg = x + gx[k];
                int yg = y + gy[k];
                if (0 <= xg && xg < 8 && 0 <= yg && yg < 8 && board[xg][yg])
                    continue;
                #endif

                int xx = x + dx[k];
                int yy = y + dy[k];
                if (0 <= xx && xx < 8 && 0 <= yy && yy < 8 && board[xx][yy])
                    ++ ret;
            }

            break;

            case 'P':
            int x1 = x + 1;
            int y1 = y - 1;
            int y2 = y + 1;

            if (x1 < 8 && 0 <= y1 && board[x1][y1])
                ++ ret;

            if (x1 < 8 && y2 < 8 && board[x1][y2])
                ++ ret;
            break;
        }

        //cout << ret << "\n";
    }

    //print(board);

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

        vector<string> piece(N);

        for (auto& p : piece)
            cin >> p;

		cout << "Case #" << t << ": ";
		cout << itz(piece) << "\n";
	}

	return 0;
}

