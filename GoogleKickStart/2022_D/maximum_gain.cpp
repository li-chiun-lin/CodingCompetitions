#include <algorithm>
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

long long maximumgane(vector<int>& A, vector<int>& B, int K)
{
    int n = A.size();
    int m = B.size();
    
    vector<long long> preA(n + 1), sufA(n + 1), preB(m + 1), sufB(m + 1);
    
    for (int i = 0; i < K && i < n; ++i)
    {
        preA[i + 1] = preA[i] + A[i];
        sufA[i + 1] = sufA[i] + A[n - 1 - i];
    }
    
    for (int i = 0; i < K && i < m; ++i)
    {
        preB[i + 1] = preB[i] + B[i];
        sufB[i + 1] = sufB[i] + B[m - 1 - i];
    }
    
    long long r = 0;
    
    for (int ka = 0; ka <= K && ka <= n; ++ka)
    {
        int kb = K - ka;

        if (kb > m)
            continue;

        long long ma = 0;
        long long mb = 0;

        for (int k1 = 0; k1 <= ka; ++ k1)
            ma = max(ma, preA[k1] + sufA[ka - k1]);

        for (int k1 = 0; k1 <= kb; ++k1)
            mb = max(mb, preB[k1] + sufB[kb - k1]);

        r = max(r, ma + mb);
    }
    
    return r;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N, M, K;
	    
	    cin >> N;
	    vector<int> A(N);
	    
	    for (int j = 0; j < N; ++j)
	        cin >> A[j];
	    
	    cin >> M;
	    
	    vector<int> B(M);
	    
	    for (int j = 0; j < M; ++j)
	        cin >> B[j];
	    
	    cin >> K;

		cout << "Case #" << i << ": ";
		cout << maximumgane(A, B, K) << endl;
	}

	return 0;
}