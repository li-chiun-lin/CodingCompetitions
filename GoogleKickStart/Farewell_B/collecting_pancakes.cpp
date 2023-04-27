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

long long collecting_A(int N, vector<long long>& prefix, int La, int Ra, int Lb, int Rb, int Xa)
{
	if (Xa <= Lb)
	{
		int Xb = Xa == Lb ? Lb + 1 : Lb;
		return prefix[(Xa + Xb) / 2 + 1];
	}
	else if (Rb <= Xa)
	{
		int Xb = Rb == Xa ? Rb - 1 : Rb;
		return prefix[N] - prefix[(Xa + Xb + 1) / 2];
	}
	else
	{
		return min(prefix[Xa + 1], prefix[N] - prefix[Xa]);
	}
}

long long collecting(int N, vector<int>& A, int La, int Ra, int Lb, int Rb)
{
	vector<long long> prefix(N + 1);

	for (int i = 0; i < N; ++i)
		prefix[i + 1] = prefix[i] + A[i];

	long long ret = 0;

	for (int Xa = La; Xa <= Ra; ++Xa)
	{
		long long v = collecting_A(N, prefix, La, Ra, Lb, Rb, Xa);
		ret = max(ret, v);
	}

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

		int La, Ra, Lb, Rb;
		cin >> La >> Ra >> Lb >> Rb;

		cout << "Case #" << t << ": ";
		cout << collecting(N, A, La - 1, Ra - 1, Lb - 1, Rb - 1) << "\n";
	}

	return 0;
}

