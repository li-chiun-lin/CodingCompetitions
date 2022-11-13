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

long long running(int L, vector<int>& D, vector<char>& C)
{
    int N = D.size();
    long long p = 0;
    long long r = 0;

    for (int i = 0; i < N; ++i)
    {
        if (C[i] == 'C')
        {
            p += D[i];

            if (p >= L)
            {
                r += p / L;
                p %= L;
            }
        }
        else
        {
            p -= D[i];

            if (-p >= L)
            {
                r += (-p / L);
                p %= L;
            }
        }
    }

    return r;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int L, N;
        cin >> L >> N;

        vector<int> D(N);
        vector<char> C(N);

        for (int i = 0; i < N; ++i)
            cin >> D[i] >> C[i];

		cout << "Case #" << t << ": ";
		cout << running(L, D, C) << "\n";
	}

	return 0;
}

