/*
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.
*/

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>

using namespace std;

int sod(int x)
{
	int s = 0;

	for (int i = 1; i * i <= x; ++i)
	{
		if (x % i == 0)
		{
			int q = x / i;

			if (q == i)
				s += i;
			else
				s += i + q;
		}
	}

	return s - x;
}

long long euler()
{
	int n = 28124;
	long long sum = 0;
	vector<bool> abundant(n);


	for (int i = 1; i < n; ++i)
	{
		abundant[i] = sod(i) > i;
		
		bool flag = true;
		for (int j = 12; j < i && flag; ++j)
			if (abundant[j] && abundant[i - j])
				flag = false;

		if (flag)
			sum += i;
	}

	return sum;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
