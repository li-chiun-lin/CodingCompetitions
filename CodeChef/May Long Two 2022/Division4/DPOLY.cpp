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
        vector<int> vec(n);

        for (int j = 0; j < n; ++j)
            cin >> vec[j];

        while (vec.size() && vec.back() == 0)
            vec.pop_back();

        cout << vec.size() - 1 << endl;
	}

	return 0;
}