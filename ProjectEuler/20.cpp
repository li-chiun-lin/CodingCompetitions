/*
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
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

void print(vector<int> &v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

void mul(vector<int> &a, int x)
{
	vector<int> b;

	while (x)
	{
		b.push_back(x % 10);
		x /= 10;
	}

	vector<int> t(a.size() + b.size());
	int c = 0;

	for (int i = 0; i < a.size(); ++i)
		for (int j = 0; j < b.size(); ++j)
			t[i + j] += a[i] * b[j];

	for (int k = 0; k < a.size(); ++k)
	{
		a[k] = t[k] + c;
		c = a[k] / 10;
		a[k] %= 10;
	}

	for (int k = a.size(); k < t.size(); ++k)
	{
		a.push_back(t[k] + c);
		c = a.back() / 10;
		a.back() %= 10;
	}

	a.push_back(c);

	while (a.size() && a.back() == 0)
		a.pop_back();

	print(a);
}

int euler(int n)
{
	vector<int> a = {1};

	for (int i = 2; i <= n; ++i)
		mul(a, i);

	return accumulate(begin(a), end(a), 0);
}

int main()
{
	cout << euler(100) << endl;

	return 0;
}
