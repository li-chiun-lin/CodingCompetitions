/*
5%

If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, there are exactly three solutions for p = 120.

	{20,48,52}, {24,45,51}, {30,40,50}

For which value of p ≤ 1000, is the number of solutions maximised?
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

const int target = (1 << 10) - 2;

void check(int from, int to)
{
	for (int p = from; p <= to; ++p)
	{
		int bit = 0;
		bool good = true;

		for (int i = 1; bit < target && good; ++i)
		{
			long long pp = p * i;

			while (pp && good)
			{
				int b = 1 << (pp % 10);

				if (bit & b)
					good = false;
				else
					bit |= b;

				pp /= 10;
			}
		}

		if (good && bit == target)
			cout << p << " " << p * 2 << " " << p * 3 << endl;
	}
}

int euler()
{
	check(9, 10);
	check(90, 99);
	check(900, 999);
	check(9000, 9999);

	return 0;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
