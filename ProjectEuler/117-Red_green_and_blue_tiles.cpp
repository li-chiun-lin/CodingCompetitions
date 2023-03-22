/*
35%

Using a combination of grey square tiles and oblong tiles chosen from: red tiles (measuring two units), green tiles (measuring three units), and blue tiles (measuring four units), it is possible to tile a row measuring five units in length in exactly fifteen different ways.

.....
RR...
.RR..
..RR.
...RR
RRRR.
RR.RR
.RRRR
GGG..
.GGG.
..GGG
RRGGG
GGGRR
BBBB.
.BBBB

How many ways can a row measuring fifty units in length be tiled?

NOTE: This is related to Problem 116.
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

long long euler(int n)
{
	// all index shift by 4, for convenient
	vector<long long> dp(n + 1 + 4);
	dp[4] = 1;

	for (int len = 1, len4 = 5; len <= n; ++len, ++len4)
		dp[len4] = 
			+ dp[len4 - 1]	// gray
			+ dp[len4 - 2]	// red
			+ dp[len4 - 3]	// green
			+ dp[len4 - 4];	// blue

	return dp[n + 4];
}

int main()
{
	cout << euler(50) << "\n";

	return 0;
}
