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

long long subarrayswithlength(vector<long long>& A)
{
    int n = A.size();
    vector<long long> last(n + 1, -1);
    long long cnt = 0;
    
    for (long long i = 0; i < n; ++i)
    {
        long long l = max(last[A[i]] + 1, i - A[i] + 1);
        long long r = min(i, n - A[i]);
        last[A[i]] = i;
        
        cnt += max(r - l + 1, 0LL);
    }
    
    
    return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
	    int N;
	    cin >> N;
	    
	    vector<long long> A(N);
	    
	    for (auto& a : A)
	        cin >> a;
	    
		cout << subarrayswithlength(A) << "\n";
	}

	return 0;
}