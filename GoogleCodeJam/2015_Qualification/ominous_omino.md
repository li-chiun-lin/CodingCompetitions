# Problem

An $N$-omino is a two-dimensional shape formed by joining $N$ unit cells fully along their edges in some way. More formally, a $1$-omino is a $1 \times 1$ unit square, and an $N$-omino is an $(N-1)$-omino with one or more of its edges joined to an adjacent $1 \times 1$ unit square. For the purpose of this problem, we consider two $N$-ominoes to be the same if one can be transformed into the other via reflection and/or rotation. For example, these are the five possible $4$-ominoes:

```text
**
**

**
*
*

*
**
*

*
**
 *

*
*
*
*
```

And here are some of the $108$ possible $7$-ominoes:

```text
***
* **
   *

***
* *
**

***
* *
* *

***
* *
  **

***
*
*
*
*

***
 ***
 *

***
 ***
  *

***
 ***
   *

***
 **
  **

***
 *
***
```

Richard and Gabriel are going to play a game with the following rules, for some predetermined values of $X$, $R$, and $C$:

1. Richard will choose any one of the possible $X$-ominoes.
2. Gabriel must use at least one copy of that $X$-omino, along with arbitrarily many copies of any $X$-ominoes (which can include the one Richard chose), to completely fill in an $R \times C$ grid, with no overlaps and no spillover. That is, every cell must be covered by exactly one of the $X$ cells making up an $X$-omino, and no $X$-omino can extend outside the grid. Gabriel is allowed to rotate or reflect as many of the $X$-ominoes as he wants, including the one Richard chose. If Gabriel can completely fill in the grid, he wins; otherwise, Richard wins.

Given particular values $X$, $R$, and $C$, can Richard choose an $X$-omino that will ensure that he wins, or is Gabriel guaranteed to win no matter what Richard chooses?

## Input

The first line of the input gives the number of test cases, $T$. $T$ lines follow.  
Each contains three space-separated integers: $X$, $R$, and $C$.
