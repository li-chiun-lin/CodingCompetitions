/*
35%

A spider, S, sits in one corner of a cuboid room, measuring 6 by 5 by 3, and a fly, F, sits in the opposite corner. By travelling on the surfaces of the room the shortest "straight line" distance from S to F is 10 and the path is shown on the diagram.

However, there are up to three "shortest" path candidates for any given cuboid and the shortest route doesn't always have integer length.

It can be shown that there are exactly 2060 distinct cuboids, ignoring rotations, with integer dimensions, up to a maximum size of M by M by M, for which the shortest route has integer length when M = 100. This is the least value of M for which the number of solutions first exceeds two thousand; the number of solutions when M = 99 is 1975.

Find the least value of M such that the number of solutions first exceeds one million.
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
#include <stack>
#include <string>
#include <vector>

using namespace std;

int euler(int n)
{
	set<int> square;
	for (int i = 1; i < 20000; ++i)
		square.insert(i * i);

	vector<int> mul(1e4);
	mul[1] = 1;
	int cnt = 0;

	for (int i = 1; ; ++i)
	{
		int ii = i * i;

		for (int j = 1; j <= i; ++j)
			for (int k = 1; k <= j; ++k)
			{
				int l = j + k;
				mul[l] = mul[l - 1] + l + l - 1;

				if (square.count(ii + mul[l]))
					++ cnt;
			}

		cout << i << " " << cnt << "\t";

		if (cnt > n)
			return i;
	}

	return -1;
}

int main()
{
	cout << euler(2000) << "\n";
	cout << euler(1e6) << "\n";

	return 0;
}
