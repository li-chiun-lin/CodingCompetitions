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

bool isPal(string& s, int l, int r)
{
    while (l < r)
        if (s[l ++] != s[r --])
            return false;
    
    return true;
}

string matchingpalindrome(string P)
{
    for (int r = 0; r < P.size(); ++r)
    {
        if (P.size() % (r + 1))
            continue;

        if (isPal(P, 0, r) 
            && isPal(P, r + 1, P.size() - 1))
            return P.substr(0, r + 1);
    }
    
    return "-1";
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N;
	    string P;
	    cin >> N >> P;

		cout << "Case #" << i << ": ";
		cout << matchingpalindrome(P) << endl;
	}

	return 0;
}