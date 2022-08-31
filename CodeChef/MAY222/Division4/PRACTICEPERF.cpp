/*

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
    int cnt = 0;
    int p = 0;

    for (int j = 0; j < 4; ++j)
    {
        cin >> p;
        
        cnt += p >= 10;
    }

    cout << cnt << endl;
	
	return 0;
}