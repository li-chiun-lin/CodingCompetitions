/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
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

void print(vector<int> &v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

void pow2(vector<int> &a)
{
	int c = 0;

	for (int &x : a)
	{
		x = x * 2 + c;
		c = x / 10;
		x %= 10;
	}

	if (c)
		a.push_back(c);

	//print(a);
}

int euler(int n)
{
	vector<int> a = {1};

	while (n --)
		pow2(a);

	return accumulate(begin(a), end(a), 0);
}

int main()
{
	cout << euler(10) << endl;
	cout << euler(100) << endl;
	cout << euler(1000) << endl;

	return 0;
}
