# Problem

Given a grid of R
rows and C columns each cell in the grid is either 0 or 1.

A segment is a nonempty sequence of consecutive cells such that all cells are in the same row or the same column. We define the length of a segment as number of cells in the sequence.

A segment is called "good" if all the cells in the segment contain only 1s.

An "L-shape" is defined as an unordered pair of segments, which has all the following properties:

    Each of the segments must be a "good" segment.
    The two segments must be perpendicular to each other.
    The segments must share one cell that is an endpoint of both segments.
    Segments must have length at least 2.
    The length of the longer segment is twice the length of the shorter segment. 

We need to count the number of L-shapes in the grid.

Below you can find two examples of correct L-shapes,
Examples of valid L-shapes.

and three examples of invalid L-shapes.
Examples of invalid L-shapes.

Note that in the shape on the left, two segments do not share a common endpoint. The next two shapes do not meet the last requirement, as in the middle shape both segments have the same length, and in the last shape the longer segment is longer than twice the length of the shorter one.
