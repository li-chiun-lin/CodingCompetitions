# Problem

Ben the brilliant video game designer is trying to design maps for his upcoming augmented-reality mobile game. Recently, he has created a map which is represented as a matrix of R rows and C columns. The map consists of a bunch of . characters representing empty squares, a bunch of # characters representing impassable walls, a single start position represented by S and a single finish position represented by F. For example, the map could look like:

#############
#S..#..##...#
###.##..#.#F#
#...##.##.###
#.#.........#
#############

In Ben's game, a path is a sequence of steps (up, down, left or right) to go from one cell to another while not going through any impassable walls.

Ben considers a good map to have the following properties:

- There is a path between any two empty squares (including the start and finish positions).
- To preserve structural integrity, impassable walls must meet at edges and not just corners. For every 2×2 region in the map, if the region contains exactly two walls, then those walls are either in the same row or the same column. In other words, there is no 2×2 region where the walls are in one of these two configurations:
```text
#.   .#
.#   #.
```
- The boundary consists of only impassable walls. A cell is considered part of the boundary if it is in the uppermost/lowermost rows or if it is in the leftmost/rightmost columns.

The distance of the shortest path is the minimum number of steps required to reach the finish position from the start position. For instance, the shortest path in the above example takes 17 steps.

Being such a clever mapmaker, Ben realized that he has created a map that is too hard for his friends to solve. He would like to reduce its difficulty by removing some of the impassable walls. In particular, he wants to know whether it is possible to remove zero or more impassable walls from his map such that the shortest path from start to finish takes exactly D steps, and that the resulting map is still good. Note that it is not enough to simply find a path with D steps; D must be the number of steps in the shortest path.

For example, if D = 15, we could remove the impassable wall directly below the finish position to get a good solution.

```text
#############
#S..#..##...#
###.##..#.#F#
#...##.##.#.#
#.#.........#
#############
```

There is no solution if D = 5.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing three space-separated integers R, C and D: the number of rows and columns in the map, and the desired number of steps in the shortest path from start to finish after possibly removing impassable walls. R lines follow, each consisting of C characters (either ., #, S or F) representing Ben's map.

It is guaranteed that the map is good, as described in the problem statement.
