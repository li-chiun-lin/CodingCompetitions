/*
30%

The number 512 is interesting because it is equal to the sum of its digits raised to some power: 5 + 1 + 2 = 8, and 8^3 = 512. Another example of a number with this property is 614656 = 28^4.

We shall define an to be the nth term of this sequence and insist that a number must contain at least two digits to have a sum.

You are given that a_2 = 512 and a_10 = 614656.

Find a_30.
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
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int sum(long long x)
{
	int s = 0;

	while (x)
	{
		s += x % 10;
		x /= 10;
	}

	return s;
}

int euler()
{
	int cnt = 1;
	set<long long> ss;

	for (long long a = 2; a < 200; ++a)
		for (long long x = 1, ax = a; x < 10; ++x, ax *= a)
			if (ax > 10 && sum(ax) == a)
				ss.insert(ax);

	for (auto x : ss)
		cout << cnt++ << "\t" << x << "\n";

	return 0;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
