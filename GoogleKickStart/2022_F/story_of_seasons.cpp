/*
test set 3 TLE.
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

long long story(vector<long long>& quantity, vector<int>& length, vector<int>& value, long long D, long long X)
{
    int n = quantity.size();
    vector<vector<int>> len(n);

    for (int i = 0; i < n; ++i)
        len[i] = {length[i], i};

    // shorter days at the end
    sort(begin(len), end(len), greater<>());

    priority_queue<vector<int>> pq;
    long long ret = 0;

    // count the days left backword
    for (auto days_left = 0; days_left <= D && (pq.size() || len.size()); ++ days_left)
    {
        //cout << "days left " << days_left << "\n";

        while (len.size() && len.back()[0] < days_left)
        {
            //cout << "put " << len.back()[0] << " " << len.back()[1] << "\n";

            int idx = len.back()[1];
            pq.push({value[idx], idx});
            len.pop_back();
        }

        if (len.size() && pq.empty())
        {
            days_left = len.back()[0];
            continue;
        }

        auto x = X;

        while (x && pq.size())
        {
            int idx = pq.top()[1];
            
            auto d = min(x, quantity[idx]);
            ret += (long long)d * pq.top()[0];
            x -= d;
            quantity[idx] -= d;
           
            if (quantity[idx] == 0)
                pq.pop();
        }
    }

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        long long D, N, X;
        cin >> D >> N >> X;

        map<pair<int, int>, long long> hit;
        int q, l, v;

        for (int i = 0; i < N; ++i)
        {
            cin >> q >> l >> v;
            hit[{l, v}] += q;
        }

        vector<long long> quantity;
        vector<int> length;
        vector<int> value;

        for (auto& h : hit)
        {
            length.push_back(h.first.first);
            value.push_back(h.first.second);
            quantity.push_back(h.second);
        }

		cout << "Case #" << t << ": ";
		cout << story(quantity, length, value, D, X) << "\n";
	}

	return 0;
}

