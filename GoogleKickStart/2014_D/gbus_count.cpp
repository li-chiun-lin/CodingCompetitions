/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    if (v.empty())
        return ;

    cout << v.front();

    for (int i = 1; i < v.size(); ++i)
        cout << " " << v[i];
	cout << "\n";
}

vector<int> gbus(vector<vector<int>>& bus, vector<int>& city)
{
    map<int, int> sweep;

    for (auto& b : bus)
    {
        ++ sweep[b[0]];
        -- sweep[b[1] + 1];
    }

    vector<int> acc(rbegin(sweep)->first + 1);
    int i = 1;
    int s = 0;

    for (auto& h : sweep)
    {
        while (i < h.first)
            acc[i ++] = s;

        s += h.second;
    }

    vector<int> ret;

    for (auto c : city)
        ret.push_back(c < acc.size() ? acc[c] : 0);

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<vector<int>> bus(N, vector<int>(2));

        for (auto& b : bus)
            cin >> b[0] >> b[1];

        int P;
        cin >> P;

        vector<int> city(P);

        for (auto& c : city)
            cin >> c;

		cout << "Case #" << t << ": ";
        print(gbus(bus, city));
	}

	return 0;
}

