/*

*/

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

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
        int n = 0;
        int cnt = 0;
        int p = 0;

        cin >> n;

        for (int j = 0; j < 4; ++j)
        {
            cin >> p;
            
            cnt = max(cnt, p);
        }

        cout << cnt << endl;
	}

	return 0;
}