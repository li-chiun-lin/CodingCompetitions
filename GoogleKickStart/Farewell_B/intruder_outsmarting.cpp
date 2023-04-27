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

//Extended Euclidean Algorithm
pair<long long, long long> egcd(long long a, long long b, long long c)
{
	long long x = 0, y = 1, u = 1, v = 0;
	long long q = 0, r = 0, m = 0, n = 0;

	while (a)
	{
		q = b / a;
		r = b % a;
		m = x - u * q;
		n = y - v * q;
		b = a;
		a = r;
		x = u;
		y = v;
		u = m;
		v = n;
	}

	return {x * (c / b), y * (c / b)};
}

long long safe_mod(long long x, long long m)
{
	return ((x % m) + m) % m;
}

long long intruder(int W, int N, int D, vector<int>& X)
{
	long long ret = 0;
	long long d = gcd(D, N);
	long long Nd = N / d;

	for (int i = 0, j = W - 1; i < j; ++i, --j)
	{
		if ((X[j] - X[i]) % d)
			return -1;

		//   Xi + Dx = Xj (mod N)
		// > Xi + Dx + Ny = Xj
		// > Dx + Ny = Xj - Xi

		//1.  Dx    + Ny = Xj - Xi
		//2.  Dx    - Ny = Xi - Xj
		// > -Dx    + Ny = Xj - Xi
		// >  D(-x) + Ny = Xj - Xi
		auto [x, y] = egcd(D, N, X[j] - X[i]);
		ret += min(safe_mod(x, Nd), safe_mod(-x, Nd));
	}

	return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		int W, N, D;
		cin >> W >> N >> D;

		vector<int> X(W);

		for (auto& x : X)
		{
			cin >> x;
			x -= 1;
		}

		cout << "Case #" << t << ": ";
		auto ret = intruder(W, N, D, X);

		if (ret == -1)
			cout << "IMPOSSIBLE" << "\n";
		else
			cout << ret << "\n";
	}

	return 0;
}

