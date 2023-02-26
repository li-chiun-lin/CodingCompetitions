# Problem

Watson and Sherlock are gym buddies.

Their gym trainer has given them three numbers, $A$, $B$, and $N$, and has asked Watson and Sherlock to pick two different strictly positive integers $i$ and $j$, where $i$ and $j$ are both less than or equal to $N$. Watson is expected to eat exactly $i^A$ sprouts every day, and Sherlock is expected to eat exactly $j^B$ sprouts every day.

Watson and Sherlock have noticed that if the total number of sprouts eaten by them on a given day is divisible by a certain integer $K$, then they get along well that day.

So, Watson and Sherlock need your help to determine how many such pairs of $(i,j)$ exist, where $i \neq j$ and they get along well that day. As the number of pairs can be really high, please output it modulo $10^9+7$.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of one line with 4 integers $A$, $B$, $N$ and $K$, as described above.
