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

#if 0
int moist(vector<string>& cards)
{
    int cost = 0;

    priority_queue<string> pq;

    pq.push(cards[0]);
    
    for (int i = 1; i < cards.size(); ++i)
    {
        if (cards[i] < pq.top())
            ++ cost;

        pq.push(cards[i]);
    }

    return cost;
}
#endif

int moist(vector<string>& cards)
{
    int cost = 0;
    string max_str = cards[0];
    
    for (int i = 1; i < cards.size(); ++i)
    {
        if (max_str < cards[i])
            max_str = cards[i];
        else
            ++ cost;
    }

    return cost;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<string> cards(N);
        string nl = "";
        getline(std::cin, nl);

        for (string& c : cards)
            getline(std::cin, c);

		cout << "Case #" << t << ": ";
		cout << moist(cards) << "\n";
	}

	return 0;
}

