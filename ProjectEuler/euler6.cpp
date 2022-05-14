/*
The sum of the squares of the first ten natural numbers is,

	1^2 + 2^2 + 3^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,

	(1 + 2 + 3 + ... + 10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is

	3025 - 385 = 2640
	
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
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

int euler(int n)
{
	long long sum = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = i + 1; j <= n; ++j)
			sum += i * j;

	return sum * 2;
}

int main()
{
	cout << euler(10) << endl;
	cout << euler(100) << endl;

	return 0;
}
