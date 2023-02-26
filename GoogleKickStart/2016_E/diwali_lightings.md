# Problem

Diwali is the festival of lights. To celebrate it, people decorate their houses with multi-color lights and burst crackers. Everyone loves Diwali, and so does Pari. Pari is very fond of lights, and has transfinite powers, so she buys an infinite number of red and blue light bulbs. As a programmer, she also loves patterns, so she arranges her lights by infinitely repeating a given finite pattern S.

For example, if S is **BBRB**, the infinite sequence Pari builds would be **BBRBBBRBBBRB...**

Blue is Pari's favorite color, so she wants to know the number of blue bulbs between the $I$-th bulb and $J$-th bulb, inclusive, in the infinite sequence she built (lights are numbered with consecutive integers starting from $1$). In the sequence above, the indices would be numbered as follows:

```text
B  B  R  B  B  B  R  B  B  B  R  B ...
1  2  3  4  5  6  7  8  9  10 11 12
```

So, for example, there are $4$ blue lights between the $4$-th and $8$-th positions, but only $2$ between the $10$-th and $12$-th.

Since the sequence can be very long, she wrote a program to do the count for her. Can you do the same?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow.
First line of each test case consists of a string $S$, denoting the initial finite pattern.
Second line of each test case consists of two space separated integers $I$ and $J$, defined above.
