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

vector<string> digit = 
{
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine" 
};

vector<string> freq = 
{
    "",
    "",
    "double ",
    "triple ",
    "quadruple ",
    "quintuple ",
    "sextuple ",
    "septuple ",
    "octuple ",
    "nonuple ",
    "decuple ",
};

string read_phone(string& N, string& F)
{
    unsigned long long seg = 0;
    string ret = "";
    int i = 0;

    F.push_back('-');

    for (char c : F)
    {
        if (c != '-')
        {
            seg *= 10;
            seg += c - '0';

            continue;
        }
        
        int len = 1;
        char run = N[i ++];

        

        while (-- seg)
        {
            if (N[i] == run)
            {  
                ++ len;
            }
            else
            {
                if (len > 10)
                {
                    while (len --)
                        ret += digit[N[i - 2 - len] - '0'] + " ";
                }
                else
                    ret += freq[len] + digit[run - '0'] + " ";

                len = 1;
                run = N[i];
            }

            ++ i;
        }

        if (len > 10)
        {
            while (len --)
                ret += digit[N[N.size() - 2 - len] - '0'] + " ";
        }
        else
            ret += freq[len] + digit[run - '0'] + " ";
    }

    while (ret.size() && ret.back() == ' ')
        ret.pop_back();

    return ret;
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        string N = "";
        string F = "";

        cin >> N >> F;

		cout << "Case #" << t << ": ";
		cout << read_phone(N, F) << "\n";
	}

	return 0;
}

