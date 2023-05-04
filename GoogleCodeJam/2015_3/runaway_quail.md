# Problem

Oh no -- your N pet quail have all gotten loose! You are currently at position 0 on a line; the ith quail starts off at some nonzero integer (positive or negative) position Pi on that line, in meters, and will continuously run away from you at a constant integer speed of Si meters per second. You can run at a constant integer speed of Y meters per second, and can change direction instantaneously whenever you want. Note that quail constantly run away from you even if you are not running toward them at the time. Whenever you occupy the same point as a quail, that quail is caught (this takes no additional time).

What is the minimum number of seconds it will take you to catch all of the quail?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with two space-separated integers Y, your speed, and N, the number of quail, and is followed by two more lines with N space-separated integers each. The first of these gives the positions Pi of the quail, and the second gives the speeds Si.
