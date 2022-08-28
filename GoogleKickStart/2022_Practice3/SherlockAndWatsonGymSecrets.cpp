/*
TLE
to be continued.
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
#include <vector>

using namespace std;

int mod_prd(long long a, long long x, long long m, map<long long, map<long long, int>>& dp_prd)
{
    a %= m;
    x %= m;

    //cout << a << " " << x << " ";

    if (dp_prd[a].find(x) != end(dp_prd[a]))
        return dp_prd[a][x];

    long long aa = a;
    long long xx = x;
    long long r = 0;

    //cout << a << " - " << x << " ";

    while (x) 
    {
        if (x & 1)
            r = (r + a) % m;

        a = (a + a) % m;
        x >>= 1;
    }

    //r %= m;

    //cout << "ret " << r << "\n";

    return dp_prd[aa][xx] = r;
}

int pow_mod(long long a, long long x, long long m, map<long long, map<long long, int>>& dp_pow, map<long long, map<long long, int>>& dp_prd)
{
    a %= m;

    if (dp_pow[a].find(x) != end(dp_pow[a]))
        return dp_pow[a][x];

    long long aa = a;
    long long xx = x;
    long long r = 1;
    
    while (x)
    {
        if (x & 1)
            r = mod_prd(r, a, m, dp_prd);
            //r = (r * a) % m;
        
        a = mod_prd(a, a, m, dp_prd);
        //a = (a * a) % m;
        x >>= 1;
    }

    return dp_pow[aa][xx] = r % m;
}

long long gym(int A, int B, int N, int K)
{
    int mod = 1e9 + 7;
    
    //vector<long long> iA(N + 1), jB(N + 1);
    vector<int> modA(K), modB(K);
    long long exclude = 0;
    //vector<vector<int>> dp(N + 1, vector<int>(max(A, B) + 1, -1));
    map<long long, map<long long, int>> dp_prd, dp_pow;
    
    
    //cout << "\n";
    
    for (int x = 1; x <= N; ++x)
    {
        int iA = pow_mod(x, A, K, dp_pow, dp_prd);
        int jB = pow_mod(x, B, K, dp_pow, dp_prd);

        if ((iA + jB) % K == 0)
            ++ exclude;

        ++ modA[iA];
        ++ modB[jB];
    }

    //cout << modA[0] << " " << modB[0] << "\n";
    
    
    
    
    map<long long, map<long long, int>> dp_prd2;
    long long ret = mod_prd(modA[0], modB[0], mod, dp_prd2);
    //long long ret = (modA[0] * modB[0]) % mod;
    
    for (int a = 1; a < K; ++a)
    {
        long long well_i = modA[a];
        long long well_j = modB[K - a];
            
        long long cnt = mod_prd(well_i, well_j, mod, dp_prd2);
        //long long cnt = (well_i * well_j) % mod;
        //cout << cnt << " ";

        ret = (cnt + ret) % mod;
    }

    //cout << ret << "\n";
    
    return ret - exclude;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int A, B, N, K;
	    cin >> A >> B >> N >> K;

		cout << "Case #" << i << ": ";
		cout << gym(A, B, N, K) << endl;
	}

	return 0;
}

