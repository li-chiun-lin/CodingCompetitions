/*
In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

    Top 10 participants receive rupees X each.
	Participants with rank 11 to 100 (both inclusive) receive rupees Y each.

Find the total prize money over all the contestants.
*/

#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
        long long x, y;
        cin >> x >> y;

		cout << (x * 10 + y * 90) << endl;
	}

	return 0;
}