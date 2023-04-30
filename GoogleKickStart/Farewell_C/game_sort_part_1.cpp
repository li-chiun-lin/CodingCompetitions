/*

*/

#define _USE_MATH_DEFINES

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool sort1(int P, vector<string>& S)
{
	string pre = "";

	for (int i = 0; i < P; ++i)
	{
		vector<int> hist(26);

		for (auto c : S[i])
			++ hist[c - 'A'];

		string cur = "";

		while (cur.size() < pre.size())
		{
			int j = cur.size();
			char c = pre[j];

			// longest common prefix
			if (hist[c - 'A'])
			{
				-- hist[c - 'A'];
				cur.push_back(c);
			}
			else
			{
				// try to find a larger char
				bool flag = true;

				for (int k = c - 'A' + 1; k < 26 && flag; ++k)
				{
					if (hist[k])
					{
						-- hist[k];
						cur.push_back(k + 'A');
						flag = false;
					}
				}

				if (flag)
				{
					// no larger char...
					// what should I do now?
					// I need to backtrack one or more chars to check other possibilities.

					while (cur.size())
					{
						// try to find a larger char than the last char.
						char last = cur.back();
						bool flag = true;

						for (int k = last - 'A' + 1; k < 26 && flag; ++k)
						{
							if (hist[k])
							{
								-- hist[k];
								++ hist[last - 'A'];
								cur.back() = k + 'A';
								flag = false;
							}
						}

						// backtracking if still not found a larger char
						if (flag)
						{
							++ hist[last - 'A'];
							cur.pop_back();
						}
						else
						{
							// found, good.
							break;
						}
					}

					// can no longer backtracking, fail.
					if (cur.empty())
						return false;
					// we have found a larger char, we can leave the outer loop.
					else
						break;
				}
				// found a larger char, good, leave the loop.
				else
					break;
			}
		}

		//append the rest of the characters in sorted order
		for (int k = 0; k < 26; ++k)
			cur += string(hist[k], k + 'A');

		pre = S[i] = cur;
	}

	return true;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int P;
		cin >> P;

		vector<string> S(P);

		for (auto& s : S)
			cin >> s;

		cout << "Case #" << t << ": ";

		if (sort1(P, S))
		{
			cout << "POSSIBLE\n";
			cout << S[0];

			for (int i = 1; i < P; ++i)
				cout << " " << S[i];
			cout << "\n";
		}
		else
		{
			cout << "IMPOSSIBLE\n";
		}
	}

	return 0;
}

