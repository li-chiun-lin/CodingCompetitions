/*
10%

Euler's Totient function, φ(n) [sometimes called the phi function], is used to determine the number of numbers less than n which are relatively prime to n. For example, as 1, 2, 4, 5, 7, and 8, are all less than nine and relatively prime to nine, φ(9)=6.

n 	Relatively Prime 	φ(n) 	n/φ(n)
2 	1 	1 	2
3 	1,2 	2 	1.5
4 	1,3 	2 	2
5 	1,2,3,4 	4 	1.25
6 	1,5 	2 	3
7 	1,2,3,4,5,6 	6 	1.1666...
8 	1,3,5,7 	4 	2
9 	1,2,4,5,7,8 	6 	1.5
10 	1,3,7,9 	4 	2.5

It can be seen that n=6 produces a maximum n/φ(n) for n ≤ 10.

Find the value of n ≤ 1,000,000 for which n/φ(n) is a maximum.
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
#include <stack>
#include <string>
#include <vector>

using namespace std;

void print(vector<int>& v)
{
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}

int euler(int n)
{
	vector<int> prime;
	vector<bool> sieve(n + 1, true);
	int mi = 0;
	double mv = 0;

	for (long long i = 2; i <= n; ++i)
		if (sieve[i])
		{
			prime.push_back(i);

			for (long long j = i * i; j <= n; j += i)
				sieve[j] = false;
		}

	//print(prime);

	for (int i = 2; i <= n; ++i)
	{
		double v = 1;

		int ii = i;
		for (auto p : prime)
		{
			if (p > ii || ii == 0)
				break;

			if (ii % p == 0)
			{
				v = v * p / (p - 1);

				while (ii % p == 0)
					ii /= p;
			}
		}

		//cout << i << " " << v << "\n";

		if (mv < v)
		{
			mv = v;
			mi = i;
		}
	}

	return mi;
}

int main()
{
	cout << euler(1e6) << endl;

	return 0;
}
