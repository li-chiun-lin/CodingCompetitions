/*
45%

Using all of the digits 1 through 9 and concatenating them freely to form decimal integers, different sets can be formed. Interestingly with the set {2,5,47,89,631}, all of the elements belonging to it are prime.

How many distinct sets containing each of the digits one through nine exactly once contain only prime elements?
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int count(int x)
{
	// use bit-set to represent each digit.
	int s = 0;

	while (x)
	{
		int d = x % 10;
		int b = 1 << d;

		// there are duplicate digits
		if (s & b)
			return -1;

		s |= b;
		x /= 10;
	}

	return s;
}

void dfs(vector<int>& prime, int idx, int bit, int& ret)
{
	long long full = (1LL << 10) - 1;

	// check end condition
	if (bit == full)
	{
		++ ret;
		return ;
	}

	for (int i = idx; i < prime.size(); ++i)
	{
		// there are digit collision
		if (prime[i] & bit)
			continue;

		dfs(prime, i + 1, prime[i] | bit, ret);
	}
}

int euler()
{
	int ub = 1e8;
	vector<bool> sieve(ub, true);
	vector<int> prime;

	for (long long i = 2; i < ub; ++i)
		if (sieve[i])
		{
			int s = count(i);

			if (s != -1)
				prime.push_back(s);

			for (long long j = i * i; j < ub; j += i)
				sieve[j] = false;
		}

	int ret = 0;

	// bit-set default to 1, to fill the position of `0' digit, 
	// just for convenient
	dfs(prime, 0, 1, ret);

	return ret;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
