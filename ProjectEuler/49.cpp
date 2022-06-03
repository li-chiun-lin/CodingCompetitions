/*
5%

The arithmetic sequence, 1487, 4817, 8147, in which each of the terms increases by 3330, is unusual in two ways: (i) each of the three terms are prime, and, (ii) each of the 4-digit numbers are permutations of one another.

There are no arithmetic sequences made up of three 1-, 2-, or 3-digit primes, exhibiting this property, but there is one other 4-digit increasing sequence.

What 12-digit number do you form by concatenating the three terms in this sequence?
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>

using namespace std;

int to_bit(long long pp)
{
	int bit = 0;

	while (pp)
	{
		bit |= 1 << (pp % 10);
		pp /= 10;
	}

	return bit;
}

void print(set<long long> &s)
{
	for (auto x : s)
		cout << x << " ";
	cout << endl;
}

int euler()
{
	long long n = 1e5;
	vector<bool> sieve(n, true);
	map<long long, vector<long long>> hit;

	for (long long i = 2; i < n; ++i)
		if (sieve[i])
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

	for (long long p = 1000; p < 10000; ++p)
		if (sieve[p])
			hit[to_bit(p)].push_back(p);
			
	for (auto &h : hit)
	{
		if (h.second.size() >= 3)
		{
			map<long long, set<long long>> h2;

			for (auto i : h.second)
				for (auto j : h.second)
					if (i > j)
					{
						h2[i - j].insert(i);
						h2[i - j].insert(j);
					}
			
			for (auto &h : h2)
			{
				if (h.second.size() == 3)
				{
					cout << h.first << " = ";
					print(h.second);
				}
			}
		}
	}

	return 0;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
