/*
30%

A row of five grey square tiles is to have a number of its tiles replaced with coloured oblong tiles chosen from red (length two), green (length three), or blue (length four).

If red tiles are chosen there are exactly seven ways this can be done.

RR...
.RR..
..RR.
...RR
RRRR.
RR.RR
.RRRR

If green tiles are chosen there are three ways.

GGG..
.GGG.
..GGG

And if blue tiles are chosen there are two ways.

BBBB.
.BBBB

Assuming that colours cannot be mixed there are 7 + 3 + 2 = 12 ways of replacing the grey tiles in a row measuring five units in length.

How many different ways can the grey tiles in a row measuring fifty units in length be replaced if colours cannot be mixed and at least one coloured tile must be used?

NOTE: This is related to Problem 117.
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

long long euler(int m, int n)
{
	// all index shift by m, for convenient
	vector<long long> dp(n + 1 + m);
	dp[m] = 1;

	for (int len = 1, len_m = m + 1; len <= n; ++len, ++len_m)
		dp[len_m] =  
			+ dp[len_m - 1] 
			+ dp[len_m - m];

	// exclude the sole case that fills with all gray tiles
	return dp[n + m] - 1;
}

int main()
{
	cout << (euler(2, 50) + euler(3, 50) + euler(4, 50)) << "\n";

	return 0;
}
