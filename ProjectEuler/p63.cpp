/*
The 5-digit number, 16807=7<sup>5</sup>, is also a fifth power. Similarly, the 9-digit number, 134217728=8<sup>9</sup>, is a ninth power.

How many <i>n</i>-digit positive integers exist which are also an <i>n</i>th power?
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

vector<int> to_vec(int n)
{
	vector<int> ret;

	while (n)
	{
		ret.push_back(n % 10);
		n /= 10;
	}

	return ret;
}

void mul(vector<int> &a, vector<int> &b)
{
	int m = a.size();
	int n = b.size();
	vector<int> tmp(m + n);
	int c = 0;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			tmp[i + j] += a[i] * b[j];

	a.resize(tmp.size());

	for (int i = 0; i < tmp.size(); ++i)
	{
		a[i] = tmp[i] + c;
		c = a[i] / 10;
		a[i] %= 10;
	}

	while (a.size() && a.back() == 0)
		a.pop_back();
}

int euler(int n)
{
	int c = 0;

	for (int a = 1; a < n; ++a)
	{
		vector<int> va = to_vec(a);
		vector<int> ab = {1};

		for (int b = 1; b < n; ++b)
		{
			mul(ab, va);

			if (ab.size() == b)
				++ c;
		}
	}

	return c;
}

int main()
{
	cout << euler(30) << endl;

	return 0;
}
