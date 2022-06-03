/*
5%

145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: As 1! = 1 and 2! = 2 are not sums they are not included.
*/

#include <algorithm>
#include <climits>
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

void print(vector<int> &v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

int euler(int n)
{
	vector<int> f(10, 1);

	for (int i = 2; i < 10; ++i)
		f[i] = i * f[i - 1];

	int sum = 0;

	for (int i = 3; i < 10000000; ++i)
	{
		int ds = 0;
		int ii = i;

		while (ii)
		{
			ds += f[ii % 10];
			ii /= 10;
		}

		if (ds == i)
			sum += i;
	}

	//print(f);

	return sum;
}

int main()
{
	cout << euler(0) << endl;

	return 0;
}
