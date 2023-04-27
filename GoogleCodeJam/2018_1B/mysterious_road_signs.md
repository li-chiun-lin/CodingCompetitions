# Problem

The town of Signfield is on a perfectly straight and infinitely long road running from west to east. Along that road, there is a sequence of S mysterious road signs with numbers on both sides. The i-th sign (numbered in order from west to east) is at a point Di kilometers east of Signfield, and has a number Ai on the west-facing side and a number Bi on the east-facing side.

Nobody in Signfield knows what these signs are trying to say. You think that the numbers on the west sides of the signs are intended for drivers traveling east, and that they represent distances to some particular destination. Similarly, you think that the numbers on the east sides of the signs are for drivers traveling west, and that they represent distances to some particular destination. You suspect that not all of the signs may be consistent with this theory, though.

To start testing your theory, you are interested in finding valid sets of signs that obey the following rules:

- The set is a contiguous subsequence of the sequence of all road signs. (The entire sequence also counts as a contiguous subsequence.)
- There exist locations M and N kilometers east of Signfield, where M and N are (not necessarily positive and not necessarily distinct) numbers, such that for every sign in that set, at least one of the following is true:

  - Di + Ai = M.
  - Di - Bi = N.

What is the largest possible number of signs in a valid set as described above, and how many different valid sets of that size are there?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line containing one integer S: the number of road signs. Then, S more lines follow. The i-th of these lines represents the i-th sign (in west-to-east order), and contains three integers Di, Ai, and Bi: the sign's distance (in kilometers) east of Signfield, the number on its west side, and the number on its east side.
