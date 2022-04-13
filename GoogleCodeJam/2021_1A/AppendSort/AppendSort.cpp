#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>

using namespace std;

int appendsort(vector<string> x)
{
	int c = 0;

	for (int i = 1; i < x.size(); ++i)
	{
		string &prv = x[i - 1];
		string &cur = x[i];

		// case 1
		if (prv.size() < cur.size())
		{
			// okay
		}
		// case 2
		else if (prv.size() == cur.size())
		{
			if (prv >= cur)
			{
				cur.push_back('0');
				++c;
			}
		}
		// case 3: prv.size() > cur.size()
		else 
		{
			int j = 0;

			while (j < cur.size() && prv[j] == cur[j])
				++j;

			// case 3-1: cur is a prefix of prv
			if (j == cur.size())
			{
				bool flag = true;
				for (int k = j; k < prv.size() && flag; ++k)
					flag &= prv[k] == '9';

				if (flag)
				{
					while (cur.size() <= prv.size())
					{
						cur.push_back('0');
						++c;
					}
				}
				else
				{
					//++j;
					while (j < prv.size())
					{
						cur.push_back(prv[j]);
						++c;
						++j;
					}

					int k = cur.size() - 1;

					while (cur[k] == '9')
						cur[k --] = '0';

					cur[k] += 1;
				}
			}
			// case 3-2: prv and cur differ at position j
			else
			{
				while (cur.size() < prv.size())
				{
					cur.push_back('0');
					++c;
				}

				// case 3-2-1: prv[j] > cur[j]
				if (prv[j] > cur[j])
				{
					cur.push_back('0');
					++c;
				}
				// case 3-2-2: prv[j] < cur[j]
				else
				{
					
				}
			}
		}
	}

	return c;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int N;
		cin >> N;

		vector<string> vec(N);

		for (int j = 0; j < N; ++j)
			cin >> vec[j];

		cout << "Case #" << i << ": ";
		cout << appendsort(vec) << endl;
	}

	return 0;
}