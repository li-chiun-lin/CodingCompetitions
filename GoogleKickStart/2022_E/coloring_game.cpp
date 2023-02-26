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

int coloringgame(int n)
{
    if (n % 5)
        return (n / 5) + 1;
    else
        return n / 5;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N;
	    cin >> N;
	    
		cout << "Case #" << i << ": ";
		cout << coloringgame(N) << endl;
	}

	return 0;
}