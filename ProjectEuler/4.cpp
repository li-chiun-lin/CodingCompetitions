/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <queue>

using namespace std;

int euler()
{
	long long n = 1000000;
	vector<bool> sieve(n, true);
	int ret = 0;

	for (long long p = 2; p < n; ++p)
		if (sieve[p])
			for (long long i = p * p; i < n; i += p)
				sieve[i] = false;


	// even-length palindrome
	// pal1 is the right half part
	for (int p = 997; p >= 100; --p)
	{
		int pal = p;
		int p_left = p;

		// append the left half part
		while (p_left)
		{
			pal *= 10;
			pal += p_left % 10;
			p_left /= 10;
		}
		
		//cout << p << " " << pal << " " << sieve[pal] << endl;

		if (! sieve[pal])
		{
			int rt = sqrt(pal);

			for (int i = rt; 100 <= i && i < 1000; --i)
			{
				if (pal % i == 0)
				{
					int j = pal / i;

					//cout << i << " " << j << endl;
					
					if (100 <= j && j < 1000)
						return pal;
				}
			}
		}
	}

	// odd-length palindrome
	for (int p = 997; p >= 100; --p)
	{
		int pal = p;
		int p_left = p / 10;

		while (p_left)
		{
			pal *= 10;
			pal += p_left % 10;
			p_left /= 10;
		}

		if (! sieve[pal])
		{
			int rt = sqrt(pal);

			for (int i = rt; 100 <= i && i < 1000; --i)
			{
				if (pal % i == 0)
				{
					int j = pal / i;

					if (100 <= j && j < 1000)
						return pal;
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
