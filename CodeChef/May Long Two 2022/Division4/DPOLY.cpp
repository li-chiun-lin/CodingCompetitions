/*
In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic expression with non-zero coefficient.

Chef has a polynomial in one variable x with N terms. The polynomial looks like A0⋅x0+A1⋅x1+…+AN−2⋅xN−2+AN−1⋅xN−1 where Ai−1 denotes the coefficient of the ith term xi−1 for all (1≤i≤N).

Find the degree of the polynomial.

Note: It is guaranteed that there exists at least one term with non-zero coefficient.
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
        vector<int> vec(n);

        for (int j = 0; j < n; ++j)
            cin >> vec[j];

        while (vec.size() && vec.back() == 0)
            vec.pop_back();

        cout << vec.size() - 1 << endl;
	}

	return 0;
}