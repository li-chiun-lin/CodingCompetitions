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

void print(vector<double> v)
{
    cout << fixed << setprecision(9);
    
	for (auto x : v)
		cout << x << "\n";
}

vector<double> gcube(vector<int>& A, vector<vector<int>>& LR)
{
    vector<double> ret;

    for (auto& lr : LR)
    {
        int D = lr[1] - lr[0] + 1;
        double ans = 1;

        for (int i = lr[0]; i <= lr[1]; ++i)
            ans *= pow((double)A[i], 1.0 / D);

        ret.push_back(ans);
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, M;
        cin >> N >> M;

        vector<int> A(N);

        for (auto& a : A)
            cin >> a;

        vector<vector<int>> LR(M, vector<int>(2));

        for (auto& lr : LR)
            cin >> lr[0] >> lr[1];

		cout << "Case #" << t << ":\n";
        print(gcube(A, LR));
	}

	return 0;
}

