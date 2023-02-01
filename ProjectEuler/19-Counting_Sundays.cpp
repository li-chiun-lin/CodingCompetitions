/*
5%

You are given the following information, but you may prefer to do some research for yourself.

  - 1 Jan 1900 was a Monday.
  - Thirty days has September,
    April, June and November.
    All the rest have thirty-one,
    Saving February alone,
    Which has twenty-eight, rain or shine.
    And on leap years, twenty-nine.
  - A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <queue>
#include <algorithm>
#include <numeric>

using namespace std;

void print(vector<vector<int>> &m)
{
	for (int i = 0; i < m.size(); ++i)
	{
		cout << 1900 + i << " : ";

		for (auto &c : m[i])
			cout << c << " ";
		cout << endl;
	}
	cout << endl;
}

int euler()
{
	vector<int> normal = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	vector<vector<int>> cal(101, vector<int>(normal));

	for (int i = 0; i <= 100; ++i)
	{
		int y = 1900 + i;

		if ((y % 400 == 0) || 
			((y % 100 != 0) && y % 4 == 0))
			cal[i][1] += 1;
	}

	print(cal);

	int d = 1;
	int c = 0;

	// 1900
	cout << 1900 << " : ";
	for (int j = 0; j < cal[0].size(); ++j)
	{
		cout << d << " ";
		d = (d + cal[0][j]) % 7;
	}
	cout << endl;
	

	for (int i = 1; i < cal.size(); ++i)
	{
		cout << 1900 + i << " : ";
		for (int j = 0; j < cal[i].size(); ++j)
		{
			cout << d << " ";
			c += (d == 0);
			d = (d + cal[i][j]) % 7;
		}
		cout << endl;
	}

	return c;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
