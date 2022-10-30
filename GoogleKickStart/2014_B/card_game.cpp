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

void print(vector<int>& v)
{
	for (int x : v)
		cout << x << " ";
	cout << "\n";
}

int game(vector<int>& card, int K)
{
    bool stable = false;

    while (card.size() > 2 && ! stable)
    {
        stable = true;

        for (int i = card.size() - 2; i > 0 && stable; --i)
            if (card[i] - card[i - 1] == K && card[i + 1] - card[i] == K)
            {
                card.erase(begin(card) + i - 1);
                card.erase(begin(card) + i - 1);
                card.erase(begin(card) + i - 1);
                stable = false;
            }
    }

    return card.size();
}

#if 0
int game(vector<int>& card, int K)
{
    while (card.size() > 2)
    {
        vector<int> candidate;

        for (int i = 1; i < card.size() - 1; ++i)
            if (card[i] - card[i - 1] == K && card[i + 1] - card[i] == K)
                candidate.push_back(i - 1);

        if (candidate.empty())
            break;

        card.erase(begin(card) + candidate.back());
        card.erase(begin(card) + candidate.back());
        card.erase(begin(card) + candidate.back());
    }

    return card.size();
}
#endif

#if 0
int game(vector<int>& card, int K)
{
    vector<int> sta;

    for (auto c : card)
    {
        sta.push_back(c);

        while (sta.size() > 2 
            && sta.back() - sta[sta.size() - 2] == K 
            && sta[sta.size() - 2] - sta[sta.size() - 3] == K)
        {
            sta.pop_back();
            sta.pop_back();
            sta.pop_back();
        }
    }

#if 0
    cout << K << "\n";
    print(sta);

    for (int i = 1; i < sta.size(); ++i)
        cout << (sta[i] - sta[i - 1]) << " ";
    cout << "\n";
#endif

    return sta.size();
}
#endif

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N, K;
        cin >> N >> K;
        
        vector<int> card(N);

        for (auto& c : card)
            cin >> c;

		cout << "Case #" << t << ": ";
		cout << game(card, K) << "\n";
	}

	return 0;
}

