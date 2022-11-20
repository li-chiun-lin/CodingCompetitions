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

#if 0
bool win(long long C, vector<long long>& P);
bool lose(long long C, vector<long long>& P);
#endif

void print(vector<long long> v)
{
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}

bool isprime(long long N)
{
    for (long long i = 2; i * i <= N; ++i)
        if (N % i == 0)
            return false;

    return true;
}

bool isgnum(long long N)
{
    long long s = 0;

    while (N)
    {
        s += N % 10;
        N /= 10;
    }

    return isprime(s);
}

#if 0
bool lose(long long C, vector<long long>& P)
{
    // if it is a gnumber, this player lose
    if (isgnum(C))
        return true;

    // check for every prime factor of `N', 
    for (auto f : P)
    {
        long long CC = C;

        // if `f' is still a factor of `C;
        if (CC % f == 0)
        {
            // reduce `f' from `C'
            while (CC % f == 0)
                CC /= f;

            // if the next player won't win, 
            // then this player won't lose.
            if (! win(CC, P))
                return false;
        }
    }

    // if, after check all the prime factor of `N', 
    // there is not a single possibility that the next player won't win, 
    // which means the next player surely will win,
    // then this player surely will lose.
    return true;
}
#endif

bool win(long long C, vector<long long>& P)
{
    // if it is a gnumber, this player does not win
    if (isgnum(C))
        return false;

    for (auto f : P)
    {
        long long CC = C;

        if (CC % f == 0)
        {
            while (CC % f == 0)
                CC /= f;

            // if the next player will lose when this player pick this `f',
            // then this player surely should pick this `f'
            // and then ensure the winning.
            if (! win(CC, P))
                return true;
        }
    }

    // if no matter which `f' this player picks,
    // there is not a single chance that the next player will lose,
    // then this player have no chance to win.
    return false;
}

vector<long long> defact(long long N)
{
    vector<long long> factor;

    for (long long i = 2; i * i <= N; ++i)
    {
        if (N % i == 0)
        {
            factor.push_back(i);
            while (N % i == 0)
                N /= i;
        }
    }

    if (N > 1)
        factor.push_back(N);

    return factor;
}

bool gnumbers(long long N)
{
    vector<long long> P = defact(N);
    return win(N, P);
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        long long N;
        cin >> N;

		cout << "Case #" << t << ": ";
		cout << (gnumbers(N) ? "Laurence" : "Seymour") << "\n";
	}

	return 0;
}

