/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <queue>
#include <algorithm>
#include <numeric>

using namespace std;

int euler(int n)
{
	vector<int> prime = {2, 3, 5, 7, 11, 13, 17}; 
	
	while (prime.size() < n)
	{
		int next = prime.back() + 2;
		bool isPrime = false;

		while (! isPrime)
		{
			isPrime = true;

			for (int i = 0; i < prime.size() && isPrime; ++i)
				if (next % prime[i] == 0)
					isPrime = false;

			if (isPrime)
				prime.push_back(next);
			else
				next += 2;
		} 

		//cout << prime.back() << " ";
	}

	return prime[n - 1];
}

int main()
{
	cout << euler(6) << endl;
	cout << euler(10001) << endl;

	return 0;
}
