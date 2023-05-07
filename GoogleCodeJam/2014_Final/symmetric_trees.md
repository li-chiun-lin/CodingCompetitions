# Problem

Given a vertex-colored tree with N nodes, can it be drawn in a 2D plane with a line of symmetry?

Formally, a tree is line-symmetric if each vertex can be assigned a location in the 2D plane such that:

    All locations are distinct.
    If vertex vi has color C and coordinates (xi, yi), there must also be a vertex vi' of color C located at (-xi, yi) -- Note if xi is 0, vi and vi' are the same vertex.
    For each edge (vi, vj), there must also exist an edge (vi', vj').
    If edges were represented by straight lines between their end vertices, no two edges would share any points except where adjacent edges touch at their endpoints.

## Input

The first line of the input gives the number of test cases, T. T test cases follow.

Each test case starts with a line containing a single integer N, the number of vertices in the tree.

N lines then follow, each containing a single uppercase letter. The i-th line represents the color of the i-th node.

N-1 lines then follow, each line containing two integers i and j (1 ≤ i < j ≤ N). This denotes that the tree has an edge from the i-th vertex to the j-th vertex. The edges will describe a connected tree.
