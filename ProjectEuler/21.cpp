/*
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
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

void print(map<int, int> &v)
{
	for (auto &h : v)
		cout << h.first << " " << h.second << endl;
}

int df(int x)
{
	int c = 0;

	for (int i = 1; i < x; ++i)
		if (x % i == 0)
			c += i;
	
	return c;
}

int euler(int n)
{
	map<int, int> d;

	for (int i = 0; i <= n; ++i)
		d[i] = df(i);

	print(d);

	int sum = 0;

	for (int i = 1; i <= n; ++i)
		if (d[i] != i && d[d[i]] == i)
		{
			cout << i << " ";
			sum += i;
		}

	cout << endl;


	return sum;
}

int main()
{
	cout << euler(10000) << endl;

	return 0;
}
