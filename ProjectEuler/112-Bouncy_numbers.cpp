/*
15%

Working from left-to-right if no digit is exceeded by the digit to its left it is called an increasing number; for example, 134468.

Similarly if no digit is exceeded by the digit to its right it is called a decreasing number; for example, 66420.

We shall call a positive integer that is neither increasing nor decreasing a "bouncy" number; for example, 155349.

Clearly there cannot be any bouncy numbers below one-hundred, but just over half of the numbers below one-thousand (525) are bouncy. In fact, the least number for which the proportion of bouncy numbers first reaches 50% is 538.

Surprisingly, bouncy numbers become more and more common and by the time we reach 21780 the proportion of bouncy numbers is equal to 90%.

Find the least number for which the proportion of bouncy numbers is exactly 99%.
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

int is_bouncy(int x)
{
	bool is_increasing = true;
	bool is_decreasing = true;

	int b0 = x % 10;
	x /= 10;

	while (x)
	{
		int b1 = x % 10;
		x /= 10;

		if (b1 > b0)
			is_increasing = false;

		if (b1 < b0)
			is_decreasing = false;

		b0 = b1;
	}

	return (is_increasing ? 1 : 0) | (is_decreasing ? 2 : 0);
}

int euler()
{
	int cnt = 0;

	for (int i = 100; i < 1e7; ++i)
	{
		if (is_bouncy(i) == 0)
			++ cnt;

		if (cnt * 100 == i * 99)
			return i;
	}

	return -1;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
