/*
5%

Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?
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
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int val(const string &name)
{
	int s = 0;

	for (int i = 1; i < name.size() - 1; ++i)
		s += name[i] - 'A' + 1;

	return s;
}

long long euler()
{
	ifstream ifs("p022_names.txt", ifstream::in);
	vector<string> name;
	string tok;

	while (getline(ifs, tok, ','))
		name.push_back(tok);

	ifs.close();

	cout << name.size() << endl;

	sort(begin(name), end(name));

	long long sum = 0;

	for (int i = 0; i < name.size(); ++i)
		sum += val(name[i]) * (i + 1);

	return sum;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
