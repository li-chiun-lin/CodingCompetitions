#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cmath>

using namespace std;

string double_or_one_thing(string s)
{
	string ret = "";
	int i = 0;

	while (i < s.size())
	{
		int j = i + 1;

		while (j < s.size() && s[i] == s[j])
			++ j;

		//cout << i << j << " " << s[i] << " " << s[j] << endl;

		if (j < s.size() && s[i] < s[j])
		{
			while (i < j)
			{
				ret.push_back(s[i]);
				ret.push_back(s[i ++]);
			}
		}
		else 
		{
			while (i < j)
				ret.push_back(s[i ++]);
		}
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		string S;
		cin >> S;

		cout << "Case #" << i << ": ";
		cout << double_or_one_thing(S) << endl;
	}

	return 0;
}