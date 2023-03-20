/*
20%

The minimal path sum in the 5 by 5 matrix below, by starting in any cell in the left column and finishing in any cell in the right column, and only moving up, down, and right, is indicated in red and bold; the sum is equal to 994.

{
	{131, 673, 234, 103, 18},
	{201, 96, 342, 965, 150},
	{630, 803, 746, 422, 111},
	{537, 699, 497, 121, 956},
	{805, 732, 524, 37, 331}
};


Find the minimal path sum from the left column to the right column in matrix.txt (right click and "Save Link/Target As..."), a 31K text file containing an 80 by 80 matrix.
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
	vector<int> dp(S, 1e9 + 7);

	for (int i = 0; i < S; ++i)
		dp[i] = matrix[i][0];
	
	for (int j = 1; j < S; ++j)
	{
		dp[0] += matrix[0][j];

		for (int i = 1; i < S; ++i)
			dp[i] = min(dp[i] + matrix[i][j], 
				dp[i - 1] + matrix[i][j]);

		for (int i = S - 2; i >= 0; --i)
			dp[i] = min(dp[i], 
				dp[i + 1] + matrix[i][j]);
	}

	int ret = INT_MAX;

	for (int i = 0; i < S; ++i)
		ret = min(ret, dp[i]);

	return ret;
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

	ifstream ifs("p082_matrix.txt", ifstream::in);

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
