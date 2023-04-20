# Problem

A matryoshka is a type of doll that originated in Russia over a century ago. Their defining characteristic is that they consist of a set of dolls, all of a different size, with smaller dolls fitting nicely inside larger dolls.

In this problem, we work with matrygons, which are sets of regular convex polygons that follow a similar nesting pattern. A matrygon consists of a set of regular convex polygons with positive area p1,p2,…,pk
such that, for all i, the vertices of pi+1 overlap with a proper subset of the vertices of pi (pi+1 has strictly less vertices than pi

).

For example, the following pictures illustrates two matrygons. The first one contains 3
regular convex polygons: a regular icositetragon (24 sides), a regular hexagon (6 sides), and an equilateral triangle (3 sides). The second one contains 2 regular convex polygons: a regular icosidigon (22 sides) and a regular hendecagon (11 sides). Each of these matrygons has 33

total sides among all polygons in it.

A matrygon containing a regular icositetragon (24 sides), a regular hexagon (6 sides), and an equilateral triangle (3 sides) A matrygon containing a regular icosidigon (22 sides) and a regular hendecagon (11 sides)

Given a fixed total number of sides N
, calculate the largest number of polygons that can be part of a matrygon such that the total number of sides among all polygons in it is exactly N.
