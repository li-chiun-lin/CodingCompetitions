# Problem

You are given a set P
of N

distinct points in the two-dimensional plane. You want to find a maximum set of triangles such that:

- Each vertex of a triangle in your set is a point from P and each point in P is a vertex of at most one triangle in your set.
- Each triangle in your set has positive area (i.e., its 3 vertices are not collinear).
- For any two sides of triangles in your set, their intersection is either empty or an endpoint of one of them.
- For any two triangles in your set, the intersection of the areas strictly inside those triangles is either empty or equal to one of them.

For example, the set of triangles depicted below meets the definition above.

Examples of triangles that meet the definition.

On the other hand, each pair of a yellow and a red triangle in the picture below does not meet the definition.
