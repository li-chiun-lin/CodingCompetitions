/*
20%

The smallest number expressible as the sum of a prime square, prime cube, and prime fourth power is 28. In fact, there are exactly four numbers below fifty that can be expressed in such a way:

28 = 2^2 + 2^3 + 2^4
33 = 3^2 + 2^3 + 2^4
49 = 5^2 + 2^3 + 2^4
47 = 2^2 + 3^3 + 2^4

How many numbers below fifty million can be expressed as the sum of a prime square, prime cube, and prime fourth power?
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
	vector<int> square, cube, fourth;
	vector<bool> sieve(n, true);
	set<int> cnt;

	for (long long i = 2; i * i < n; ++i)
		if (sieve[i])
		{
			for (long long j = i * i; j < n; j += i)
				sieve[j] = false;

			square.push_back(i * i);
			cube.push_back(square.back() * i);
			fourth.push_back(cube.back() * i);
		}

	for (auto f : fourth)
	{
		if (f >= n)
			break;

		for (auto c : cube)
		{
			if (f + c >= n)
				break;

			for (auto s : square)
			{
				if (f + c + s >= n)
					break;

				cnt.insert(f + c + s);
			}
		}
	}

	return cnt.size();
}

int main()
{
	cout << euler(50) << "\n";
	cout << euler(5e7) << "\n";

	return 0;
}
