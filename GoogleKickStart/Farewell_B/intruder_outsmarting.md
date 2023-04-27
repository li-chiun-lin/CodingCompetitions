# Problem

Amiria is a cautious internet user, and as such, she is setting up two-factor authentication for her accounts. She is using a special type of security key as an extra precaution to outsmart any intruders that may want to take it. Amiria's security key requires a code to activate. To enter the code, one must place it on wheels with numbers, similar to code padlocks.

Amiria's security key has a sequence of $W$ wheels. Each wheel has the numbers $1$ through $N$ printed in order. By one wheel rotation, the user can move the currently shown integer either to the next or the previous integer. Numbers on the wheel wrap around. This means the number after $N$ is $1$ and the number before $1$ is $N$.

There is no hidden password. To activate Amiria's security key, a person needs to move the wheels such that the sequence of numbers shown is palindromic. That is, the sequence of numbers is the same when read from left to right and from right to left. To slow down intruders, Amiria rigged the security key such that the wheels only rotate in increments of $D$. That is, on a move, a wheel that is currently showing $x$ can be made to show $x−D$ or $x+D$, applying the proper wraparound. That is, if $x−D<1$ the actual number shown after the operation is $x−D+N$, and if $x+D>N$ the actual number shown is $x+D−N$.

Amiria wants to check how much this system would slow down an intruder trying to use her security key. Given the number of wheels and the number currently shown on each wheel, find the minimum number of operations needed to make the sequence of shown numbers palindromic, or report that it is impossible to do so.

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of two lines. The first line of a test case contains 3 integers $W$, $N$, and $D$: the number of wheels in Amiria's security key, the number of integers shown in each of those wheels, and the fixed increment that Amiria rigged for every wheel. The second line of a test case contains $W$ integers $X_1,X_2,…,X_W$, where $X_i$ is the number currently shown in the $i$-th wheel from left to right.
