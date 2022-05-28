/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int power(int a, int b, int m)
{
	int ret = 1;

	while (b)
	{
		if (b & 1)
			ret = (ret * a) % m;

		a = (a * a) % m;
		b >>= 1;
	}

	return ret;
}

int euler(int a, int b)
{
	cout << power(2, 10, 10) << endl;

	return 0;
}

int main()
{
	cout << euler(10, 10) << endl;

	return 0;
}
