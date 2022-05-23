/*
Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.

Our Chef took the above advice very seriously and decided to set a target for himself.

    Chef decides to solve at least 10 problems every week for 4 weeks.

Given the number of problems he actually solved in each week over 4
weeks as P1,P2,P3, and P4, output the number of weeks in which Chef met his target.
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