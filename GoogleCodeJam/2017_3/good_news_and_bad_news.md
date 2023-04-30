# Problem

You would like to get your F friends to share some news. You know your friends well, so you know which of your friends can talk to which of your other friends. There are P such one-way relationships, each of which is an ordered pair (Ai, Bi) that means that friend Ai can talk to friend Bi. It does not imply that friend Bi can talk to friend Ai; however, another of the ordered pairs might make that true.

For every such existing ordered pair (Ai, Bi), you want friend Ai to deliver some news to friend Bi. In each case, this news will be represented by an integer value; the magnitude of the news is given by the absolute value, and the type of news (good or bad) is given by the sign. The integer cannot be 0 (or else there would be no news!), and its absolute value cannot be larger than F2 (or else the news would be just too exciting!). These integer values may be different for different ordered pairs.

Because you are considerate of your friends' feelings, for each friend, the sum of the values of all news given by that friend must equal the sum of values of all news given to that friend. If no news is given by a friend, that sum is considered to be 0; if no news is given to a friend, that sum is considered to be 0.

Can you find a set of news values for your friends to communicate such that these rules are obeyed, or determine that it is impossible?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with two integers F and P: the number of friends, and the number of different ordered pairs of friends. Then, P more lines follow; the i-th of these lines has two different integers Ai and Bi representing that friend Ai can talk to friend Bi. Friends are numbered from 1 to F.
