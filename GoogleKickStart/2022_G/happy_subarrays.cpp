/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

long long happy(vector<int>& A)
{
    int N = A.size();
    long long ret = 0;


    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<int> A(N);

        for (auto& a : A)
            cin >> a;

		cout << "Case #" << t << ": ";
		cout << happy(A) << "\n";
	}

	return 0;
}

