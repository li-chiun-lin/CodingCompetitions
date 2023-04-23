# Problem

You just showed up to your job as the head chef of the Infinite House of Pancakes, and as usual, you found a disaster in progress! The other chefs accidentally created some enormous circular pancakes, all of the same size. These pancakes are too large to serve whole, so they have already started to chop them up into slices (which, in this problem, are circular sectors). You currently have N slices, the i-th of which is a sector with an internal (central) angle of Ai nanodegrees (a nanodegree is 10-9 degrees).

You have D diners waiting for their food. Each diner wants a single slice that is the same size as every other diner's slice, although they do not care what that size is. But it may not be possible to do this using the current slices, so you may need to make one or more radial cuts.

A cut changes an existing slice with internal angle X into two new slices with internal angles Y and X - Y. You can do this for any 0 < Y < X, and these values do not need to be integers. You may apply further cuts to either or both of these new slices, and so on.

It is OK to have one or more leftover slices (of any size) that are not given to the diners; you can eat those later, since this disaster is making you miss your own breakfast!

Determine the smallest total number of cuts you need to make to satisfy the diners.
Input

The first line of the input gives the number of test cases, T. T test cases follow. Each case begins with one line containing two integers N and D: the number of slices you currently have and the number of diners. Then, there is one more line containing N integers A1, A2, ..., AN; the i-th of these represents the internal angle (in nanodegrees) of the i-th slice.
Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the smallest number of cuts you need, as described above.
