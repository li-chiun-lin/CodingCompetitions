/*
5%

The fraction 49/98 is a curious fraction, as an inexperienced mathematician in attempting to simplify it may incorrectly believe that 49/98 = 4/8, which is correct, is obtained by cancelling the 9s.

We shall consider fractions like, 30/50 = 3/5, to be trivial examples.

There are exactly four non-trivial examples of this type of fraction, less than one in value, and containing two digits in the numerator and denominator.

If the product of these four fractions is given in its lowest common terms, find the value of the denominator.
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

int euler()
{
	int g = 0;

	for (int aa = 10; aa < 100; ++aa)
		for (int bb = aa + 1; bb < 100; ++bb)
		{
			g = gcd(aa, bb);

			if (g > 1 && g != 10)
			{
				int a1 = aa / 10;
				int a0 = aa % 10;
				int b1 = bb / 10;
				int b0 = bb % 10;

				if ((a1 == b0 && a0 * bb == aa * b1) ||
					(a0 == b1 && a1 * bb == aa * b0))
				{
					cout << aa / g << "/" << bb / g << endl;
				}
			}
		}

	return 0;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
