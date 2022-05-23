/*
You are given an array A of length N.
You can perform the following operation on the array any number of times:

    Choose any subsequence S of the array A and a positive integer X such that X is a power of 2 and subtract X from all the elements of the subsequence S.

Find the minimum number of operations required to make all the elements of the array equal to 0.
*/

#include <algorithm>
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

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
        int n = 0;
        cin >> n;
        int x;
        int sum = 0;
        int cnt = 0;

        for (int j = 0; j < n; ++j)
        {
            cin >> x;
            sum |= x;
        }

        while (sum)
        {
            cnt += sum & 1;
            sum >>= 1;
        }

        cout << cnt << endl;
	}

	return 0;
}