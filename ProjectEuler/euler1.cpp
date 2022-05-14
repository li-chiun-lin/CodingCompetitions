/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int euler(int n)
{
	int upperbound3 = n / 3 * 3;
	int upperbound5 = n / 5 * 5;
	int upperbound15 = n / 15 * 15;

	int sum3 = (upperbound3 + 3) * (upperbound3 / 3) / 2;
	int sum5 = (upperbound5 + 5) * (upperbound5 / 5) / 2;
	int sum15 = (upperbound15 + 15) * (upperbound15 / 15) / 2;

	return sum3 + sum5 - sum15;
}

int main()
{
	cout << euler(1000) << endl;

	return 0;
}
