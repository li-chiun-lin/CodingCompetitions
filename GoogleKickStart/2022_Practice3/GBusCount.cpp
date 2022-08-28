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

void print(vector<long long> v)
{
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}

vector<long long> gbufcount(vector<int>& A, vector<int>& B, vector<int>& C)
{
    int n = C.size();
    int m = A.size();
    
    vector<long long> ret(n);
    map<int, int> acc;
    int limit = 0;
    
    for (int i = 0; i < m; ++i)
    {
        ++ acc[A[i]];
        -- acc[B[i] + 1];
        
        limit = max(limit, B[i]);
    }
    
    int mc = *max_element(begin(C), end(C));
    limit = max(limit, mc);
    
    vector<long long> cnt(limit + 1);
    
    for (int i = 1; i <= limit; ++i)
        cnt[i] = cnt[i - 1] + acc[i];
        
    for (int i = 0; i < n; ++i)
        ret[i] = cnt[C[i]];
    
    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N;
	    cin >> N;
	    
	    vector<int> A(N);
	    vector<int> B(N);
	    
	    for (int j = 0; j < N; ++j)
	        cin >> A[j] >> B[j];
	        
	    int P;
	    cin >> P;
	    
	    vector<int> C(P);
	    
	    for (int& c : C)
	        cin >> c;

		cout << "Case #" << i << ": ";
		print(gbufcount(A, B, C));
	}

	return 0;
}