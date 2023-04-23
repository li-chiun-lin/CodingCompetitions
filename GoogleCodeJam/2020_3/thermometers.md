# Problem

You are part of a team of researchers investigating the climate along the coast of an island. The island's coast is modeled as a circle with a circumference of K kilometers. There is a lighthouse on the coast which occupies a single point on the circle's circumference. Each point on the coast is mapped to a real number in the range [0, K); formally, point x is the point on the coast that is x kilometers away from the lighthouse when walking clockwise along the coast. For example, if K = 5, point 0 is the point where the lighthouse is, point 1.5 is the point that is 1.5 kilometers away from the lighthouse in the clockwise direction, and point 2.5 is the point that is located at the diametrical opposite of the lighthouse.

You are in charge of studying coastal temperatures. Another team installed a coastal temperature measuring system that works as follows: a number of thermometers were deployed at specific points to measure the temperature at those points. No two thermometers were placed at the same point. In that team's model, points without thermometers are assumed to have the same temperature as the one measured by the closest thermometer. For points that are equidistant from two thermometers, the thermometer in the clockwise direction is used (the first one you would encounter if walking clockwise from the point).

Unfortunately, you do not know how many thermometers the system used or where they were placed, but you do have access to the system's temperature data. It is given as two lists of N values each X1, X2, ..., XN and T1, T2, ..., TN, representing that each point x where Xi ≤ x < Xi+1 is assigned temperature Ti, for each 1 ≤ i < N, and each point x where 0 ≤ x < X1 or XN ≤ x < K is assigned temperature TN. The points are enumerated in the clockwise direction, so Xi < Xi+1, for all i.

You want to determine the smallest number of thermometers that, when placed in some set of locations, could have produced the observed data.

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of three lines. The first line of a test case contains two integers K and N: the circumference of the island and the size of the lists representing the temperature data. The second line contains N integers X1, X2, ..., XN. The third line contains N integers T1, T2, ..., TN. The way in which the integers in the second and third line represent the temperatures is explained above.

## Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of thermometers that could have produced the observed input data, as described above.
