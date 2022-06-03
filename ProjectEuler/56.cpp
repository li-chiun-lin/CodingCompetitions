/*
5%

A googol (10<sup>100</sup>) is a massive number: one followed by one-hundred zeros; 100<sup>100</sup> is almost unimaginably large: one followed by two-hundred zeros. Despite their size, the sum of the digits in each number is only 1.
Considering natural numbers of the form, <i>a<sup>b</sup></i>, where <i>a, b</i> &lt; 100, what is the maximum digital sum?
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

void mul(vector<int> &a, vector<int> &b)
{
	int m = a.size();
	int n = b.size();
	vector<int> tmp(m + n);

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			tmp[i + j] += a[i] * b[j];

	a.resize(m + n);
	int c = 0;

	for (int k = 0; k < tmp.size(); ++k)
	{
		a[k] = tmp[k] + c;
		c = a[k] / 10;
		a[k] %= 10;
	}

	while (c)
	{
		a.push_back(c);
		c = a.back() / 10;
		a.back() %= 10;
	}

	while (a.size() && a.back() == 0)
		a.pop_back();
}

void power(vector<int> &a, int b)
{
	vector<int> ret = {1};

	while (b)
	{
		if (b & 1)
			mul(ret, a);

		mul(a, a);
		b >>= 1;
	}

	a = ret;
}

vector<int> to_vec(int a)
{
	vector<int> ret;

	while (a)
	{
		ret.push_back(a % 10);
		a /= 10;
	}

	return ret;
}

int euler(int n)
{
	int ret = 0;

	for (int a = 2; a < n; ++a)
		for (int b = 2; b < n; ++b)
		{
			auto va = to_vec(a);
			power(va, b);

			int ds = accumulate(begin(va), end(va), 0);

			ret = max(ret, ds);
		}

	return ret;
}

int main()
{
	cout << euler(100) << endl;

	return 0;
}
