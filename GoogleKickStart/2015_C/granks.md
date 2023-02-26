# Problem

There are many great athletes in the world, and it's very hard to say who is the best in the world at a particular sport, especially when different athletes have won different competitions. Here's one possible system for ranking athletes:

1. Determine the number $P$ of finishing places in any competition that will be worth points for athletes, and how many points $S_i$ each of those finishing places is worth.

2. Since not all competitions are equally important, assign a weight $W_i$ to each one. The score gained by an athlete for a competition will be the points from step 1, modified by the weight for that competition.

3. Since we don't want to reward athletes simply for participating in many competitions, we count only the $M$ highest scores received by an athlete across all competitions.

You are given the points per finishing place, the weights of the competitions, and the results of the competitions. Can you rank all of the athletes who appeared in the competitions? If multiple athletes have the same score, they will share the same rank and listed in alphabetical order of their names.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow; each test case consists of the following:

1. One line with an integer $P$, the number of top places for which points are awarded.
2. One line consists with $P$ integers representing the scores $S_i$ for the top places, starting with first place and continuing down the places.
3. One line with an integer $N$, the number of competitions.
4. $N$ lines, each of which represents a competition. Each line begins with $W_i$, the weight of this competition, and continues with the $P$ names of the athletes who finished in the top $P$ places. They are listed in descending order starting from first place.
5. One line with an integer $M$, the maximum number of competitions counted toward an athlete's score.
