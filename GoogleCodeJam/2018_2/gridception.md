# Problem

The master thief Jom Codd is able to infiltrate the dreams of others. Since dream-viewing technology is not very good yet, Codd sees a dream as a dream grid of unit cells, each of which is white or black.

Given a starting dream grid, Codd can go deeper by replacing each white cell with a 2x2 grid of white cells, and each black cell with a 2x2 grid of black cells; this creates a new dream grid that is four times larger. He can go deeper again from that grid, and so on. For example, given this starting dream grid:

```text
BBB
BWB
BBB
```

then going deeper once produces this new dream grid:

```text
BBBBBB
BBBBBB
BBWWBB
BBWWBB
BBBBBB
BBBBBB
```

and going deeper again produces this new dream grid:

```text
BBBBBBBBBBBB
BBBBBBBBBBBB
BBBBBBBBBBBB
BBBBBBBBBBBB
BBBBWWWWBBBB
BBBBWWWWBBBB
BBBBWWWWBBBB
BBBBWWWWBBBB
BBBBBBBBBBBB
BBBBBBBBBBBB
BBBBBBBBBBBB
BBBBBBBBBBBB
```

and so on.

Codd has just infiltrated a dream and viewed its starting dream grid. He is on a very difficult mission, and he knows that he will need to go deeper many times. To help him navigate, he is looking at various patterns in the starting dream grid. A pattern consists of a single group of cells connected by shared edges (shared corners do not count as connections), plus their colors. A pattern might contain internal gaps (as long as the pattern's cells are a single connected group); such gaps are not considered part of the pattern. Two patterns are the same if and only if they have the same number and arrangement of cells (not reflected or rotated), with the same colors.

For example, in the grids above, the following 8-cell pattern is present in the starting grid:

```text
BBB
B B
BBB
```

It is not present after going deeper once, but it is present after going deeper twice, and three times, and so on for every deeper dream grid.

Codd wants to find the largest pattern from the starting dream grid that will be present in at least a googol (10100) of deeper dream grids. For the given example, the pattern above is the largest such pattern. Even though it is not present after going deeper once, it is present in at least a googol of deeper levels. Other such patterns of smaller sizes also meet this condition, but there is no 9-cell pattern that does; the only such pattern would have to be identical to the entire starting dream grid, and that pattern will never show up in any deeper dream grid, let alone in a googol of them.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with two integers R and C: the numbers of rows and columns, respectively, in the dream grid. Each case continues with R more lines of C characters each; every such character is either B or W. These lines directly represent the dream grid.
