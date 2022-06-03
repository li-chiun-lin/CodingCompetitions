/*
5%

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
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
	int g = 1;

	for (int i = 2; i <= n; ++i)
		g = lcm(g, i);

	return g;
}

int main()
{
	cout << euler(20) << endl;

	return 0;
}
