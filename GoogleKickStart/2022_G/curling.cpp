/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

pair<int, int> curling(int Rs, int Rh, vector<vector<int>>& XY, vector<vector<int>>& ZW)
{
    int red = 0;
    int yellow = 0;
    int N = XY.size();
    int M = ZW.size();

    vector<double> Dxy(N), Dzw(M);

    for (int i = 0; i < N; ++i)
    {
        auto d = (long long)XY[i][0] * XY[i][0] + (long long)XY[i][1] * XY[i][1];
        auto r = sqrt(d);
        Dxy[i] = r <= Rh || r - Rs <= Rh ? r : LONG_MAX;
    }

    for (int i = 0; i < M; ++i)
    {
        auto d = (long long)ZW[i][0] * ZW[i][0] + (long long)ZW[i][1] * ZW[i][1];
        auto r = sqrt(d);
        Dzw[i] = r <= Rh || r - Rs <= Rh ? r : LONG_MAX;
    }

    sort(begin(Dxy), end(Dxy));
    sort(begin(Dzw), end(Dzw));

    for (int i = 0; i < N; ++i)
    {
        if (Dxy[i] == LONG_MAX || (M && Dxy[i] >= Dzw[0]))
            break;
        
        ++ red;
    }

    for (int i = 0; i < M; ++i)
    {
        if (Dzw[i] == LONG_MAX || (N && Dzw[i] >= Dxy[0]))
            break;
        
        ++ yellow;
    }

    return {red, yellow};
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int Rs, Rh, N, M;
        cin >> Rs >> Rh >> N;

        vector<vector<int>> XY(N, vector<int>(2));

        for (auto& x : XY)
            cin >> x[0] >> x[1];

        cin >> M;

        vector<vector<int>> ZW(M, vector<int>(2));

        for (auto& z : ZW)
            cin >> z[0] >> z[1];

		cout << "Case #" << t << ": ";
		//cout << 0 << "\n";

        auto ret = curling(Rs, Rh, XY, ZW);
        cout << ret.first << " " << ret.second << "\n";
	}

	return 0;
}

