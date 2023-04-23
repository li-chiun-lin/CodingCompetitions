# Problem

The first two paragraphs (not counting this one) of this problem and "Juggle Struggle: Part 2" are identical. The problems can otherwise be solved independently; you do not need to read or solve one in order to read or solve the other.

As manager of the Graceful Chainsaw Jugglers group, you have decided to spice the show up a bit. Instead of having each juggler individually juggle their own chainsaws, you want them to form pairs, with each pair throwing the chainsaws back and forth to each other. In this new performance, 2 × N jugglers will be on stage at the same time, arranged into N pairs, with each juggler belonging to exactly one pair.

You think the show will be more impressive if the chainsaws being juggled by different pairs of jugglers are at risk of collision. Let the stage be a two-dimensional plane, and let the straight line segment in that plane that connects the positions of two jugglers in a pair be called the pair's juggling path. When two juggling paths instersect, we say the chainsaws juggled by those pairs are at risk of collision. We call the spatial positions and the pairings of the jugglers an arrangement. An arrangement is magnificent if every two pairs of jugglers' chainsaws are at risk of collision.

After a lot of thinking and designing, you came up with a magnificent arrangement. You wrote down the positions of the jugglers on the stage and the pairings of the jugglers on a piece of paper. Unfortunately, a bad chainsaw throw cut the paper in half, and you have lost the half with the pairings. Since the stage decorations have already been designed based on the positions of the jugglers, those positions cannot be changed. The show's highly anticipated debut is a mere few hours away, so you need to find a magnificent arrangement that works! Given every juggler's position on a two-dimensional stage, find a pairing of them that yields a magnificent arrangement.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with one line containing a single integer N, the number of pairs of jugglers. Then, 2 × N lines follow. The i-th of these lines contains two integers Xi and Yi, representing the coordinates of the position of the i-th juggler.

## Output

For each test case, output one line containing Case #x: j1 j2 ... j2 × N, representing that jugglers i and ji are to be paired together, for every i. Notice that jji = i for every i.
