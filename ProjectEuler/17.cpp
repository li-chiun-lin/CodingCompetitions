/*
5%

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
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

map<int, string> w = {
	{-1, "and"},
	{0, ""},
	{1, "one"},
	{2, "two"},
	{3, "three"},
	{4, "four"},
	{5, "five"},
	{6, "six"},
	{7, "seven"},
	{8, "eight"},
	{9, "nine"},
	{10, "ten"},
	{11, "eleven"},
	{12, "twelve"},
	{13, "thirteen"},
	{14, "fourteen"},
	{15, "fifteen"},
	{16, "sixteen"},
	{17, "seventeen"},
	{18, "eighteen"},
	{19, "nineteen"}, 
	{20, "twenty"},
	{30, "thirty"},
	{40, "fourty"},
	{50, "fifty"},
	{60, "sixty"},
	{70, "seventy"},
	{80, "eighty"},
	{90, "ninty"},
	{100, "hundred"},
	{1000, "thousand"}
};

int euler(int n)
{
	int cnt = 0;

	for (int i = 1; i <= n; ++i)
	{
		cout << i << " ";

		int x = i;
		if (x >= 1000)
		{
			int q = x / 1000;
			x %= 1000;

			string s = w[q] + w[1000];
			cout << s << endl;
			cnt += s.size();
		}
		
		if (x >= 100)
		{
			int q = x / 100;
			x %= 100;

			string s = w[q] + w[100] + (x ? w[-1] : "");
			cout << s << endl;
			cnt += s.size();
		}

		if (w.find(x) != w.end())
		{
			string s = w[x];
			cout << s << endl;
			cnt += s.size();
		}
		else
		{
			int q = (x / 10) * 10;
			x %= 10;

			string s = w[q] + w[x];
			cout << s << endl;
			cnt += s.size();
		}

		//cout << endl;
		
	}

	return cnt;
}

int main()
{
	cout << euler(1000) << endl;

	return 0;
}
