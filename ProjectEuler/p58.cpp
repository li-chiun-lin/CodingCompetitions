/*
Starting with 1 and spiralling anticlockwise in the following way, a square spiral with side length 7 is formed.

	37 36 35 34 33 32 31
	38 17 16 15 14 13 30
	39 18  5  4  3 12 29
	40 19  6  1  2 11 28
	41 20  7  8  9 10 27
	42 21 22 23 24 25 26
	43 44 45 46 47 48 49

It is interesting to note that the odd squares lie along the bottom right diagonal, but what is more interesting is that 8 out of the 13 numbers lying along both diagonals are prime; that is, a ratio of 8/13 ≈ 62%.
If one complete new layer is wrapped around the spiral above, a square spiral with side length 9 will be formed. If this process is continued, what is the side length of the square spiral for which the ratio of primes along both diagonals first falls below 10%?
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

bool isPrime(long long x)
{
	if (x % 2 == 0)
		return false;

		for (long long i = 3; i * i <= x; i += 2)
			if (x % i == 0)
				return false;

		return true;
}

long long euler(long long n)
{
	long long val = 2;
	double cntp = 0;
	double total = 1;
	long long stride = 1;

	do
	{
		val += stride ++;
		cntp += isPrime(val);

		val += stride;
		cntp += isPrime(val);

		val += stride ++;
		cntp += isPrime(val);

		val += stride;
		cntp += isPrime(val);

		total += 4;
	} while (cntp * 10 >= total);

	return stride;
}

int main()
{
	cout << euler(1000) << endl;

	return 0;
}
