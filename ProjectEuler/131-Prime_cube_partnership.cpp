/*
40%

There are some prime values, p, for which there exists a positive integer, n, such that the expression n^3 + n^2 × p is a perfect cube.

For example, when p = 19, 8^3 + 8^2 × 19 = 12^3.

What is perhaps most surprising is that for each prime with this property the value of n is unique, and there are only four such primes below one-hundred.

How many primes below one million have this remarkable property?
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

bool is_prime(int x)
{
	if (x < 2)
		return false;

	for (int i = 2; i * i <= x; ++i)
		if (x % i == 0)
			return false;

	return true;
}

int euler(long long ub)
{
	int prv = 1;
	int cur = 0;
	int x = 0;
	int cnt = 0;

	for (int i = 2; ; ++i)
	{
		cur = i * i * i;
		x = cur - prv;

		if (x >= ub)
			break;
		
		if (is_prime(x))
		{
			++ cnt;

			//cout << cnt << "\t" << prv << "\t" << cur << "\t" << x << "\n";
		}

		prv = cur;
	}

	return cnt;
}

int main()
{
	cout << euler(100) << "\n";
	cout << euler(1e4) << "\n";
	cout << euler(1e6) << "\n";

	return 0;
}
