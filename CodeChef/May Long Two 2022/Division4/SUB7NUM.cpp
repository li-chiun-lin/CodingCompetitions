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
#include <vector>

using namespace std;

int pow(int a)
{
    int p = 1;
    
    while (a)
    {
        a /= 10;
        p *= 10;
    }
    
    return p;
}

long long sub7num(vector<int>& A)
{
    int n = A.size();
    int mod = 1e9 + 7;
    vector<vector<long long>> dp(n + 1, vector<long long>(7));
    
    dp[0][0] = 1;
    
    for (int i = 0; i < n; ++i)
    {
        int p = pow(A[i]);
        
        for (int j = 0; j < 7; ++j)
        {
            int jj = (j * p + A[i]) % 7;
            dp[i + 1][jj] = dp[i][j] + dp[i][jj];
            dp[i + 1][j] %= mod;
        }
    }
    
    return (dp[n][0] - 1 + 2 * mod) % mod;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
	    int N;
	    cin >> N;
	    
	    vector<int> A(N);
	    
	    for (auto& a : A)
	        cin >> a;
	        
		cout << sub7num(A) << "\n";
	}

	return 0;
}

