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

string ignore_comment(string& text)
{
    string str = "";
    stack<int> sta;
    int n = text.size();

    for (int i = 0; i < n; ++i)
    {
        if (i < n - 1 
            && text[i] == '/' && text[i + 1] == '*')
        {
            sta.push(str.size());
            // include the "/*" in case it is not in a comment.
            str.push_back(text[i ++]);
            str.push_back(text[i]);
        }
        else if (i < n - 1 
            && text[i] == '*' && text[i + 1] == '/' 
            && sta.size())
        {
            while (str.size() > sta.top())
                str.pop_back();

            sta.pop();
            ++ i;
        }
        else
            str.push_back(text[i]);
    }

    return str;
}

int main()
{
	string text = "";
    getline(cin, text, '\0');

    cout << "Case #1:\n";
    cout << ignore_comment(text);

	return 0;
}

