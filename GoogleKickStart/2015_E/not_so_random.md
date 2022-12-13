# Problem

There is a certain "random number generator" (RNG) which takes one nonnegative integer as input and generates another nonnegative integer as output. But you know that the RNG is really not very random at all! It uses a fixed number $K$, and always performs one of the following three operations:

- with probability $A/100$: return the bitwise AND of the input and $K$
- with probability $B/100$: return the bitwise OR of the input and $K$
- with probability $C/100$: return the bitwise XOR of the input and $K$

(You may assume that the RNG is truly random in the way that it chooses the operation each time, based on the values of $A$, $B$, and $C$.)

You have $N$ copies of this RNG, and you have arranged them in series such that output from one machine will be the input for the next machine in the series. If you provide $X$ as an input to the first machine, what will be the expected value of the output of the final machine in the series?
