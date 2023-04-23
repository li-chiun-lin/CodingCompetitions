# Problem

Lauren is trying to play the most beautiful notes possible using a harp. The harp is a circle with a radius of R centimeters. To play a note, a cord must be attached to the harp in a way that connects two different attachment points on the perimeter of the circle. Lauren then plucks this cord to play a note.

There are N attachment points on the perimeter of the circular harp at which a cord can be attached. The i-th such attachment point is at a location that is Di nanodegrees (a nanodegree is 10-9 degrees) clockwise around the perimeter of the circular harp, starting from the rightmost point on the perimeter.

Not all attachment points use the same technology to properly fix the cords onto them. The i-th attachment point requires Li centimeters of cord to be used for attaching. A cord fixed between two different attachment points i and j needs to be exactly Li + Lj + distance(i, j) centimeters long. By distance(i, j) we mean the length of the geometric chord connecting the i-th and j-th attachment points, that is, the Euclidean distance between the two points.

Lauren thinks that notes sound better when they come from longer cords. What are the K longest cords that can be used with Lauren's harp?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of a test case contains three integers: N, R and K: the number of attachment points, the radius of the circular harp in centimeters, and the number of lengths of cords that Lauren is interested in knowing.

The next N lines describe the attachment points. The i-th of these lines contains two integers, Di and Li, which describe the position (in number of nanodegrees clockwise from the rightmost point of the harp) and length of cord in centimeters needed at the i-th attachment point.

## Output

For each test case, output one line containing Case #x: y1 y2 ... yK, where x is the test case number (starting from 1), and yn is the n-th value in the list of lengths of all N×(N-1)/2 cords that can be used in Lauren's harp, sorted in non-increasing order.

Each yn will be considered correct if it is within an absolute or relative error of 10-9 of the correct answer. See the FAQ for an explanation of what that means, and what formats of real numbers we accept.
