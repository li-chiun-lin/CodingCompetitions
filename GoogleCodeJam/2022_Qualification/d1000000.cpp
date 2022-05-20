#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

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