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
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

void print(vector<bool> v)
{
    for (auto x : v)
        cout << (x ? "Yes" : "No") << "\n";
}

vector<bool> wheek(vector<int>& Gp, vector<int>& Ge, vector<int>& Gt, vector<vector<int>>& ratio)
{
    vector<bool> ret;
    int Np = Gp.size();
    int Ne = Ge.size();
    int Nt = Gt.size();

    sort(begin(Gp), end(Gp));
    sort(begin(Ge), end(Ge));
    sort(begin(Gt), end(Gt));

    vector<vector<long long>> pe(Np, vector<long long>(Ne));
    vector<vector<long long>> et(Ne, vector<long long>(Nt));

    // pre-calculate table
    for (int i = 0; i < Np; ++i)
        for (int j = 0; j < Ne; ++j)
            pe[i][j] = Gp[i] * Ge[j];

    for (int j = 0; j < Ne; ++j)
        for (int k = 0; k < Nt; ++k)
            et[j][k] = Ge[j] * Gt[k];

    
    /*
    for each P and Q, find i, j1, j2 and k such that
    (Gp[i] / Ge[j1]) * (Ge[j2] / Gt[k]) = P / Q, where j1 != j2 and GCD(P, Q) == 1.

    => Q * Gp[i] * Ge[j2] == P * Ge[j1] * Gt[k]

    let pe = Gp[i] * Gp[j2], et = Ge[j1] * Gt[k]

    => Q * pe == P * et, where
        1. et >= Q, 
        2. pe >= P,
        3. et % Q == 0,
        4. pe % P == 0.
    */

    for (auto& r : ratio)
    {
        long long P = r[0];
        long long Q = r[1];
        long long d = gcd(P, Q);

        P /= d;
        Q /= d;

        bool found = false;

        for (int i = 0; i < Np && ! found; ++i)
        {
            for (int j2 = 0; j2 < Ne && ! found; ++j2)
            {
                // early abortion
                if (pe[i][j2] < P || pe[i][j2] % P)
                    continue;

                long long Qpe = Q * pe[i][j2];

                for (int j1 = 0; j1 < Ne && ! found; ++j1)
                {
                    if (j1 == j2)
                        continue;

                    for (int k = 0; k < Nt && ! found; ++k)
                        found = Qpe == P * et[j1][k];
                }
            }
        }

        ret.push_back(found);
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int Np, Ne, Nt;
        cin >> Np >> Ne >> Nt;

        vector<int> Gp(Np), Ge(Ne), Gt(Nt);

        for (auto& p : Gp)
            cin >> p;

        for (auto& e : Ge)
            cin >> e;

        for (auto& t : Gt)
            cin >> t;

        int M;
        cin >> M;

        vector<vector<int>> ratio(M, vector<int>(2));
        
        for (auto& r : ratio)
            cin >> r[0] >> r[1];

		cout << "Case #" << t << ":\n";
        print(wheek(Gp, Ge, Gt, ratio));
	}

	return 0;
}

