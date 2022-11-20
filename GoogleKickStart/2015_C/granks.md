# Problem

There are many great athletes in the world, and it's very hard to say who is the best in the world at a particular sport, especially when different athletes have won different competitions. Here's one possible system for ranking athletes:

1. Determine the number $P$ of finishing places in any competition that will be worth points for athletes, and how many points $S_i$ each of those finishing places is worth.

2. Since not all competitions are equally important, assign a weight $W_i$ to each one. The score gained by an athlete for a competition will be the points from step 1, modified by the weight for that competition.

3. Since we don't want to reward athletes simply for participating in many competitions, we count only the $M$ highest scores received by an athlete across all competitions.

You are given the points per finishing place, the weights of the competitions, and the results of the competitions. Can you rank all of the athletes who appeared in the competitions? If multiple athletes have the same score, they will share the same rank and listed in alphabetical order of their names.
