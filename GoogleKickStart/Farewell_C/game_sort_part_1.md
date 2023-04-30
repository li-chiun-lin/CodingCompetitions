# Problem

Amir and Badari are playing a sorting game. The game starts with a string $S$ and an integer $P$ being chosen by an impartial judge. Then, Amir has to split $S$ into exactly $P$ contiguous non-empty parts (substrings). For example, if $S=CODEJAM$ was the chosen string and $P=3$, Amir could split it up as $[COD, EJA, M]$ or as $[CO, D, EJAM]$, but not as $[COD, EJAM]$, $[COD, JA, M]$, $[EJA, COD, M]$, nor as $[CODE, EJA, M]$.

Then, Badari must rearrange the letters within each part to make the list of parts be sorted in non-decreasing lexicographical order. If she can, then she wins. Otherwise, Amir wins.

Given the partition Amir made, can you help Badari win the game, or say that it is not possible?

## Input

The first line of the input gives the number of test cases, $T$. $T$ test cases follow. Each test case consists of two lines.  
The first line of a test case contains a single integer $P$, the number of parts Amir made.  
The second line contains $P$ strings $S_1,S_2,…,S_P$, representing the $P$ parts, in order.
