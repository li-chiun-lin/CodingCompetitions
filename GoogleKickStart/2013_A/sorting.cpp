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
#include <unordered_map>
#include <vector>

using namespace std;

void print(vector<int>& v)
{
	for (int x : v)
		cout << x << " ";
	cout << "\n";
}

void sorting(vector<int>& S)
{
    vector<int> o, e;

    for (auto s : S)
    {
        if (s & 1)
            o.push_back(s);
        else
            e.push_back(s);
    }

    sort(begin(o), end(o));
    sort(rbegin(e), rend(e));

    int i = 0;
    int j = 0;

    for (auto& s : S)
    {
        if (s & 1)
            s = o[i ++];
        else
            s = e[j ++];
    }
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<int> S(N);

        for (auto& s : S)
            cin >> s;

		cout << "Case #" << t << ": ";
		//cout << 0 << "\n";
        sorting(S);
        print(S);
	}

	return 0;
}

