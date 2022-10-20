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

bool bad_horse(vector<vector<string>>& member)
{
    map<string, vector<string>> adj;

    for (auto& m : member)
    {
        adj[m[0]].push_back(m[1]);
        adj[m[1]].push_back(m[0]);
    }

    int n = adj.size();
    map<string, int> grp;

    int size = 0;
    int g = 1;
    queue<string> que;
    
    for (auto& a : adj)
    {
        if (grp[a.first])
            continue;
            
        que.push(a.first);
        grp[a.first] = g;
    
        while (size = que.size())
        {
            g *= -1;
    
            while (size --)
            {
                auto u = que.front();
                que.pop();
    
                for (auto& v : adj[u])
                {
                    if (grp[v] == 0)
                    {
                        grp[v] = g;
                        que.push(v);
                    }
                    else if (grp[v] == grp[u])
                        return false;
                }
            }
        }
    }

    return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int M;
        cin >> M;

        vector<vector<string>> member(M, vector<string>(2));

        for (auto& m : member)
            cin >> m[0] >> m[1];

		cout << "Case #" << t << ": ";
		cout << (bad_horse(member) ? "Yes" : "No") << "\n";
	}

	return 0;
}

