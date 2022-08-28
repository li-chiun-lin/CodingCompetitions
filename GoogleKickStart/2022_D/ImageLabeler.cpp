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

double imagelabeler(int n, int m, vector<int>& a)
{
    sort(begin(a), end(a));
    
    double sum = 0;
    
    for (int i = 0; i < m - 1; ++i)
        sum += a[n - 1 - i];
        
    int rest = n - (m - 1);
    
    if (rest == 0)
        ;
    else if (rest % 2)
        sum += a[rest / 2];
    else
        sum += (double)(a[(rest - 1) / 2] + a[rest / 2]) / 2;
    
    return sum;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N, M;
	    cin >> N >> M;
	    
	    vector<int> A(N);
	    
	    for (int j = 0; j < N; ++j)
	        cin >> A[j];
	    
		cout << "Case #" << i << ": ";
        cout << fixed << setprecision(2);
		cout << imagelabeler(N, M, A) << endl;
	}

	return 0;
}