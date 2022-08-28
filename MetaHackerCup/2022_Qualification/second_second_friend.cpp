/*
can not handle the 3000 x 3000 case.
to be continued.
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

void print(vector<string>& G)
{
    for (auto& g : G)
        cout << g << "\n";
}

void print(vector<vector<int>>& v)
{
    cout << "\n";
	for (auto& r : v)
	{
		for (auto& c : r)
            cout << c << " ";
        cout << "\n";
	}
}

void print(int R, int C, vector<vector<char>>& G)
{
    for (int i = 1; i <= R; ++i)
    {
        for (int j = 1; j <= C; ++j)
        {
            if (G[i][j] == '|')
                cout << '^';
            else
                cout << G[i][j];
        }
        cout << "\n";
    }
}



const int d[5] = {0, -1, 0, 1, 0};

int cnt_friends(vector<vector<char>>& G, int i, int j)
{
    int f = 0;

    for (int k = 0; k < 4; ++k)
    {
        int ii = i + d[k];
        int jj = j + d[k + 1];

        if (G[ii][jj] == '^' || G[ii][jj] == '|')
            ++ f;
    }

    return f;
}

void update_friends(int i, int j, int v, vector<vector<int>>& friends)
//void update_friends(int i, int j, int v, int** friends)
{
    for (int k = 0; k < 4; ++k)
    {
        int ii = i + d[k];
        int jj = j + d[k + 1];

        friends[ii][jj] += v;
    }
}

bool dfs(vector<vector<char>>& G, int i, int j, vector<vector<int>>& friends)
//bool dfs(vector<vector<char>>& G, int i, int j, int** friends)
{
    if (friends[i][j] >= 2)
        return true;

    vector<int> new_tree;

    priority_queue<pair<int, int>> pq;

    for (int k = 0; k < 4; ++k)
    {
        int ii = i + d[k];
        int jj = j + d[k + 1];

        if (G[ii][jj] == '.')
            pq.push({friends[ii][jj], k});
    }

    if (friends[i][j] + pq.size() < 2)
        return false;

    while (pq.size() && friends[i][j] < 2)
    {
        int k = pq.top().second;
        int ii = i + d[k];
        int jj = j + d[k + 1];
        pq.pop();

        G[ii][jj] = '|';
        new_tree.push_back(k);

        update_friends(ii, jj, 1, friends);

        if (! dfs(G, ii, jj, friends))
        {
            update_friends(ii, jj, -1, friends);
            G[ii][jj] = '.';
            new_tree.pop_back();
        }
        
    }

    if (friends[i][j] < 2)
    {
        for (int k : new_tree)
        {
            int ii = i + d[k];
            int jj = j + d[k + 1];
            G[ii][jj] = '.';
            update_friends(i, j, -1, friends);
        }

        return false;
    }

    return true;
}

void del_friends(int** friends, int R)
{
    for (int i = 0; i <= R + 1; ++i)
        delete friends[i];

    delete friends;
}

void secondfriend(int R, int C, vector<vector<char>>& G)
{
    vector<vector<int>> friends(R + 2, vector<int>(C + 2));

    //int ** friends = new int*[R + 2];
    //for (int i = 0; i <= R + 1; ++i)
    //    friends[i] = new int[C + 2];

    for (int i = 1; i <= R; ++i)
        for (int j = 1; j <= C; ++j)
        {
            friends[i][j] = cnt_friends(G, i, j);

            if (G[i][j] == '^' && friends[i][j] < 2)
            {
                //vector<int> path;
                if (! dfs(G, i, j, friends))
                {
                    cout << "Impossible\n";
                    
                    //del_friends(friends, R);
                    return ;
                }
                else
                {
                    // update tree
                }
            }
        }

    //print(friends);

    cout << "Possible\n";

    print(R, C, G);

    //del_friends(friends, R);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int R, C;
        cin >> R >> C;

        vector<vector<char>> G(R + 2, vector<char>(C + 2));
    
        char ch;

        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
            {
                cin >> ch;
                G[i + 1][j + 1] = ch;
            }

		cout << "Case #" << t << ": ";
        cout << R << " " << C << " ";
        secondfriend(R, C, G);
	}

	return 0;
}

