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

string dec_str(string& enc)
{
	int n = enc.size();

	if (n % 2)
		return "AMBIGUOUS";

	string dec(n, 0);

	for (auto& e : enc)
		e -= 'A';

	dec[1] = enc[0];

	for (int i = 2; i + 1 < n; i += 2)
		dec[i + 1] = (enc[i] - dec[i - 1] + 26) % 26;

	dec[n - 2] = enc[n - 1];

	for (int i = n - 3; i - 1 >= 0; i -= 2)
		dec[i - 1] = (enc[i] - dec[i + 1] + 26) % 26;

	for (auto& d : dec)
		d += 'A';

	return dec;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
		string W;
		cin >> W;

		cout << "Case #" << t << ": ";
		cout << dec_str(W) << "\n";
	}

	return 0;
}

