# Problem

You may have heard of the platinum-iridium cylinder that serves as the standard for the kilogram, but did you know that there is a special line segment used as the standard for the kilometer? It runs from (0, 0) to (0, 1000) in a 2D plane in a confidential and very flat location.

Naturally, this segment is extremely valuable, so it is protected by N rotating surveillance lasers, which are rays in the 2D plane. Each laser has a fixed endpoint, and it rotates around that endpoint at a constant speed of 1 revolution per second. Whether each laser rotates clockwise or counterclockwise is chosen uniformly and independently at random by the security system.

Lasers are not blocked by other lasers or their endpoints, or the segment itself. No laser has an endpoint on the segment.

You have been hired to audit the security system, but all you have to work with is a single snapshot from an instant in time, which shows the endpoint and orientation (at that instant) of each laser. Since the image is just a snapshot, you have no way of inferring the rotation directions of the lasers.

You have determined that the segment could be stolen in a heist if there is ever a non-empty open interval of time during which no laser is touching the segment. What is the probability of this happening?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line containing one integer N: the number of lasers. Then, N more lines follow. The i-th of these lines represents the ray that is the i-th laser, and contains four integers Xi, Yi, Xi', and Yi', representing the 2D coordinates of the endpoint of the ray, followed by the 2D coordinates of some other point on the ray.
