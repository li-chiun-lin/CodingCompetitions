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

bool checker(vector<vector<int>>& Sudoku, int N)
{
    int NN = N * N;
    // check row
    for (int i = 0; i < NN; ++i)
    {
        vector<bool> hit(NN);
        for (int j = 0; j < NN; ++j)
        {
            if (Sudoku[i][j] <= 0 
            || NN < Sudoku[i][j] 
            || hit[Sudoku[i][j]])
                return false;

            hit[Sudoku[i][j]] = true;
        }
    }

    // check col
    for (int j = 0; j < NN; ++j)
    {
        vector<bool> hit(NN);
        for (int i = 0; i < NN; ++i)
        {
            if (Sudoku[i][j] <= 0 
            || NN < Sudoku[i][j] 
            || hit[Sudoku[i][j]])
                return false;

            hit[Sudoku[i][j]] = true;
        }
    }

    for (int r = 0; r < N; ++r)
        for (int c = 0; c < N; ++c)
        {
            vector<bool> hit(NN);

            for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                {
                    int ii = r * N + i;
                    int jj = c * N + j;

                    if (Sudoku[ii][jj] <= 0 
                    || NN < Sudoku[ii][jj] 
                    || hit[Sudoku[ii][jj]])
                        return false;

                    hit[Sudoku[ii][jj]] = true;
                }
        }

    return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<vector<int>> Sudoku(N * N, vector<int>(N * N));

        for (auto& r : Sudoku)
            for (auto& c : r)
                cin >> c;

		cout << "Case #" << t << ": ";
		cout << (checker(Sudoku, N) ? "Yes" : "No") << "\n";
	}

	return 0;
}

