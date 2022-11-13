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

void dfs(int L, int note, int basket, int coin, int& ret)
{
    if (L == 0)
    {
        ret = min(ret, coin);
        return ;
    }

    if (coin >= ret)
        return ;

    dfs(L - 1, note, basket + 1, coin + 1, ret);

    if (basket && L >= basket && note != basket && coin + 6 < ret)
        dfs(L, basket, basket, coin + 4, ret);

    if (note && L >= note && coin + 2 < ret)
        dfs(L - note, note, basket + note, coin + 2, ret);
}

int magical(int L)
{
    #if 0
    int ret = L;

    dfs(L, 0, 0, 0, ret);

    return ret;
    #endif

    vector<int> dp(L + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= L; ++ i)
    {
        dp[i] = min(dp[i], dp[i - 1] + 1);

        for (int j = 1; j * i <= L; ++j)
            dp[j * i] = min(dp[j * i], dp[i] + 4 + 2 * (j - 1));
    }

    return dp[L];
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int L;
        cin >> L;

		cout << "Case #" << t << ": ";
		cout << magical(L) << "\n";
	}

	return 0;
}

