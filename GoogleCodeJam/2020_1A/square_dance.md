# Problem

You are organizing an international dancing competition. You have already obtained all of the following:

- A dance floor with R rows and C columns, consisting of unit square cells;
- R × C competitors;
- A cutting-edge automated judge for the competition.

But you are still missing an audience! You are worried that the competition might not be interesting enough, so you have come up with a way to calculate the interest level for the competition.

Each competitor occupies one square unit cell of the floor and stays there until they are eliminated. A compass neighbor of a competitor x is another competitor y chosen such that y shares a row or column with x, and there are no competitors still standing in cells in between x and y. Each competitor may have between 0 and 4 compass neighbors, inclusive, and the number may decrease if all the other competitors in one orthogonal direction are eliminated.

The competition runs one round at a time. In between rounds i and i+1, if a competitor d had at least one compass neighbor during round i, and d's skill level is strictly less than the average skill level of all of d's compass neighbors, d is eliminated and is not part of the competition for rounds i+1, i+2, i+3, etc. Notice that d still counts as a neighbor of their other compass neighbors for the purpose of other eliminations that may also happen between rounds i and i+1. Competitors that do not have any compass neighbors are never eliminated. If after a round no competitor is eliminated, then the competition ends.

The interest level of a round is the sum of skill levels of the competitors dancing in that round (even any competitors that are to be eliminated between that round and the next). The interest level of the competition is the sum of the interest levels of all of the rounds.

Given the skill levels of the dancers that are on the floor for the first round, what is the interest level of the competition?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing two integers R and C. Then, there are R more lines containing C integers each. The j-th value on the i-th of these lines, Si, j, represents the skill level of the dancer in the cell in the i-th row and j-th column of the floor.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the interest level of the competition.
