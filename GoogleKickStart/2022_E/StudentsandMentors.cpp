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

void print(vector<int> v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

vector<int> studentsandmentors(vector<int>& R)
{
    int n = R.size();
    vector<int> ret(n, -1);
    vector<int> rr = R;
    
    sort(begin(rr), end(rr));
    
    for (int i = 0; i < n; ++i)
    {
        int R2 = R[i] * 2;
        auto it = upper_bound(begin(rr), end(rr), R2);
        ret[i] = -1;
        
        if (it != begin(rr))
        {
            auto v = *(--it);
            
            if (v == R[i])
            {
                if (it != begin(rr))
                {
                    auto vv = *(--it);
                    ret[i] = vv;
                }
            }
            else
            {
                ret[i] = v;
            }
        }
    }
    
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
	    vector<int> R(N);
	    
	    for (int j = 0; j < N; ++j)
	        cin >> R[j];

		cout << "Case #" << i << ": ";
		print(studentsandmentors(R));
	}

	return 0;
}