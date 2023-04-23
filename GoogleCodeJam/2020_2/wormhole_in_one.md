# Problem

You are participating in an inter-galactic hyperspace golf competition, and you have advanced to the final round! You are really determined to triumph, and so you want to prepare a winning strategy.

In hyperspace golf, just as in conventional golf, you hit a ball with a club, which sends the ball in a direction chosen by you. The playing field in hyperspace golf is a 2-dimensional plane with points representing the different holes. The ball is also represented by a point, and you get to choose where the ball starts, as long as it is not in the same place as a hole.

Since this is hyperspace golf, the players are allowed to turn some pairs of holes into wormholes by linking them together. Each hole can be either left as a normal hole, or linked to at most one other hole (never to itself). Wormholes are undirected links, and can be traversed in either direction.

Because the environment is frictionless, when you hit the ball, it moves in a straight direction that it maintains forever unless it reaches a hole; call that hole h. Upon touching hole h, the ball stops if h is not connected to another hole. If h is connected to another hole h', then the ball immediately comes out of h' and continues moving in the same direction as before.

You know the location of each hole. You want to maximize the number of distinct holes you can touch with a single hit. With that goal in mind, you want to pick the ball's starting location, the direction in which to send the ball, and which pairs of holes, if any, to link together as wormholes. The ball cannot start in the same place as a wormhole. When the ball goes through a wormhole, both the hole it goes into and the hole it comes out of are counted towards your total. Each hole is only counted once, even if the ball goes into it or comes out of it (or both) multiple times. If the ball stops in a hole, that hole also counts toward your total.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line containing a single integer N: the total number of holes. The following N lines contain two integers each: Xi and Yi, representing the X and Y coordinates, respectively, of the i-th hole.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of distinct holes you can touch if you make optimal decisions as described above.
