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

bool isPal(string& s, int r)
{
    int l = 0;
    
    while (l < r)
    {
        if (s[l ++] != s[r --])
            return false;
    }
    
    return true;
}

string matchingpalindrome(string P)
{
    string P2 = P + P;
    int n = P.size();
    
    for (int r = 0; r < n; ++r)
        if (P2[0] == P2[r + n] && isPal(P2, r + n))
            return P2.substr(n, r + 1);
    
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