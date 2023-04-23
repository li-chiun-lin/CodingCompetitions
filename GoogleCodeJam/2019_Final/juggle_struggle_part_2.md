# Problem

The first two paragraphs (not counting this one) of this problem and "Juggle Struggle: Part 1" are identical. The problems can otherwise be solved independently; you do not need to read or solve one in order to read or solve the other.

As manager of the Graceful Chainsaw Jugglers group, you have decided to spice the show up a bit. Instead of having each juggler individually juggle their own chainsaws, you want them to form pairs, with each pair throwing the chainsaws back and forth to each other. In this new performance, 2 × N jugglers will be on stage at the same time, arranged into N pairs, with each juggler belonging to exactly one pair.

You think the show will be more impressive if the chainsaws being juggled by different pairs of jugglers are at risk of collision. Let the stage be a two-dimensional plane, and let the straight line segment in that plane that connects the positions of two jugglers in a pair be called the pair's juggling path. When two juggling paths instersect, we say the chainsaws juggled by those pairs are at risk of collision. We call the spatial positions and the pairings of the jugglers an arrangement. An arrangement is magnificent if every two pairs of jugglers' chainsaws are at risk of collision. That is, for the arrangement to be magnificent, each of the N juggling path segments must intersect each of the other N-1 juggling path segments (but these intersections do not necessarily all have to be in the same place).

After some last minute fixes, you have what you think is a magnificent arrangement. Given the rush to put it together, you want to write a checker that can determine whether it is indeed magnificent. If it is not, then at most 25 juggler pairs fail to intersect every other pair. You want your checker to report a list of all those juggler pairs for inspection.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with one line containing a single integer N, the number of pairs of jugglers. Then, N lines follow. The i-th of these lines contains four integers Xi, Yi, X'i, Y'i. (Xi, Yi) and (X'i, Y'i) are the coordinates of the positions of the two jugglers comprising the i-th juggler pair.

## Output

For each test case, output one line containing Case #x: y, where y is uppercase MAGNIFICENT if the input represents a magnificent arrangement. Otherwise, y should be a strictly increasing list of integers. Integer i should be on that list if and only if the juggling path of the i-th juggler pair fails to intersect at least one other juggling path.
