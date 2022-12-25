# Problem

There's an island in the sea. The island can be described as a matrix with $R$ rows and $C$ columns, with $H[i] [j]$ indicating the height of each unit cell. Following is an example of a $3 \times 3$ island:

```text
3 5 5
5 4 5
5 5 5
```

Sometimes, a heavy rain falls evenly on every cell of this island. You can assume that an arbitrarily large amount of water falls. After such a heavy rain, some areas of the island (formed of one or more unit cells joined along edges) might collect water. This can only happen if, wherever a cell in that area shares an edge (not just a corner) with a cell outside of that area, the cell outside of that area has a larger height. (The surrounding sea counts as an infinite grid of cells with height 0.) Otherwise, water will always flow away into one or more of the neighboring areas (for our purposes, it doesn't matter which) and eventually out to sea. You may assume that the height of the sea never changes. We will use $W[i] [j]$ to denote the heights of the island's cells after a heavy rain.

Here are the heights of the example island after a heavy rain. The cell with initial height $4$ only borders cells with higher initial heights, so water will collect in it, raising its height to $5$. After that, there are no more areas surrounded by higher cells, so no more water will collect. Again, note that water cannot flow directly between cells that intersect only at their corners; water must flow along shared edges.

Following is the height of the example island after rain:

```text
3 5 5
5 5 5
5 5 5
```

Given the matrix of the island, can you calculate the total increased height $sum(W[i] [j]-H[i] [j])$ after a heavy rain?
