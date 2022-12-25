/*
20%

Euler's Totient function, φ(n) [sometimes called the phi function], is used to determine the number of positive numbers less than or equal to n which are relatively prime to n. For example, as 1, 2, 4, 5, 7, and 8, are all less than nine and relatively prime to nine, φ(9)=6.
The number 1 is considered to be relatively prime to every positive number, so φ(1)=1.

Interestingly, φ(87109)=79180, and it can be seen that 87109 is a permutation of 79180.

Find the value of n, 1 < n < 107, for which φ(n) is a permutation of n and the ratio n/φ(n) produces a minimum.
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

int euler(int n)
{
	vector<vector<int>> factor(n);
	map<int, vector<int>> prime_power;

	int mi = 0;
	double mr = INT_MAX;

	for (long long i = 2; i < n; ++i)
	{
		if (factor[i].size() == 0)
		{
			prime_power[i].push_back(i - 1);

			for (long long j = i; j < n; j += i)
				factor[j].push_back(i);
		}

		int phi = 1;
		int ii = i;

		for (auto f : factor[i])
		{
			int k = 0;

			while (ii % f == 0)
			{
				ii /= f;
				++ k;
			}

			while (prime_power[f].size() < k)
				prime_power[f].push_back(prime_power[f].back() * f);

			phi *= prime_power[f][k - 1];
		}

		string si = to_string(i);
		string sp = to_string(phi);

		if (si.size() != sp.size())
			continue;

		sort(begin(si), end(si));
		sort(begin(sp), end(sp));

		if (si != sp)
			continue;

		cout << i << " " << phi << "\n";

		double r = (double) i / phi;

		if (mr > r)
		{
			mr = r;
			mi = i;
		}
	}

	return mi;
}

int main()
{
	cout << euler(1e7) << endl;

	return 0;
}
