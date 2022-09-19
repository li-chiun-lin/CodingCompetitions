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

class fabric
{
public:
    string c;
    int d;
    int id;

    fabric(string co = "", int dur = 0, int i = 0) : c(co), d(dur), id(i)
    {}
};

class cmp_a
{
public:
    bool operator()(fabric& a, fabric& b)
    {
        if (a.c == b.c)
            return a.id < b.id;
        
        return a.c < b.c;
    }
};

class cmp_c
{
public:
    bool operator()(fabric& a, fabric& b)
    {
        if (a.d == b.d)
            return a.id < b.id;
        
        return a.d < b.d;
    }
};

int sortthefabrics(vector<fabric>& fab)
{
    auto clone = fab;

    sort(begin(fab), end(fab), cmp_a());
    sort(begin(clone), end(clone), cmp_c());

    int cnt = 0;

    for (int i = 0; i < fab.size(); ++i)
        if (fab[i].id == clone[i].id)
            ++ cnt;

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

        vector<fabric> fab(N);

        for (int i = 0; i < N; ++i)
            cin >> fab[i].c >> fab[i].d >> fab[i].id;

		cout << "Case #" << t << ": ";
		cout << sortthefabrics(fab) << "\n";
	}

	return 0;
}

