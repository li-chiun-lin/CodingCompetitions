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

void print(vector<vector<int>>& v)
{
	for (auto& r : v)
	{
		for (auto& c : r)
            cout << c << " ";
        cout << "\n";
	}
}

void to_right(vector<vector<int>>& B)
{
    int N = B.size();

    for (int r = 0; r < N; ++r)
    {
        int i = N - 1;
        int j = i - 1;

        while (j >= 0)
        {
            if (B[r][j])
            {
                if (B[r][i] == 0)
                {
                    swap(B[r][j], B[r][i]);
                }
                else if (B[r][j] == B[r][i])
                {
                    B[r][i --] *= 2;
                    B[r][j] = 0;
                }
                else
                {
                    B[r][-- i] = B[r][j];

                    if (j != i)
                        B[r][j] = 0;
                }
            }

            -- j;
        }
    }
}

void to_left(vector<vector<int>>& B)
{
    int N = B.size();

    for (int r = 0; r < N; ++r)
    {
        int i = 0;
        int j = 1;

        while (j < N)
        {
            if (B[r][j])
            {
                if (B[r][i] == 0)
                {
                    swap(B[r][j], B[r][i]);
                }
                else if (B[r][j] == B[r][i])
                {
                    B[r][i ++] *= 2;
                    B[r][j] = 0;
                }
                else
                {
                    B[r][++ i] = B[r][j];

                    if (j != i)
                        B[r][j] = 0;
                }
            }

            ++ j;
        }
    }
}

void to_down(vector<vector<int>>& B)
{
    int N = B.size();

    for (int c = 0; c < N; ++c)
    {
        int i = N - 1;
        int j = i - 1;

        while (j >= 0)
        {
            if (B[j][c])
            {
                if (B[i][c] == 0)
                {
                    swap(B[j][c], B[i][c]);
                }
                else if (B[j][c] == B[i][c])
                {
                    B[i --][c] *= 2;
                    B[j][c] = 0;
                }
                else
                {
                    B[-- i][c] = B[j][c];

                    if (j != i)
                        B[j][c] = 0;
                }
            }

            -- j;
        }
    }
}

void to_up(vector<vector<int>>& B)
{
    int N = B.size();

    for (int c = 0; c < N; ++c)
    {
        int i = 0;
        int j = 1;

        while (j < N)
        {
            if (B[j][c])
            {
                if (B[i][c] == 0)
                {
                    swap(B[j][c], B[i][c]);
                }
                else if (B[j][c] == B[i][c])
                {
                    B[i ++][c] *= 2;
                    B[j][c] = 0;
                }
                else
                {
                    B[++ i][c] = B[j][c];

                    if (j != i)
                        B[j][c] = 0;
                }
            }

            ++ j;
        }
    }
}

void super_2048(vector<vector<int>>& B, string& DIR)
{
    if (DIR == "right")
        to_right(B);
    else if (DIR == "left")
        to_left(B);
    else if (DIR == "up")
        to_up(B);
    else if (DIR == "down")
        to_down(B);
    else
        ;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        string DIR;
        cin >> N >> DIR;

        vector<vector<int>> B(N, vector<int>(N));

        for (auto& r : B)
            for (auto& c : r)
                cin >> c;

        super_2048(B, DIR);

		cout << "Case #" << t << ":\n";
        print(B);
	}

	return 0;
}

