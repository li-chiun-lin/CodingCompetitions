# Problem

$A$ and $B$ are the only two candidates competing in a certain election. We know from polls that exactly $N$ voters support $A$, and exactly $M$ voters support $B$. We also know that $N$ is greater than $M$, so $A$ will win.

Voters will show up at the polling place one at a time, in an order chosen uniformly at random from all possible $(N + M)!$ orders. After each voter casts their vote, the polling place worker will update the results and note which candidate (if any) is winning so far. (If the votes are tied, neither candidate is considered to be winning.)

What is the probability that $A$ stays in the lead the entire time -- that is, that $A$ will always be winning after every vote?

## Input

The input starts with one line containing one integer $T$, which is the number of test cases. Each test case consists of one line with two integers $N$ and $M$: the numbers of voters supporting $A$ and $B$, respectively.
