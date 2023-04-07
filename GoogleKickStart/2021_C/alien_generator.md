# Problem

Astronauts have landed on a new planet, Kickstartos. They have discovered a machine on the planet: a generator that creates gold bars. The generator works as follows. On the first day, an astronaut inputs a positive integer K into the generator. The generator will produce K gold bars that day. The next day, it will produce K+1, the following day, K+2, and so on. Formally, on day i, the generator will produce K+i−1 gold bars.

However, the astronauts also know that there is a limitation to the generator:
if on any day, the generator would end up producing more than G
gold bars in total across all the days, then it will break down on that day and will produce 0 gold bars on that day and thereafter. The astronauts would like to avoid this, so they want to produce exactly G gold bars.

Consider K=2 and G=8. On day 1, the generator would produce 2 gold bars. On day 2, the generator would produce 3 more gold bars making the total gold bars is equal to 5. On day 3, the generator would produce 4 more gold bars which would lead to a total of 9 gold bars. Thus, the generator would break on day 3 before producing 4 gold bars. Hence, the total number of gold bars generated is 5 in this case.

Formally, for a given G , astronauts would like to know how many possible values of K on day 1 would eventually produce exactly G gold bars.
