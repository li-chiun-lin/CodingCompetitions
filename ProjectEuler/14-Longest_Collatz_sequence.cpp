/*
5%

The following iterative sequence is defined for the set of positive integers:

	n → n/2 (n is even)
	n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

	13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <queue>
#include <algorithm>
#include <numeric>

using namespace std;

int euler(int n)
{
	map<long long, set<long long>> adj;
	queue<long long> que;
	long long u, v;

	// from all possible source
	for (long long i = 2; i < n; ++i)
		que.push(i);

	// build adjacent list reversely
	while (que.size())
	{
		u = que.front();
		que.pop();

		if (u < 2)
			continue;

		if (u % 2)
			v = 3 * u + 1;
		else
			v = u / 2;

		if (adj[v].count(u) == 0)
		{
			adj[v].insert(u);
			que.push(v);
		}
	}

	// BFS start from 1 try to reach every possible source
	map<long long, int> dst;
	que.push(1);
	int s = 0;
	int c = 0;

	while (s = que.size())
	{
		++ c;

		while (s --)
		{
			long long u = que.front();
			que.pop();

			dst[u] = c;

			for (long long v : adj[u])
				que.push(v);
		}
	}


	// find the maximium
	long long idx = 0;

	for (long long i = 2; i < n; ++i)
	{
		if (dst[idx] < dst[i])
		{
			cout << i << "_" << dst[i] << " ";
			idx = i;
		}
	}

	return idx;



	
}

int main()
{
	//cout << euler(13) << endl;
	//cout << euler(14) << endl;
	//cout << euler(20) << endl;
	cout << euler(1000000) << endl;

	return 0;
}
