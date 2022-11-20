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
#include <unordered_set>
#include <vector>

using namespace std;

void print(set<long long>& s)
{
    for (auto x : s)
        cout << x << " ";
    cout << "\n";
}

/*
assume there are totally x files,
for each P_i and K_i, the following condition must hold.

    P_i / 100 <= K_i / x < (P_i + 1) / 100

    which equals to 

    100 * K_i / (P_i + 1) < x <= 100 * K_i / P_i

and finally, there must be only one possible integer x.
*/

long long gfile(int N, vector<vector<long long>>& status)
{
    long double ub = LLONG_MAX, lb = LLONG_MIN;
    long double u, l;

    for (auto& s : status)
    {
        if (s[0] == 100)
            return s[1];

        if (s[0])
        {
            u = ((long double)100 * s[1] / s[0]);
        }
        else
            u = LLONG_MAX;

        l = ((long double)100 * s[1] / (s[0] + 1));

        ub = min(ub, u);
        lb = max(lb, l);

        if (lb > ub)
            return -1;
    }

    

    long long uu = floor(ub);
    long long ll = ceil(lb + 0.0001);

    //cout << lb << " -- " << ub << "\n";
    //cout << ll << " -- " << uu << "\n";

    if (uu != ll)
        return -1;

    return uu;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<vector<long long>> status(N, vector<long long>(2));

        for (auto& s : status)
            cin >> s[0] >> s[1];

		cout << "Case #" << t << ": ";
		cout << gfile(N, status) << "\n";
	}

	return 0;
}

