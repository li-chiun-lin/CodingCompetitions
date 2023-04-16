# Problem

To welcome attendees to a developers' conference on Jupiter's moon of Io, the organizers inflated many giant beach balls. Each ball is in roughly the shape of either a 1 or a 0, since those look sort of like the letters I and O. The conference just ended, and so now the beach balls need to be cleaned up. Luckily, the beach ball cleanup robot, BALL-E, is on the job!

The conference was held on an infinite horizontal line, with station 0
in the middle, stations 1,2,… to the right, and stations −1,−2,… to the left. Station 0 contains the conference's only beach ball storage warehouse. Each other station contains at most one beach ball.

Illustration of Sample Cases 1, 2, and 3.

BALL-E has two storage compartments, each of which can hold a single beach ball. One compartment can only hold 1⁠-shaped balls and the other can only hold 0⁠-shaped balls. (The 1⁠-shaped balls are more oblong than the 0⁠-shaped balls, so neither shape of ball will fit in the other shape's compartment.)

BALL-E initially has both the 0 and 1 compartments empty, and it starts off at station 0. The robot can do the following things:

- Move left one station or right one station. This costs 1 unit of power.
- If there is a ball at the current station, and BALL-E is not already storing a ball of that shape, it can put the ball in the appropriate compartment. This takes 0 units of power.
- If there is a ball at the current station, BALL-E can compress it so that its shape becomes the other shape. That is, a 1⁠-shaped ball becomes a 0⁠-shaped ball, or vice versa. It takes C units of power to do this. Note that BALL-E may not change the shape of a ball that it has already put into one of its compartments.
- If BALL-E is at station 0 and is storing at least one ball, it can deposit all balls from its compartment(s) into the beach ball storage warehouse. This takes 0 units of power and leaves both compartments empty.

Notice that if BALL-E moves to a station and there is a ball there, BALL-E is not required to pick it up immediately, even if the robot has an open compartment for it. Also, if BALL-E moves to the station with the warehouse, it is not required to deposit any balls it has.

Find the minimum number of units of power needed for BALL-E to transfer all of the balls to the warehouse, using only the moves described above.
