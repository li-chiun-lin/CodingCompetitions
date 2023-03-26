/*
25%

The palindromic number 595 is interesting because it can be written as the sum of consecutive squares: 6^2 + 7^2 + 8^2 + 9^2 + 10^2 + 11^2 + 12^2.

There are exactly eleven palindromes below one-thousand that can be written as consecutive square sums, and the sum of these palindromes is 4164. Note that 1 = 0^2 + 1^2 has not been included as this problem is concerned with the squares of positive integers.

Find the sum of all the numbers less than 10^8 that are both palindromic and can be written as the sum of consecutive squares.
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

long long palindrome(long long input, bool isOdd)
{
	long long n = input;
	long long r = input;

	if (isOdd)
		n /= 10;

	while (n)
	{
		r = r * 10 + (n % 10);
		n /= 10;
	}

	return r;
}

set<long long> generate_palindrome(int n)
{
	set<long long> palin;
	long long num = 0;
	
	for (int isOdd = 0; isOdd < 2; ++isOdd)
	{
		long long i = 1;

		while ((num = palindrome(i, isOdd)) < n)
		{
			//cout << num << "\n";
			palin.insert(num);
			++ i;
		}
	}

	return palin;
}

long long euler(int n)
{
	auto palin = generate_palindrome(n);
	cout << "palindromic size " << palin.size() << "\n";

	vector<long long> squ = {0};

	for (long long i = 1; i * i < n; ++i)
		squ.push_back(squ.back() + i * i);
	
	cout << "squ size " << squ.size() << "\n";

	int cnt = 0;
	long long sum = 0;
	set<long long> ss;

	for (int i = 0; i < squ.size(); ++i)
		for (int j = i + 2; j < squ.size(); ++j)
		{
			long long s = squ[j] - squ[i];

			if (s > n)
				break;

			if (palin.count(s))
				ss.insert(s);
		}

	cout << ss.size() << "\n";

	for (auto s : ss)
		sum += s;

	return sum;
}

int main()
{
	cout << euler(1e3) << "\n";
	cout << euler(1e8) << "\n";

	return 0;
}
