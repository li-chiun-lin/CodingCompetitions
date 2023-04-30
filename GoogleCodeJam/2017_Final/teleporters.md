# Problem

A short, short time into the future, in a nearby galaxy, you find yourself wanting to take a little trip and get away from the responsibilities of being Planet Thundera's only manufacturer of yarn. You decide to travel to Planet Care-a-Lot, the most relaxing planet there is. To travel, you are going to use the network of interstellar teleporters.

A teleporter is a small machine floating around somewhere in space. You can use it remotely from any point in space, but, due to the conservation of teleportation distance principle, it can teleport you to any other point in space at exactly the same L1 distance from the teleporter as your L1 distance to it before the teleportation. The L1 distance between two points at coordinates (x0, y0, z0) and (x1, y1, z1) is given by |x0 - x1| + |y0 - y1| + |z0 - z1|. Unfortunately, your space jetpack is broken, so you cannot move around on your own; to travel, you can only use the teleporters. You start at Planet Thundera. You can use a teleporter to travel from Planet Thundera to a point p1, then use another to get from p1 to p2, and so on. The last teleportation must take you exactly to Planet Care-a-Lot.

Given the locations in 3-dimensional space of both planets and all the available teleporters, find out if it is possible for you to make the trip using only teleporters. If the trip can be made, what is the minimum number of teleportations needed to get to your destination? (Even if two teleportations use the same teleporter, they still count as separate teleportations.)

The input is given as points with coordinates that are all integers that fall within a certain range. However, you are allowed to teleport to intermediate points with integer or non-integer coordinates, and there are no range restrictions on the points you can visit.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a single line with a single integer N, the number of teleporters available. Then, N+2 lines follow, each containing three integers Xi, Yi, and Zi. The first of these lines represents the coordinates of your home planet, Thundera. The second of these lines represents the coordinates of your destination planet, Care-A-Lot. Each of the remaining N lines represents the coordinates of one of the teleporters.
