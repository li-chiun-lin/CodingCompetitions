/*
45%

Consider the isosceles triangle with base length, b = 16 , and legs,
L = 17.

By using the Pythagorean theorem it can be seen that the height of the triangle, h = sqrt(17 ^ 2 + 8 ^ 2) = 15, which is one less than the base length.

With b = 272 and L = 305, we get h = 273, which is one more than the base length, and this is the second smallest isosceles triangle with the property that h = b + 1 or h = b - 1.

Find Sigma L for the twelve smallest isosceles triangles for which h = b + 1 or h = b - 1 and b, L are positive integers.
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

unsigned long long euler(int n)
{
	unsigned long long sum = 17;
	unsigned long long x0 = 1, x1 = 17, x2 = 0;

	for (int i = 0; i < n; ++i)
	{
		x2 = x1 * 18 - x0;
		x0 = x1;
		x1 = x2;

		sum += x1;
	}

	return sum;
}

int main()
{
	cout << euler(11) << "\n";

	return 0;
}
