/*
15%

The number 145 is well known for the property that the sum of the factorial of its digits is equal to 145:

1! + 4! + 5! = 1 + 24 + 120 = 145

Perhaps less well known is 169, in that it produces the longest chain of numbers that link back to 169; it turns out that there are only three such loops that exist:

169 → 363601 → 1454 → 169
871 → 45361 → 871
872 → 45362 → 872

It is not difficult to prove that EVERY starting number will eventually get stuck in a loop. For example,

69 → 363600 → 1454 → 169 → 363601 (→ 1454)
78 → 45360 → 871 → 45361 (→ 871)
540 → 145 (→ 145)

Starting with 69 produces a chain of five non-repeating terms, but the longest non-repeating chain with a starting number below one million is sixty terms.

How many chains, with a starting number below one million, contain exactly sixty non-repeating terms?
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

int digit_fac_sum(int n, vector<int>& fac)
{
	int sum = 0;

	while (n)
	{
		sum += fac[n % 10];
		n /= 10;
	}

	return sum;
}

int euler(int n)
{
	vector<int> fac(10);
	fac[0] = 1;
	
	for (int i = 1; i <= 9; ++i)
		fac[i] = fac[i - 1] * i;

	int cnt = 0;

	for (int i = 3; i < n; ++i)
	{
		set<int> ss;
		int d = i;

		do
		{
			ss.insert(d);
			//cout << d << "->";
			d = digit_fac_sum(d, fac);
		} while (ss.count(d) == 0);

		//cout << "\n";
		//cout << i << ": " << ss.size() << "\n";

		if (ss.size() == 60)
			++ cnt;
		
	}

	return cnt;
}

int main()
{
	cout << euler(100) << "\n";
	cout << euler(1e4) << "\n";
	cout << euler(1e5) << "\n";
	cout << euler(1e6) << "\n";

	return 0;
}
