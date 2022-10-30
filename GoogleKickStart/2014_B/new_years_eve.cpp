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

void print(vector<vector<double>>& g)
{
    for (auto& r : g)
    {
        for (auto c : r)
            cout << c << " ";
        cout << "\n";
    }
    cout << "\n";
}

double new_years(int B, int L, int N)
{
    vector<vector<vector<double>>> glass(2, 
        vector<vector<double>>(L + 1, 
        vector<double>(L + 1)));

    int cur = 0;
    int nxt = 1;

    glass[cur][0][0] = B * 750;

    for (int l = 1; l < L; ++l)
    {
        for (int r = 0; r <= l; ++r)
            for (int c = 0; c <= r; ++c)
            {
                double excess = max((glass[cur][r][c] - 250) / 3.0, 0.0);
                glass[cur][r][c] = 0;

                glass[nxt][r][c] += excess;
                glass[nxt][r + 1][c] += excess;
                glass[nxt][r + 1][c + 1] += excess;
            }

        cur = nxt;
        nxt = 1 - nxt;
    }

    int i = 1;
    int j = N;

    while (j > i)
        j -= i ++;

    return min(glass[cur][i - 1][j - 1], 250.0);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int B, L, N;
        cin >> B >> L >> N;

		cout << "Case #" << t << ": ";
		cout << fixed << setprecision(7) <<  new_years(B, L, N) << "\n";
	}

	return 0;
}

