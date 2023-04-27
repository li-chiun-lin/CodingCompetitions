# Problem

A mysterious cubic alien ship has appeared in the sky over Toronto! In this problem, Toronto is a plane in three-dimensional space that is parallel to the xz plane at y = -3 km. The alien ship is a solid cube with side length 1 km, centered at (0 km, 0 km, 0 km), with its eight corners at (+/- 0.5 km, +/- 0.5 km, +/- 0.5 km). The ship is casting an ominous shadow onto the plane; formally, the shadow is the orthogonal projection of the cube onto the plane. (We consider the sun to be a point infinitely far above the Toronto plane along the y-axis.)

The military is willing to tolerate the ship as long as the aliens meet their bureaucratic demand: the shadow must cover an area of the plane that is acceptably close to A km2 (see the Output section for a precise definition). They have hired you, a geometric linguistics expert, to convey this demand to the aliens. In your communications so far, you have learned that the ship cannot change size, and the center of the ship cannot move, but the ship is able to rotate arbitrarily in place.

Please find a way that the aliens can rotate the ship so that the shadow's area is close to A. Express your rotation using three points: the centers of any three non-pairwise-opposing faces.

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of one line with a rational A, the desired area of the shadow, in km2, with exactly six digits after the decimal point.

It is guaranteed that there is always a way to rotate the ship in the desired manner for the values of A allowed in this problem.
