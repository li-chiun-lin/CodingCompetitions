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
#include <vector>

using namespace std;

void print(pair<int, int> p)
{
    cout << p.first << " " << p.second << "\n";
}

pair<int, int> wigglewalk(int R, int C, int r, int c, string& ins)
{
    vector<vector<bool>> visited(R, vector<bool>(C));
    visited[-- r][-- c] = true;
    int dr = 0;
    int dc = 0;
    
    for (char i : ins)
    {
        if (i == 'N')
        {
            dr = -1;
            dc = 0;
        }
        else if (i == 'S')
        {
            dr = 1;
            dc = 0;
        }
        else if (i == 'E')
        {
            dr = 0;
            dc = 1;
        }
        else
        {
            dr = 0;
            dc = -1;
        }
        
        while (visited[r][c])
        {
            r += dr;
            c += dc;
        }
        
        visited[r][c] = true;
    }
    
    return {r + 1, c + 1};
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
	    int N;
	    int R, C, Sr, Sc;
	    cin >> N >> R >> C >> Sr >> Sc;
	    
	    string ins;
	    cin >> ins;

		cout << "Case #" << i << ": ";
		print(wigglewalk(R, C, Sr, Sc, ins));
	}

	return 0;
}

