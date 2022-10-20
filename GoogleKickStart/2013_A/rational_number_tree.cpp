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

pair<unsigned long long, unsigned long long> n_pq(unsigned long long n)
{
    vector<int> bit;

    while (n > 1)
    {
        bit.push_back(n & 1);
        n >>= 1;
    }

    unsigned long long p = 1;
    unsigned long long q = 1;

    while (bit.size())
    {
        if (bit.back())
            p += q;
        else
            q += p;

        bit.pop_back();
    }

    return {p, q};
}

unsigned long long pq_n(unsigned long long p, unsigned long long q)
{
    unsigned long long ret = 0;
    unsigned long long mask = 1;
    
    while (p > 1 || q > 1)
    {
        if (p > q)
        {
            ret |= mask;
            p -= q;
        }
        else
            q -= p;

        mask <<= 1;
    }

    return ret | mask;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int id = 0;
        cin >> id;

        cout << "Case #" << t << ": ";
        
        if (id == 1)
        {
            unsigned long long n;
            cin >> n;

            auto r = n_pq(n);

            cout << r.first << " " << r.second << "\n";
        }
        else 
        {
            unsigned long long p, q;
            cin >> p >> q;

            cout << pq_n(p, q) << "\n";
        }
	}

	return 0;
}

