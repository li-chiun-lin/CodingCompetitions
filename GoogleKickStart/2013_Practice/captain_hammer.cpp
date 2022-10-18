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

double hammer(double V, double D)
{
    double t = (9.8 * D) / (V * V);

    if (t < -1 || 1 < t)
        return 45;
    
    return asin(t) / 2.0 * 180.0 / 3.14159;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int V, D;
        cin >> V >> D;

		cout << "Case #" << t << ": ";
		cout << fixed << setprecision(9) << hammer(V, D) << "\n";
	}

	return 0;
}

