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

#if 0
int touchbartyping(vector<int>& S, vector<int>& K)
{
    int n = S.size();
    int m = K.size();
    map<int, vector<int>> adj;
    
    for (int i = 0; i < m; ++i)
        adj[K[i]].push_back(i);
        
    int ret = INT_MAX;
    
    queue<pair<int, int>> que;
    
    int i = 0;
    int size = 0;
    
    for (int v : adj[S[i]])
        que.push({v, 0});
        
    while ((size = que.size()) && i < n - 1)
    {
        ++ i;
        
        while (size --)
        {
            int u = que.front().first;
            int p = que.front().second;
            que.pop();
            
            for (int v : adj[S[i]])
                que.push({v, p + abs(u - v)});
        }
    }
    
    while (que.size())
    {
        ret = min(ret, que.front().second);
        que.pop();
    }
    
    return ret;
}
#endif

#if 0
int dfs(vector<int>& S, int i, int u, map<int, vector<int>>& adj, vector<vector<int>>& dp)
{
    if (i == S.size())
        return 0;
        
    int r = INT_MAX;
    
    if (dp[i][u] != -1)
        return dp[i][u];
        
    for (int v : adj[S[i]])
        r = min(r, dfs(S, i + 1, v, adj, dp) + abs(u - v));
    
    return dp[i][u] = r;
}
#endif

int dfs(vector<int>& S, int i, int u, map<int, vector<int>>& adj, vector<vector<int>>& dp)
{
    if (i == S.size())
        return 0;
        
    if (dp[i][u] != -1)
        return dp[i][u];
        
    int r = INT_MAX;
    int left = INT_MIN;
    int right = INT_MAX;
    
    for (int v : adj[S[i]])
    {
        if (v < u)
            left = max(left, v);
        else
            right = min(right, v);
    }
    
    if (left != INT_MIN)
        r = min(r, dfs(S, i + 1, left, adj, dp) + (u - left));
        
    if (right != INT_MAX)
        r = min(r, dfs(S, i + 1, right, adj, dp) + (right - u));
    
    return dp[i][u] = r;
}

int touchbartyping(vector<int>& S, vector<int>& K)
{
    int n = S.size();
    int m = K.size();
    map<int, vector<int>> adj;
    
    for (int i = 0; i < m; ++i)
        adj[K[i]].push_back(i);
        
    vector<vector<int>> dp(n, vector<int>(m, -1));
        
    int ret = INT_MAX;
    
    for (int u : adj[S[0]])
        ret = min(ret, dfs(S, 1, u, adj, dp));
    
    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N, M;
	    
	    cin >> N;
	    
	    vector<int> S(N);
	    
	    for (int j = 0; j < N; ++j)
	        cin >> S[j];
	        
	    cin >> M;
	    
	    vector<int> K(M);
	    
	    for (int j = 0; j < M; ++j)
	        cin >> K[j];

		cout << "Case #" << i << ": ";
		cout << touchbartyping(S, K) << endl;
	}

	return 0;
}