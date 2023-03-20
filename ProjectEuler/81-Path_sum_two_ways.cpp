/*
10%

In the 5 by 5 matrix below, the minimal path sum from the top left to the bottom right, by only moving to the right and down, is indicated in bold red and is equal to 2427.

{
	{131, 673, 234, 103, 18},
	{201, 96, 342, 965, 150},
	{630, 803, 746, 422, 111},
	{537, 699, 497, 121, 956},
	{805, 732, 524, 37, 331}
};

Find the minimal path sum from the top left to the bottom right by only moving right and down in matrix.txt (right click and "Save Link/Target As..."), a 31K text file containing an 80 by 80 matrix.
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
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void print(vector<vector<int>> &m)
{
	for (auto &r : m)
	{
		for (auto c : r)
			cout << "\t" << c;
		cout << endl;
	}
	cout << endl;
}

int euler(vector<vector<int>>& matrix)
{
	int S = matrix.size();

	for (int i = 1; i < S; ++i)
		matrix[i][0] += matrix[i - 1][0];

	for (int j = 1; j < S; ++j)
		matrix[0][j] += matrix[0][j - 1];

	for (int i = 1; i < S; ++i)
		for (int j = 1; j < S; ++j)
			matrix[i][j] += min(matrix[i - 1][j], matrix[i][j - 1]);

	return matrix[S - 1][S - 1];
}

int main()
{
	vector<vector<int>> matrix = {
		{131, 673, 234, 103, 18},
		{201, 96, 342, 965, 150},
		{630, 803, 746, 422, 111},
		{537, 699, 497, 121, 956},
		{805, 732, 524, 37, 331}
	};

	cout << euler(matrix) << "\n";

	int s = 80;
	string line;
	string tok;
	vector<vector<int>> m2(s, vector<int>(s));

	ifstream ifs("p081_matrix.txt", ifstream::in);

	for (int i = 0; i < s; ++i)
	{
		ifs >> line;
		stringstream ss(line);

		for (int j = 0; j < s; ++j)
		{
			getline(ss, tok, ',');

			m2[i][j] = stoi(tok);
		}
	}

	ifs.close();

	cout << euler(m2) << "\n";

	return 0;
}
