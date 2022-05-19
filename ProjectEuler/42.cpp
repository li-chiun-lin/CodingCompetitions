/*
The n-th term of the sequence of triangle numbers is given by, tn = ½n(n+1); so the first ten triangle numbers are:

	1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

By converting each letter in a word to a number corresponding to its alphabetical position and adding these values we form a word value. For example, the word value for SKY is 19 + 11 + 25 = 55 = t10. If the word value is a triangle number then we shall call the word a triangle word.

Using words.txt (right click and 'Save Link/Target As...'), a 16K text file containing nearly two-thousand common English words, how many are triangle words?
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>

using namespace std;

int euler()
{
	ifstream ifs("p042_words.txt", ifstream::in);
	string word;
	int cnt = 0;
	set<int> ss;

	for (int i = 1; i <= 20; ++i)
		ss.insert(i * (i + 1) / 2);

	while (getline(ifs, word, ','))
	{
		int val = 0;

		for (int i = 1; i < word.size() - 1; ++i)
			val += word[i] - 'A' + 1;

		if (ss.count(val))
			++ cnt;
	}

	ifs.close();

	return cnt;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
