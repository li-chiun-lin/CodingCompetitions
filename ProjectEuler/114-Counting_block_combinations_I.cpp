/*
35%

A row measuring seven units in length has red blocks with a minimum length of three units placed on it, such that any two red blocks (which are allowed to be different lengths) are separated by at least one grey square. There are exactly seventeen ways of doing this.

.......
RRR....
.RRR...
..RRR..
...RRR.
....RRR
RRR.RRR
RRRR...
.RRRR..
..RRRR.
...RRRR
RRRRR..
.RRRRR.
..RRRRR
RRRRRR.
.RRRRRR
RRRRRRR

How many ways can a row measuring fifty units in length be filled?

NOTE: Although the example above does not lend itself to the possibility, in general it is permitted to mix block sizes. For example, on a row measuring eight units in length you could use red (3), grey (1), and red (4).
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
	// any length can be fill with all gray tiles, 
	// hence default to 1.
	vector<unsigned long long> dp(n + 1, 1);

	for (int len = 3; len <= n; ++len)
	{
		// case: put a gray tile
		dp[len] += dp[len - 1];

		// case: put a red segment and a gray tile
		for (int red = 3; red < len; ++red)
			dp[len] += dp[len - red - 1];
	}

	return dp[n];
}

int main()
{
	cout << euler(50) << "\n";

	return 0;
}
