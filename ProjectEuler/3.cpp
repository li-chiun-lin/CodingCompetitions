/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <queue>

using namespace std;

int euler(long long n)
{
	int root = sqrt(n);
	vector<bool> sieve(root + 1, true);
	set<int> prime;

	for (long long p = 2; p < root; ++p)
	{
		if (sieve[p])
		{
			for (long long i = p * p; i < root; i += p)
				sieve[i] = false;

			prime.insert(p);
		}
	}

	for (auto it = prime.rbegin(); it != prime.rend(); ++it)
		if (n % (*it) == 0)
			return *it;
	
	return 1;
}

int main()
{
	cout << euler(600851475143) << endl;

	return 0;
}
