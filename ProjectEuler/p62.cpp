/*
The cube, 41063625 (345<sup>3</sup>), can be permuted to produce two other cubes: 56623104 (384<sup>3</sup>) and 66430125 (405<sup>3</sup>). In fact, 41063625 is the smallest cube which has exactly three permutations of its digits which are also cube.

Find the smallest cube for which exactly five permutations of its digits are cube.
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

string euler()
{
	map<string, vector<string>> hit;
	unsigned long long i = 2;

	while (i > 0)
	{
		string s = to_string((unsigned long long)pow(i, 3));
		string t = s;
		sort(begin(s), end(s));

		cout << i << " : " << t << " " << s << " " << hit[s].size() << endl;

		hit[s].push_back(t);

		if (hit[s].size() == 5)
			return hit[s].front();

		++ i;
	}

	return "";
}

int main()
{
	cout << euler() << endl;

	return 0;
}
