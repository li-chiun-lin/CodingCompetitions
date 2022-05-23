/*
You are given a binary string A of length N.
You can perform the following type of operation on the string A:

    Choose two different indices i and j (1≤i,j≤N);
    Change Ai and Aj to Ai⊕Aj. Here ⊕ represents the bitwise XOR operation.

Find the minimum number of operations required to convert the given string into a palindrome.
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
        string bin;
        cin >> bin;
        int cnt = 0;

        int l = 0;
        int r = bin.size() - 1;

        while (l < r)
            cnt += bin[l ++] != bin[r --];

        

        cout << (cnt + 1) / 2 << endl;
	}

	return 0;
}