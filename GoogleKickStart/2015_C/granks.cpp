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
#include <unordered_set>
#include <vector>

using namespace std;

void print(map<string, vector<int>>& scores)
{
    for (auto& [player, score] : scores)
    {
        cout << player << ": ";
        for (auto& s : score)
            cout << s << " ";
        cout << "\n";
    }
}

void print_rank(vector<pair<int, string>> r)
{
    //for (auto& x : r)
    //    cout << x.first << ": " << x.second << "\n";

    int rank = 1;
    int same = 0;
    cout << "1: " << r[0].second << "\n";

    for (int i = 1; i < r.size(); ++i)
    {
        if (r[i].first == r[i - 1].first)
            ++ same;
        else
            same = 0;

        cout << (i + 1 - same) << ": " << r[i].second << "\n";
    }
}

class cmp
{
public:
    bool operator()(pair<int, string>& a, pair<int, string>& b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        
        return a.first > b.first;
    }
};

vector<pair<int, string>> grank(int P, vector<int>& S, int N, vector<int>& W, vector<vector<string>>& athlete, int M)
{
    map<string, vector<int>> scores;
    vector<pair<int, string>> rank;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < P; ++j)
            scores[athlete[i][j]].push_back(S[j] * W[i]);
            
    for (auto& [player, score] : scores)
    {
        sort(begin(score), end(score), greater<>());

        int sum = 0;
        for (int k = 0; k < M && k < score.size(); ++k)
            sum += score[k];

        rank.push_back({sum, player});
    }

    sort(begin(rank), end(rank), cmp());

    return rank;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int P;
        cin >> P;

        vector<int> S(P);

        for (auto& s : S)
            cin >> s;

        int N;
        cin >> N;

        vector<int> W(N);
        vector<vector<string>> athlete(N, vector<string>(P));

        for (int i = 0; i < N; ++i)
        {
            cin >> W[i];

            for (int j = 0; j < P; ++j)
                cin >> athlete[i][j];
        }

        int M;
        cin >> M;

		cout << "Case #" << t << ":\n";
        print_rank(grank(P, S, N, W, athlete, M));
	}

	return 0;
}

