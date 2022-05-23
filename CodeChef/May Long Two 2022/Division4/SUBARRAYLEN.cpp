/*
You are given an array A of length N.
Determine the count of subarrays of A which contain their length as an element.
Formally, count the number of pairs (L,R) (1≤L≤R≤N) such that: (R−L+1)∈{AL,AL+1,…,AR}.


ETL
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

int subarrays_with_length(vector<int> &vec)
{
    int n = vec.size();
    map<int, set<int>> ss;
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] > n)
            continue;

        for (int j = max(0, i - vec[i] + 1); j <= i && j + vec[i] - 1 < n; ++j)
            ss[vec[i]].insert(j);
        
    }

    for (auto &h : ss)
        cnt += h.second.size();

    return cnt;
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

		cout << subarrays_with_length(vec) << endl;
	}

	return 0;
}