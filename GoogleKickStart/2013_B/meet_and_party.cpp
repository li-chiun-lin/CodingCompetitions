/*
LINEAR only pass ts1
Should use binary search, to be continued.
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

//#define LINEAR

void print(vector<vector<int>>& v)
{
	for (auto& r : v)
	{
		for (auto& c : r)
            cout << c << " ";
        cout << "\n";
	}
}

long long dst(vector<vector<int>>& people, int i)
{
    long long d = 0;

    for (auto& p : people)
        d += abs(people[i][0] - p[0]) 
           + abs(people[i][1] - p[1]);
    
    return d;
}

long long dst(vector<int>& xs, vector<int>& ys, int xc, int yc)
{
    long long d = 0;

    for (int x : xs)
        d += abs(x - xc);

    for (int y : ys)
        d += abs(y - yc);

    return d;
}

int center(vector<int>& p, int lb, int ub)
{
    int m1 = (p.size() - 1) / 2;
    int m2 = p.size() / 2;

    if (ub <= p[m1])
        return ub;
    else if (lb >= p[m2])
        return lb;
    else
        return p[m1];
}

void meet(vector<vector<int>>& R)
{
#ifdef LINEAR
    vector<vector<int>> people;

    for (auto& r : R)
        for (int i = r[0]; i <= r[2]; ++i)
            for (int j = r[1]; j <= r[3]; ++j)
                people.push_back({i, j});

    long long d = INT_MAX;
    long long s = 0;

    for (int i = 0; i < people.size(); ++i)
    {
        long long r = dst(people, i);
        if (d > r)
        {
            d = r;
            s = i;
        }
        else if (d == r)
        {
            if (people[i][0] < people[s][0])
                s = i;
            else if (people[i][0] == people[s][0] && people[i][1] < people[s][1])
                s = i;
        }
    }

    cout << people[s][0] << " " << people[s][1] << " " << d << "\n";
#endif

    vector<int> xs, ys;

    for (auto& r : R)
        for (int i = r[0]; i <= r[2]; ++i)
            for (int j = r[1]; j <= r[3]; ++j)
                {
                    xs.push_back(i);
                    ys.push_back(j);
                }

    sort(begin(xs), end(xs));
    sort(begin(ys), end(ys));

    int x = 0;
    int y = 0;
    long long d = LLONG_MAX;

    for (auto&r : R)
    {
        int xc = center(xs, r[0], r[2]);
        int yc = center(ys, r[1], r[3]);
        long long dc = dst(xs, ys, xc, yc);

        if (dc < d ||
            (dc == d && 
                (xc < x || (
                        xc == x && yc < y
                ))))
        {
            x = xc;
            y = yc;
            d = dc;
        }
    }

    cout << x << " " << y << " " << d << "\n";
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int B;
        cin >> B;

        vector<vector<int>> R(B, vector<int>(4));

        for (auto& r : R)
            for (auto& c : r)
                cin >> c;

		cout << "Case #" << t << ": ";
        meet(R);
	}

	return 0;
}

