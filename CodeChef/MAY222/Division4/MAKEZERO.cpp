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
        cin >> n;
        int x;
        int sum = 0;
        int cnt = 0;

        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            sum |= x;
        }

        while (sum)
        {
            cnt += sum & 1;
            sum >>= 1;
        }

        cout << cnt << endl;
	}

	return 0;
}