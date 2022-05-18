/*
Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
*/

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>

using namespace std;

void print(vector<vector<int>> &m)
{
	for (auto &r : m)
	{
		for (auto c : r)
			cout << setw(3) << c;
		cout << endl;
	}
	cout << endl;
}

int euler(int n)
{
	int val = n * n;
	vector<vector<int>> matrix(n, vector<int>(n));
	int di[] = {0, 1, 0, -1};
	int dj[] = {-1, 0, 1, 0};
	int i = 0;
	int j = n;
	int k = 0;

	while (val)
	{
		int ii = i + di[k];
		int jj = j + dj[k];

		if (0 <= ii && ii < n && 0 <= jj && jj < n && matrix[ii][jj] == 0)
		{
			i = ii;
			j = jj;
			matrix[ii][jj] = val --;
		}
		else
		{
			k = (k + 1) % 4;
		}
	}

	print(matrix);

	int sum = 0;

	for (int k = 0; k < n; ++k)
		sum += matrix[k][k] + matrix[k][n - 1 - k];

	return sum - matrix[n / 2][n / 2];
}

int main()
{
	cout << euler(1001) << endl;

	return 0;
}
