/*
In the card game poker, a hand consists of five cards and are ranked, from lowest to highest, in the following way:

    High Card      : Highest value card.
    One Pair       : Two cards of the same value.
    Two Pairs      : Two different pairs.
    Three of a Kind: Three cards of the same value.
    Straight       : All cards are consecutive values.
    Flush          : All cards of the same suit.
    Full House     : Three of a kind and a pair.
    Four of a Kind : Four cards of the same value.
    Straight Flush : All cards are consecutive values of same suit.
    Royal Flush    : Ten, Jack, Queen, King, Ace, in same suit.

The cards are valued in the order:

	2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace.

If two players have the same ranked hands then the rank made up of the highest value wins; for example, a pair of eights beats a pair of fives (see example 1 below). But if two ranks tie, for example, both players have a pair of queens, then highest cards in each hand are compared (see example 4 below); if the highest cards tie then the next highest cards are compared, and so on.

Consider the following five hands dealt to two players:

	Hand	| 	Player 1	 		|	Player 2	 		|	Winner
	---------------------------------------------------------------------
	1	 	|	5H 5C 6S 7S KD		|	2C 3S 8S 8D TD		|	Player 2
			|	Pair of Fives		|	Pair of Eights		|
	---------------------------------------------------------------------
	2	 	|	5D 8C 9S JS AC		|	2C 5C 7D 8S QH		|	Player 1
			|	Highest card Ace	|	Highest card Queen	|
	---------------------------------------------------------------------
	3	 	|	2D 9C AS AH AC		|	3D 6D 7D TD QD		|	Player 2
			|	Three Aces			|	Flush with Diamonds	|
	---------------------------------------------------------------------
	4	 	|	4D 6S 9H QH QC		|	3D 6D 7H QD QS		|	Player 1
			|	Pair of Queens		|	Pair of Queens		|
			|	Highest card Nine	|	Highest card Seven	|
	---------------------------------------------------------------------
	5	 	|	2H 2D 4C 4D 4S		|	3C 3D 3S 9S 9D		|	Player 1
			|	Full House			|	Full House			|
			|	With Three Fours	|	with Three Threes	|
	---------------------------------------------------------------------

The file, poker.txt, contains one-thousand random hands dealt to two players. Each line of the file contains ten cards (separated by a single space): the first five are Player 1's cards and the last five are Player 2's cards. You can assume that all hands are valid (no invalid characters or repeated cards), each player's hand is in no specific order, and in each hand there is a clear winner.

How many hands does Player 1 win?
*/

#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <set>
#include <stack>
#include <string>
#include <queue>
#include <vector>

using namespace std;

map<char, int> v_val = {
	{'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, 
	{'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14}, 
};

map<char, int> v_suit = {
	{'S', 4}, {'H', 3}, {'D', 2}, {'C', 1}
};

bool sort_card(string &a, string &b)
{
	return ((v_val[a[0]] << 4) + v_suit[a[1]]) < ((v_val[b[0]] << 4) + v_suit[b[1]]);
}

void print(vector<string> &p)
{
	for (string &s : p)
		cout << s << " ";
	cout << endl;
}

pair<long long, int> evaluate(vector<string> &p)
{
	sort(begin(p), end(p), sort_card);
	//print(p);

	bool isStraight = true;

	for (int i = 1; i < p.size() && isStraight; ++i)
		isStraight = v_val[p[i][0]] == v_val[p[i - 1][0]] + 1;

	map<char, int> same_val;
	map<char, int> same_suit;

	bool isFlush = false;

	for (auto &c : p)
	{
		++same_val[c[0]];

		if (++same_suit[c[1]] == 5)
			isFlush = true;
	}

	char max_val = 0;
	vector<int> cntPair;

	for (auto &h : same_val)
	{
		if (h.second > same_val[max_val])
			max_val = h.first;

		if (h.second == 2)
			cntPair.push_back(h.first);
	}

	bool isFour = same_val[max_val] == 4;
	bool isThree = same_val[max_val] == 3;
	bool isFullHouse = isThree && cntPair.size() == 1;
	bool isStraightFlush = isStraight && isFlush;
	//bool isRoyalFlush = isStraightFlush && p[0][0] == 'T';

	if (isStraightFlush)
		return {(long long)v_val[p.back()[0]] << 32, v_suit[p.back()[1]]};
	else if (isFour)
		return {v_val[max_val] << 28, 0};
	else if (isFullHouse)
		return {v_val[max_val] << 24, 0};
	else if (isFlush)
		return {v_suit[p.back()[1]] << 20, v_suit[p.back()[1]]};
	else if (isStraight)
		return {v_val[p.back()[0]] << 16, v_suit[p.back()[1]]};
	else if (isThree)
		return {v_val[max_val] << 12, 0};
	else if (cntPair.size() == 2)
	{
		int mp1 = v_val[cntPair[0]];
		int mp2 = v_val[cntPair[1]];
		int mp = max(mp1, mp2);
		int ms = 0;

		// this is weird
		for (auto &c : p)
			if (c[0] != cntPair[0] && c[0] != cntPair[1])
				ms = max(ms, v_suit[c[1]]);

		return {mp << 8, ms};
	}
	else if (cntPair.size() == 1)
	{
		int mp = v_val[cntPair[0]];
		int ms = 0;

		// this is even weirder
		for (auto &c : p)
			if (c[0] == cntPair[0])
				ms = max(ms, v_suit[c[1]]);

		return {mp << 4, ms};
	}
	else
		return {v_val[p.back()[0]], v_suit[p.back()[1]]};
}

int euler()
{
	ifstream ifs("p054_poker.txt", ifstream::in);
	int cnt = 0;

	for (int i = 0; i < 1000; ++i)
	{
		vector<string> p1(5), p2(5);

		for (int j = 0; j < 5; ++j)
			ifs >> p1[j];

		for (int j = 0; j < 5; ++j)
			ifs >> p2[j];

		auto [v1, s1] = evaluate(p1);
		auto [v2, s2] = evaluate(p2);

		cnt += v1 > v2 || (v1 == v2 && s1 > s2);
	}

	ifs.close();

	return cnt;
}

int main()
{
	cout << euler() << endl;

	return 0;
}
