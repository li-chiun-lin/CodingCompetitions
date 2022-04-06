#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

/*
sample input
4
4
6 10 12 8
6
5 4 5 4 4 4
10
10 10 7 6 7 4 4 5 7 4
1
10

sample output
Case #1: 4
Case #2: 5
Case #3: 9
Case #4: 1
*/

int straight(vector<int> ds)
{
	sort(ds.begin(), ds.end());

	int s = 0;

	for (int i = 0; i < ds.size(); ++i)
		if (ds[i] > s)
			++s;

	return s;
}

int main()
{
	int T;

	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int N;
		cin >> N;

		vector<int> vec(N);

		for (int j = 0; j < N; ++j)
			cin >> vec[j];

		cout << "Case #" << i << ": ";
		cout << straight(vec) << endl;
	}

	return 0;
}