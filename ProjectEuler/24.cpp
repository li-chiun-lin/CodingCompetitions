/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>

using namespace std;

void dfs(int n, vector<bool> &selected, string &buf, vector<string> &ret)
{
	if (n == 0)
	{
		ret.push_back(buf);
		return ;
	}

	for (int i = 0; i < selected.size(); ++i)
	{
		if (! selected[i])
		{
			selected[i] = true;
			buf.push_back(i + '0');
			dfs(n - 1, selected, buf, ret);
			buf.pop_back();
			selected[i] = false;
		}
	}
}

string euler(int n)
{
	vector<string> ret;
	vector<bool> selected(n);
	string buf = "";

	dfs(n, selected, buf, ret);

	cout << ret.size() << endl;

	sort(begin(ret), end(ret));

	return ret[999999];
}

int main()
{
	cout << euler(10) << endl;

	return 0;
}
