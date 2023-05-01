# Problem

You are the head of the Department of Redundancy Reduction and Superfluity Shrinkage. Currently, the department cannot agree on whether there is too much "red tape" (inefficiency) in the department itself. They have asked you to form a Red Tape Committee to vote on the issue.

The department has N members. For each member, you know the probability Pi that that member will vote "Yes". If a member does not vote "Yes", they necessarily vote "No"; nobody abstains.

You must choose exactly K members to be on the committee. The department rules dictate that K must be an even number to allow for ties, which are seen as part of a healthy bureaucracy.

If you choose committee members to maximize the probability of a tie, what is that probability?

## Input

The first line of the input gives the number of test cases, T. T test cases follow; each consists of two lines. The first line of a test case consists of two integers N and K, the sizes of the department and the committee. The second line of a test case consists of N decimal values Pi; each has exactly two decimal places of precision and represents the probability that the i-th department member will vote "Yes".
