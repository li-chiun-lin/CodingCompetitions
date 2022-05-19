/*

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
	set<long long> pen;

	for (long long i = 1; i < 10000; ++i)
		pen.insert(i * (3 * i - 1) / 2);


	for (auto j : pen)
	{
		for (auto k : pen)
		{
			if (k <= j)
				continue;

			if (pen.count(k + j) && pen.count(k - j))
			{
				cout << j << " " << k << endl;
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
