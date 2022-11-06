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

void print(vector<vector<string>> ticket)
{
    if (ticket.empty())
        return ;

    cout << ticket[0][0] << "-" << ticket[0][1];

    for (int i = 1; i < ticket.size(); ++i)
        cout << " " << ticket[i][0] << "-" << ticket[i][1];

    cout << "\n";
}

vector<vector<string>> sort_ticket(vector<vector<string>>& ticket)
{
    vector<vector<string>> ret;
    map<string, vector<string>> adj;
    map<string, int> deg;

    for (auto& t : ticket)
    {
        adj[t[0]].push_back(t[1]);
        ++ deg[t[1]];
    }

    queue<string> que;

    for (auto& h : adj)
        if (deg[h.first] == 0)
            que.push(h.first);

    while (que.size())
    {
        auto u = que.front();
        que.pop();

        //cout << u << " ";

        for (auto& v : adj[u])
        {
            if (-- deg[v] == 0)
            {
                ret.push_back({u, v});
                que.push(v);
            }
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
        int N;
        cin >> N;

        vector<vector<string>> ticket(N, vector<string>(2));

        for (auto& t : ticket)
            cin >> t[0] >> t[1];

		cout << "Case #" << t << ": ";
        print(sort_ticket(ticket));
	}

	return 0;
}

