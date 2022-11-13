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

void print(vector<vector<int>>& adj)
{
	int w = 2;

	for (int i = 0; i < adj.size(); ++i)
	{
		cout << setw(w) << i << " : ";
		for (int x : adj[i])
			cout << setw(w) << x;
		cout << endl;
	}
	cout << endl;
}

void print(vector<int>& v)
{
	for (int x : v)
		cout << x << " ";
	cout << "\n";
}

int electricity(vector<int>& A, vector<vector<int>>& C)
{
    int N = A.size();
    //vector<pair<int, int>> cap(N + 1);
    vector<vector<int>> adj(N + 1);
    vector<int> deg(N + 1);
    vector<int> cnt(N + 1, 1);
    cnt[0] = 0;

    for (auto& c : C)
    {
        if (A[c[0] - 1] < A[c[1] - 1])
        {
            adj[c[0]].push_back(c[1]);
            ++ deg[c[1]];
        }
        else if (A[c[0] - 1] > A[c[1] - 1])
        {
            adj[c[1]].push_back(c[0]);
            ++ deg[c[0]];
        }
    }

    queue<int> que;

    for (int i = 1; i <= N; ++i)
        if (deg[i] == 0)
            que.push(i);

    int ret = 0;

    while(que.size())
    {
        int u = que.front();
        que.pop();

        ret = max(ret, cnt[u]);

        for (int v : adj[u])
        {
            cnt[v] += cnt[u];

            if (-- deg[v] == 0)
                que.push(v);
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

        vector<int> A(N);

        for (auto& a : A)
            cin >> a;

        vector<vector<int>> conn(N - 1, vector<int>(2));

        for (auto& c : conn)
            cin >> c[0] >> c[1];

		cout << "Case #" << t << ": ";
		cout << electricity(A, conn) << "\n";
	}

	return 0;
}

