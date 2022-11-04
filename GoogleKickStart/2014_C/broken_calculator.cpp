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

void print(vector<int>& dp)
{
    for (int i = 0; i < dp.size(); ++i)
        cout << "(" << i << " " << dp[i] << ")\t";
    cout << "\n";
}

int broken(vector<int>& digit, int target)
{
    vector<int> dp(target + 1);

    // one-digit pure number
    for (int i = 0; i < 10 && i < dp.size(); ++i)
        dp[i] = digit[i];

    // multi-digit pure number, without `*'
    for (int i = 10; i <= target; ++i)
    {
        int q = i / 10;
        int r = i % 10;

        if (dp[q] && dp[r])
            dp[i] = dp[q] + dp[r];
    }

    // consider `*'
    for (int i = 0; i <= target; ++i)
    {
        // pure number should be the optimized result.
        if (dp[i])
            continue;

        // check composite numbers, and find the minimium result.
        for (int p = 2; p * p <= i; ++p)
            if (dp[p] && i % p == 0 && dp[i / p])
                if (dp[i] == 0 || dp[i] > dp[p] + dp[i / p] + 1)
                    dp[i] = dp[p] + dp[i / p] + 1;
    }

    if (dp[target] == 0)
        return 0;

    // add the `=' button.
    return dp[target] + 1;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        vector<int> digit(10);
        int target = 0;

        for (auto& d : digit)
            cin >> d;

        cin >> target;


		cout << "Case #" << t << ": ";
        int r = broken(digit, target);

        if (r == 0)
            cout << "Impossible" << "\n";
        else
		    cout << r << "\n";
	}

	return 0;
}

