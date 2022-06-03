/*
5%

Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

	1634 = 1<sup>4</sup> + 6<sup>4</sup> + 3<sup>4</sup> + 4<sup>4</sup>
	8208 = 8<sup>4</sup> + 2<sup>4</sup> + 0<sup>4</sup> + 8<sup>4</sup>
	9474 = 9<sup>4</sup> + 4<sup>4</sup> + 7<sup>4</sup> + 4<sup>4</sup>

As 1 = 1<sup>4</sup> is not a sum it is not included.
The sum of these numbers is 1634 + 8208 + 9474 = 19316.
Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.


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

int euler(int n)
{
	vector<int> p(10);

	for (int i = 0; i < 10; ++i)
		p[i] = pow(i, n);


	int sum = 0;

	for (long long i = 2; i < 10000000; ++i)
	{
		long long ds = 0;
		long long ii = i;

		while (ii)
		{
			ds += p[ii % 10];
			ii /= 10;
		}

		if (ds == i)
			sum += i;
	}

	return sum;
}

int main()
{
	cout << euler(4) << endl;
	cout << euler(5) << endl;

	return 0;
}
