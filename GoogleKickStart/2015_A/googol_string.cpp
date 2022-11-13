/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int googol(long long K)
{
    long long len = 1;
    long long th = 1;

    while (len < K)
        len = len * 2 + 1;

    int v = 0;

    while (len > 1)
    {
        len /= 2;

        if (K > len + 1)
        {
            // focus on right part
            K -= len + 1;
            // switch
            v = 1 - v;
            // reverse
            K = len - K + 1;
        }
        else if (K <= len)
            ;// focus on left part, which means doing nothing
        else
            // hit a middle `0', return immediately.
            return v;
    }

    return v;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        long long K;
        cin >> K;

		cout << "Case #" << t << ": ";
		cout << googol(K) << "\n";
	}

	return 0;
}

