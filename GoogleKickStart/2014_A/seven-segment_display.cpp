/*
to be continued.
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

#if 0
vector<string> format = 
{
    "1111110",
    "0110000",
    "1101101",
    "1111001",
    "0110011",
    "1011011",
    "1011111",
    "1110000",
    "1111111",
    "1111011"
};
#endif

vector<int> format = 
{
    0x7e,   //"0 111 1110",
    0x30,   //"0 011 0000",
    0x6d,   //"0 110 1101",
    0x79,   //"0 111 1001",
    0x33,   //"0 011 0011",
    0x5b,   //"0 101 1011",
    0x5f,   //"0 101 1111",
    0x70,   //"0 111 0000",
    0x7f,   //"0 111 1111",
    0x7b,   //"0 111 1011"
};

int bin(string& s)
{
    int ret = 0;

    for (char c : s)
        ret = (ret << 1) | (c - '0');

    return ret;
}

string seven(vector<string>& S)
{
    int N = S.size();
    int limit = 1 << 7;
    vector<int> state(N);

    // convert to binary representation
    for (int i = 0; i < N; ++i)
        state[i] = bin(S[i]);

    set<int> candidate;

    // check every possible leading digit
    for (int h = 9; h >= 0; --h)
    {
        // check every combination of broken LED
        for (int mask = 0; mask < limit; ++mask)
        {
            bool valid = true;
            int digit = h;

            // for every state
            for (int i = 0; i < N && valid; ++i)
            {
                // check if it is valid with the current broken LED combination.
                if (state[i] != (format[digit] & mask))
                    valid = false;

                // count down
                digit = (digit - 1 + 10) % 10;
            }

            if (valid)
            {
                //record the possible next digit
                candidate.insert(format[digit] & mask);
            }
        }
    }

    // if there are more than one candidate, ambiguous
    if (candidate.size() == 1)
    {
        string ret = "";
        int r = *begin(candidate);
        int b = 1 << 6;

        while (b)
        {
            ret.push_back((r & b) ? '1' : '0');
            b >>= 1;
        }

        return ret;
    }

    return "ERROR!";
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int N;
        cin >> N;

        vector<string> S(N);

        for (auto& s : S)
            cin >> s;

		cout << "Case #" << t << ": ";
		cout << seven(S) << "\n";
	}

	return 0;
}

