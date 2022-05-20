#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void print(vector<vector<char>>& matrix)
{
	for (auto& r : matrix)
	{
		for (char c : r)
			cout << c;
		cout << endl;
	}
	cout << endl;
}

void print(int R, int C)
{
	int RR = R * 2 + 1;
	int CC = C * 2 + 1;
	char a = 0, b = 0;
	vector<vector<char>> matrix(RR, vector<char>(CC));

	for (int i = 0; i < RR; ++i)
	{
		if (i % 2)
		{
			a = '.';
			b = '|';
		}
		else
		{
			a = '-';
			b = '+';
		}

		for (int j = 0; j < CC; ++j)
			matrix[i][j] = j % 2 ? a : b;
	}

	matrix[0][0] = '.';
	matrix[1][0] = '.';
	matrix[0][1] = '.';

	print(matrix);
}

int main()
{
	int T;

	cin >> T;
	int i = 1;

	while (T--)
	{
		int R, C;

		cin >> R >> C;

		cout << "Case #" << i++ << ":" << endl;
		print(R, C);
	}


	return 0;
}