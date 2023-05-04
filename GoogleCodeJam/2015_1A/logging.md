# Problem

A certain forest consists of N trees, each of which is inhabited by a squirrel.

The boundary of the forest is the convex polygon of smallest area which contains every tree, as if a giant rubber band had been stretched around the outside of the forest.

Formally, every tree is a single point in two-dimensional space with unique coordinates (Xi, Yi), and the boundary is the convex hull of those points.

Some trees are on the boundary of the forest, which means they are on an edge or a corner of the polygon. The squirrels wonder how close their trees are to being on the boundary of the forest.

One at a time, each squirrel climbs down from its tree, examines the forest, and determines the minimum number of trees that would need to be cut down for its own tree to be on the boundary. It then writes that number down on a log.

Determine the list of numbers written on the log.

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of a single line with an integer N, the number of trees, followed by N lines with two space-separated integers Xi and Yi, the coordinates of each tree. No two trees will have the same coordinates.
