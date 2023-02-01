/*
5%

A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:

    1/2	= 	0.5
    1/3	= 	0.(3)
    1/4	= 	0.25
    1/5	= 	0.2
    1/6	= 	0.1(6)
    1/7	= 	0.(142857)
    1/8	= 	0.125
    1/9	= 	0.(1)
    1/10	= 	0.1 

Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.

Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.
*/

#include <algorithm>
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

int recurring(int x)
{
	vector<int> hit(x);
	int c = 1;
	int r = 1;
	int a = 1;

	while (r)
	{
		r = a % x;

		if (hit[r])
			break;

		hit[r] = c ++;
		a = r * 10;
	}

	return r ? c - hit[r] : 0;
}

int euler(int n)
{
	int ret = 0;
	int ma = 0;

	for (int i = 2; i < n; ++i)
	{
		int r = recurring(i);
		cout << r << endl;
		
		if (ret < r)
		{
			ret = r;
			ma = i;
		}
	}

	return ma;
}

int main()
{
	cout << euler(1000) << endl;

	return 0;
}
