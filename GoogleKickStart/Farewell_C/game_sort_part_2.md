# Problem

Amir and Badari are playing a sorting game. The game starts with a string $S$ and an integer $P$ being chosen by an impartial judge. Then, Amir has to split $S$ into exactly $P$ contiguous non-empty parts (substrings). For example, if $S=CODEJAM$ was the chosen string and $P=3$, Amir could split it up as $[COD, EJA, M]$ or as $[CO, D, EJAM]$, but not as $[COD, EJAM]$, $[COD, JA, M]$, $[EJA, COD, M]$, nor as $[CODE, EJA, M]$.

Then, Badari must rearrange the letters within each part to make the list of parts be sorted in non-decreasing lexicographical order. If she can, then she wins. Otherwise, Amir wins.

Given the initial string and number of parts, can you help Amir win the game by choosing his parts in a way Badari cannot win herself? If not, say that it is not possible.

## Input

The first line of the input gives the number of test cases, $T$. $T$ lines follow, each describing a single test case containing an integer $P$ and a string $S$, the number of parts and string to be partitioned, respectively.
