#include <iostream>
#include <string>
#include <vector>

using namespace std;

// when x >= 0 && y >= 0
int cj_pos(int x, int y, string s)
{
	int c = 0;

	for (int i = 1; i < s.size(); ++i)
	{
		if (s[i - 1] == s[i])		// case CC or JJ or ??
		{

		}
		else if (s[i - 1] == '?')	// case ?A => AA
		{

		}
		else if (s[i] == '?')		// case A? => AA 
		{
			s[i] = s[i - 1];
		}
		else						// case AB
		{
			if (s[i - 1] == 'C')
				c += x;
			else
				c += y;
		}
	}

	return c;
}

// when x < 0 or y < 0
// dp[index of current char][the current char is 'C', 'J' or '?'][the next char is 'C', 'J' or '?']
int cj_neg(int x, int y, string &s, int i, vector<vector<vector<int>>>&dp)
{
	// end case
	if (i >= s.size() - 1)
		return 0;

	int j = 0;
	if (s[i] == 'C')
		j = 1;
	else if (s[i] == 'J')
		j = 2;

	int k = 0;
	if (s[i + 1] == 'C')
		k = 1;
	else if (s[i + 1] == 'J')
		k = 2;

	// use memorized result
	if (dp[i][j][k])
		return dp[i][j][k];

	if (s[i] == '?')
	{
		s[i] = 'C';
		int c1 = cj_neg(x, y, s, i, dp);
		s[i] = 'J';
		int c2 = cj_neg(x, y, s, i, dp);
		s[i] = '?';
		
		return dp[i][j][k] = min(c1, c2);
	}
	else if (s[i + 1] == '?')
	{
		s[i + 1] = 'C';
		int c1 = cj_neg(x, y, s, i, dp);
		s[i + 1] = 'J';
		int c2 = cj_neg(x, y, s, i, dp);
		s[i + 1] = '?';

		return dp[i][j][k] = min(c1, c2);
	}
	else if (s[i] == s[i + 1])
	{
		return dp[i][j][k] = cj_neg(x, y, s, i + 1, dp);
	}
	else if (s[i] == 'C')
	{
		return dp[i][j][k] = x + cj_neg(x, y, s, i + 1, dp);
	}
	else if (s[i] == 'J')
	{
		return dp[i][j][k] = y + cj_neg(x, y, s, i + 1, dp);
	}
	else
	{
		//should never happen
		cout << "should never happen" << endl;
		return 0;
	}
}

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int X, Y;
		string S;
		cin >> X >> Y >> S;

		cout << "Case #" << i << ": ";
		if (min(X, Y) < 0)
		{
			vector<vector<vector<int>>> dp(S.size(), vector<vector<int>>(3, vector<int>(3)));

			cout << cj_neg(X, Y, S, 0, dp) << endl;
		}
		else
		{
			cout << cj_pos(X, Y, S) << endl;
		}
	}

	return 0;
}