# Problem

Gooli is a huge company that owns B buildings in a hilly area. The buildings are numbered from 1 to B.

The CEO wants to build a set of slides between buildings that she can use to travel from her office in building 1 to her favorite cafe in building B. Slides, of course, are one-way only, but the buildings are tall and have elevators, so a slide can start in any building and end in any other building, and can go in either direction. Specifically, for any two buildings x and y, you can build either zero or one slides from x to y, and you can build either zero or one slides from y to x. The exception is that no slides are allowed to originate in building B, since once the CEO reaches that building, there is no need for her to do any more sliding.

In honor of Gooli becoming exactly M milliseconds old, the design must ensure that the CEO has exactly M different ways to travel from building 1 to building B using the new slides. A way is a sequence of buildings that starts with building 1, ends with building B, and has the property that for each pair of consecutive buildings x and y in the sequence, a slide exists from x to y. Note that the CEO is not requiring that any building be reachable from any other building via slides.

Can you come up with any set of one or more slides that satisfies the CEO's requirements, or determine that it is impossible?

## Input

The first line of the input gives the number of test cases, T. T lines follow; each consists of one line with two integers B and M, as described above.
