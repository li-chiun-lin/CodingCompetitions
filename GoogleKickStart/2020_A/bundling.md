# Problem

Pip has $N$ strings. Each string consists only of letters from $A$ to $Z$. Pip would like to bundle their strings into groups of size $K$. Each string must belong to exactly one group.

The score of a group is equal to the length of the longest prefix shared by all the strings in that group. For example:

- The group ${RAINBOW, RANK, RANDOM, RANK}$ has a score of 2 (the longest prefix is 'RA').
- The group ${FIRE, FIREBALL, FIREFIGHTER}$ has a score of 4 (the longest prefix is 'FIRE').
- The group ${ALLOCATION, PLATE, WORKOUT, BUNDLING}$ has a score of 0 (the longest prefix is '').

Please help Pip bundle their strings into groups of size $K$, such that the sum of scores of the groups is maximized.
