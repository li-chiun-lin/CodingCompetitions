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

long long recordbreaker(vector<long long>& V)
{
    int n = V.size();
    long long m = -1;
    long long cnt = 0;
    
    for (int i = 0; i < n; ++i)
    {
        // condition 1
        if (V[i] <= m)
            continue;
            
        m = max(m, V[i]);
        
        // condition 2
        if (i + 1 < n && V[i] <= V[i + 1])
            continue;
            
        ++ cnt;
    }
    
    return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N;
	    cin >> N;
	    
	    vector<long long> V(N);
	    
	    for (auto& v : V)
	        cin >> v;

		cout << "Case #" << i << ": ";
		cout << recordbreaker(V) << endl;
	}

	return 0;
}