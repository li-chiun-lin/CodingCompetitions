/*
25%

The points P (x1, y1) and Q (x2, y2) are plotted at integer co-ordinates and are joined to the origin, O(0,0), to form ΔOPQ.

There are exactly fourteen triangles containing a right angle that can be formed when each co-ordinate lies between 0 and 2 inclusive; that is,
0 ≤ x1, y1, x2, y2 ≤ 2.

Given that 0 ≤ x1, y1, x2, y2 ≤ 50, how many right triangles can be formed?
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

int euler(int n)
{
	int cnt = 0;

	for (int px = 1; px <= n; ++px)
		for (int py = 1; py <= n; ++py)
		{
			int g = gcd(px, py);
			int dx = px / g;
			int dy = py / g;

			for (int qx = px - dy, qy = py + dx; qx >= 0 && qy <= n; qx -= dy, qy += dx) ++ cnt;
			for (int qx = px + dy, qy = py - dx; qx <= n && qy >= 0; qx += dy, qy -= dx) ++ cnt;
		}

	return cnt + n * n * 3;
}

int main()
{
	cout << euler(50) << "\n";

	return 0;
}
