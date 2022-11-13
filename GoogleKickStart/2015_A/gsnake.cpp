/*

*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool move(int R, int C, set<pair<int, int>>& food, set<pair<int, int>>& body, list<pair<int, int>>& snake, int dir)
{
    int d[] = {0, 1, 0, -1, 0};
    // the next position
    int x = (snake.front().first + d[dir]) % R;
    int y = (snake.front().second + d[dir + 1]) % C;
    pair<int, int> p = {x, y};

    // hit body
    if (body.count(p))
    {
        return true;
    }
    // eat food
    else if ((x + y) % 2 && food.count(p) == 0)
    {
        food.insert(p);

        // grow
        body.insert(p);
        snake.push_front(p);
    }
    // empty cell
    else
    {
        // shrink
        body.erase(snake.back());
        snake.pop_back();

        // advance
        body.insert(p);
        snake.push_front(p);
    }

    return false;
}


int gsnake(int S, int R, int C, vector<pair<int, char>>& A)
{
    set<pair<int, int>> food;
    set<pair<int, int>> body;

    // snake
    list<pair<int, int>> snake;
    snake.push_front({0, 0});
    body.insert({0, 0});
    int dir = 0;

    // direction of each second
    int T = A.back().first;
    vector<int> t(T + 1);

    for (auto& a : A)
        t[a.first] = a.second == 'R' ? 1 : -1;

    for (int i = 0; i <= T; ++i)
    {
        dir = (dir + t[i] + 4) % 4;

        if (move(R, C, food, body, snake, dir))
            return snake.size();
    }

    // the snake might keep lingering and eat more food without direction.
    if (dir % 2)
    {
        for (int i = 0; i < R; ++i)
            if (move(R, C, food, body, snake, dir))
                return snake.size();
    }
    else
    {
        for (int j = 0; j < C; ++j)
            if (move(R, C, food, body, snake, dir))
                return snake.size();
    }

    return snake.size();
}

int main()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t)
	{
        int S, R, C;
        cin >> S >> R >> C;

        vector<pair<int, char>> A(S);

        for (auto& a : A)
            cin >> a.first >> a.second;

		cout << "Case #" << t << ": ";
		cout << gsnake(S, R, C, A) << "\n";
	}

	return 0;
}

