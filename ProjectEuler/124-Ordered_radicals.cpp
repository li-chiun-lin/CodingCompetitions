/*
25%

The radical of n, rad(n), is the product of the distinct prime factors of n. For example, 504 = 2^3 × 3^2 × 7, so rad(504) = 2 × 3 × 7 = 42.

If we calculate rad(n) for 1 ≤ n ≤ 10, then sort them on rad(n), and sorting on n if the radical values are equal, we get:

	Unsorted 	  	Sorted
	n 	rad(n) 	  	n 	rad(n) 	k
	1	1 	  		1	1		1
	2	2 	  		2	2		2
	3	3 	  		4	2		3
	4	2 	  		8	2		4
	5	5 	  		3	3		5
	6	6 	  		9	3		6
	7	7 	  		5	5		7
	8	2 	  		6	6		8
	9	3 	  		7	7		9
	10	10 	  		10	10		10

Let E(k) be the k-th element in the sorted n column; for example, E(4) = 8 and E(6) = 9.

If rad(n) is sorted for 1 ≤ n ≤ 100000, find E(10000).
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

long long rad(vector<int>& prime, int n)
{
	long long r = 1;

	for (auto p : prime)
	{
		if (n < p)
			break;

		if (n % p)
			continue;

		r *= p;

		while (n % p == 0)
			n /= p;
	}

	return r;
}

int euler()
{
	int m = 1e6;
	vector<bool> sieve(m, true);
	vector<int> prime;

	for (long long i = 2; i < m; ++i)
		if (sieve[i])
		{
			prime.push_back(i);

			for (long long j = i * i; j < m; j += i)
				sieve[j] = false;
		}

	vector<pair<long long, int>> vec;

	for (int i = 1; i <= 1e5; ++i)
		vec.push_back({rad(prime, i), i});

	sort(begin(vec), end(vec));

	return vec[9999].second;
}

int main()
{
	cout << euler() << "\n";

	return 0;
}
