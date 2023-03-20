/*
25%

Su Doku (Japanese meaning number place) is the name given to a popular puzzle concept. Its origin is unclear, but credit must be attributed to Leonhard Euler who invented a similar, and much more difficult, puzzle idea called Latin Squares. The objective of Su Doku puzzles, however, is to replace the blanks (or zeros) in a 9 by 9 grid in such that each row, column, and 3 by 3 box contains each of the digits 1 to 9. Below is an example of a typical starting puzzle grid and its solution grid.

	003020600	483921657
	900305001	967345821
	001806400	251876493
	008102900	548132976
	700000008	729564138
	006708200	136798245
	002609500	372689514
	800203009	814253769
	005010300	695417382

A well constructed Su Doku puzzle has a unique solution and can be solved by logic, although it may be necessary to employ "guess and test" methods in order to eliminate options (there is much contested opinion over this). The complexity of the search determines the difficulty of the puzzle; the example above is considered easy because it can be solved by straight forward direct deduction.

The 6K text file, sudoku.txt (right click and 'Save Link/Target As...'), contains fifty different Su Doku puzzles ranging in difficulty, but all with unique solutions (the first puzzle in the file is the example above).

By solving all fifty puzzles find the sum of the 3-digit numbers found in the top left corner of each solution grid; for example, 483 is the 3-digit number found in the top left corner of the solution grid above.
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void print(vector<string>& v)
{
	for (auto& x : v)
		cout << x << "\n";
}

bool set_bit(int& mark, int bit)
{
	if (mark & bit)
		return false;

	mark |= bit;
	return true;
}

bool is_valid(vector<string>& board)
{
	for (int i = 0, mark = 0; i < 9; ++i, mark = 0)
		for (int j = 0; j < 9; ++j)
			if (board[i][j] && !set_bit(mark, 1 << board[i][j]))
				return false;

	for (int j = 0, mark = 0; j < 9; ++j, mark = 0)
		for (int i = 0; i < 9; ++i)
			if (board[i][j] && !set_bit(mark, 1 << board[i][j]))
				return false;

	vector<vector<int>> mark(3, vector<int>(3));

	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j)
			if (board[i][j] && !set_bit(mark[i / 3][j / 3], 1 << board[i][j]))
				return false;

	return true;
}

bool dfs(vector<string>& board, int idx)
{
	if (idx < 0)
		return true;

	int i = idx / 9;
	int j = idx % 9;

	if (board[i][j])
		return dfs(board, idx - 1);

	for (board[i][j] = 1; board[i][j] <= 9; ++board[i][j])
	{
		if (! is_valid(board))
			continue;

		if (dfs(board, idx - 1))
			return true;
	}

	board[i][j] = 0;
	return false;
}

int euler(vector<string>& board)
{
	bool ret = dfs(board, 80);

	return board[0][0] * 100 + board[0][1] * 10 + board[0][2];
}

int main()
{
	int sum = 0;
	ifstream ifs("p096_sudoku.txt", ifstream::in);

	for (int i = 0; i < 50; ++i)
	{
		string title = "", id = "";
		vector<string> board(9);

		ifs >> title;
		ifs >> id;

		for (auto& b : board)
		{
			ifs >> b;

			for (auto&c : b)
				c -= '0';
		}

		sum += euler(board);
	}

	ifs.close();

	cout << sum << "\n";

	return 0;
}
