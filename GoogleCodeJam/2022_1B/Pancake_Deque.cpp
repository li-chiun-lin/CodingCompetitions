#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>


using namespace std;

int pancake_deque(deque<int> dq)
{
	int cnt = 0;
	int bound = 0;

	while (dq.size())
	{
		if (dq.front() < dq.back())
		{
			if (bound <= dq.front())
			{
				bound = dq.front();
				++ cnt;
			}

			dq.pop_front();
		}
		else
		{
			if (bound <= dq.back())
			{
				bound = dq.back();
				++ cnt;
			}

			dq.pop_back();
		}
	}
	
	return cnt;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int N;
		deque<int> dq;
		int x;

		cin >> N;

		while (N --)
		{
			cin >> x;
			dq.push_back(x);
		}

		cout << "Case #" << i << ": ";
		cout << pancake_deque(dq) << endl;
	}

	return 0;
}