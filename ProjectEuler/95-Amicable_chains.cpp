/*
30%

The proper divisors of a number are all the divisors excluding the number itself. For example, the proper divisors of 28 are 1, 2, 4, 7, and 14. As the sum of these divisors is equal to 28, we call it a perfect number.

Interestingly the sum of the proper divisors of 220 is 284 and the sum of the proper divisors of 284 is 220, forming a chain of two numbers. For this reason, 220 and 284 are called an amicable pair.

Perhaps less well known are longer chains. For example, starting with 12496, we form a chain of five numbers:

12496 → 14288 → 15472 → 14536 → 14264 (→ 12496 → ...)

Since this chain returns to its starting point, it is called an amicable chain.

Find the smallest member of the longest amicable chain with no element exceeding one million.
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
		cout << x << " > ";
	cout << "\n";
}

void print(set<int>& v)
{
	for (auto x : v)
		cout << x << " ";
	cout << "\n";
}

int transfor(int x)
{
	long long p = 2;
	int sum = 1;

	while (p * p < x)
	{
		if (x % p == 0)
			sum += p + x / p;

		++ p;
	}

	if (p * p == x)
		sum += p;

	return sum;
}

void test1(int n)
{
	int t = n;

	cout << n << " > ";

	while ((t = transfor(t)) != n)
	{
		cout << t << " > ";
	}

	cout << "\n";
}

int euler(int n)
{
	vector<bool> visited(n);
	int longest = 0;
	int smallest = 0;

	for (int i = 1; i < n; ++i)
	{
		if (visited[i])
			continue;

		set<int> ss;
		vector<int> vec;
		int t = i;

		while (t < n && ss.count(t) == 0 && ! visited[t])
		{
			ss.insert(t);
			vec.push_back(t);
			t = transfor(t);
		}

		for (auto s : ss)
			visited[s] = true;

		if (ss.count(t) == 0)
			continue;

		int len = vec.size();

		for (int j = 0; j < vec.size() && vec[j] != t; ++ j, -- len)
			ss.erase(vec[j]);

		if (longest < ss.size())
		{
			longest = ss.size();
			smallest = *begin(ss);
		}
	}

	return smallest;
}

int main()
{
	//test1(12496);
	//cout << euler(300) << "\n";
	//cout << euler(16000) << "\n";
	cout << euler(1e6) << "\n";

	return 0;
}
